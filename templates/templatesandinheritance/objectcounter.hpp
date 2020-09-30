
#include <stddef.h>

template <typename CountedType>
class ObjectCounter {
  private:
    static size_t count;    // number of existing objects

  protected:
    // default constructor
    ObjectCounter() { 
        ++count;
    }

    // copy constructor
    ObjectCounter (ObjectCounter<CountedType> const&) {
        ++count; 
    }

    // destructor
    ~ObjectCounter() { 
        --count;
    }

  public:
    // return number of existing objects:
    static size_t live() { 
        return count; 
    }
};

// initialize counter with zero
template <typename CountedType>
size_t ObjectCounter<CountedType>::count = 0;
