
/***************************************************************************************
** CODE IS WRITTEN BY : MOHIT GONDULEY **
** PLATFORM : WINDOWS-XP service pack2 **
** IDE : MSVS 10 **
** NOTE : This example is to show how can multiple policies be combine very efficiently.
*****************************************************************************************/

#include <iostream>
#include <stdio.h>
//#include <tchar.h>

using namespace std;

//-- THREE POLCIES AS BELOW i.e. NoChecking , EnforceNotNull, and EnsureNotNull -------------
//------- 1st POLICY ------------------------
template <typename T> 
struct NoChecking
{
    static void Check(T* t)
    {
        if(t == NULL)
            std::cout<<std::endl<<"NoChecking : Value is NULL "<<std::endl;
        else
            std::cout<<std::endl<<"NoChecking : Value is NOT NULL "<<std::endl;
    }
};



//------------- 2nd POLICY ----------------------------

template <typename T> 
struct EnforceNotNull
{
    class NullPointerException : public std::exception {  };
    static void Check(T* ptr)
    {
        if (!ptr) throw NullPointerException();
    }
};

//-------------- 3rd POLICY ---------------------------



template <typename T> 
struct EnsureNotNull
{
    static void Check(T*& ptr)
    {
        if (!ptr) ptr = GetDefaultValue();
    }
    T const& GetDefaultValue() {  }
};

//-----------------------------------------



template < typename T,  template <typename> class CheckingPolicy, template <typename> class ThreadingModel >
class SmartPtr : public CheckingPolicy<T>, public ThreadingModel<SmartPtr<T,CheckingPolicy,ThreadingModel>>
{
public:
    SmartPtr(T* t=NULL)
    {
        if(t!=NULL)
        {
            pointee_ = t;
        }
    }
    ~SmartPtr(void)
    {
        if(pointee_!=NULL)
        {
            delete pointee_;
        }
    }
    T* operator->()
    {
        typename ThreadingModel<SmartPtr>::Lock  guard(*this);
        CheckingPolicy<T>::Check(pointee_);
        guard.Release();
        return pointee_;
    }
private:
    T* pointee_;
};


template <typename SmartPtr> 
struct SingleThreadingModel
{
    class Lock
    {
    private :
        SmartPtr  &m_ptrSmartP;
        bool m_bLock;
    public:
        Lock(SmartPtr& sp):m_ptrSmartP(sp),m_bLock(true)
        {
            std::cout<<std::endl<<"......Applying the Lock......"<<std::endl;
        }
        void Release(void)
        {
            if(m_bLock == true)
            {
                std::cout<<std::endl<<"......Releasing the Lock......"<<std::endl;
                m_bLock = false;
            }
        }
    };
};



class A
{
public:
    A() {
        std::cout<<std::endl<<"A Constructor"<<std::endl;
    }
    ~A() {
        std::cout<<std::endl<<"A Destructor"<<std::endl;
    }
    void MyName(void)
    {
        std::cout<<std::endl<<"I am instance of class A ...."<<std::endl;
    }
};

typedef SmartPtr<A, NoChecking, SingleThreadingModel>       ClassA_Ptr;
typedef SmartPtr<A, EnforceNotNull, SingleThreadingModel>   SafeClassA_Ptr;


int main()
{
    ClassA_Ptr aptr = new A;
    aptr->MyName();
    SafeClassA_Ptr safe_aptr = new A;
    safe_aptr->MyName();
    return 0;
}
