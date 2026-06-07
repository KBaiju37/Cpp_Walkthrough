#include <iostream>
#include <string>

using namespace std;
int input;

int main()
{
cout<<"enter no to check prime"<<"\n" ;  
cin>> input;
for(int i=2;i<input/2;i++)
{
  if(input%i==0){
      cout<< "not prime";
      break;
  }else
  {
      cout<<"Prime";
      break;
  }
  
}
    return 0;
}