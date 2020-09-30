/*  C++ Program to Check given number is Prime number or not  */

#include<iostream>
using namespace std;

int main()
{
  int i,n;

  cout<<"Enter any positive number :: ";
  cin>>n;

  if(n==1)
  {
    cout<<"\nSmallest prime number is :: 2";
  }

  for(i=2;i<n;i++)
  {
      if(n%i==0)
      {
          cout<<"\nThe Entered Number [ "<<n<<" ] is NOT a prime number.\n";
          break;
      }
  }

 if(n==i)
 {
    cout<<"\nThe Entered Number [ "<<n<<" ] is a prime number.\n";
 }

  return 0;
}
