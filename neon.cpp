#include <iostream>

using namespace std;

int revnum = 0;

void arm(int num)
{
    if (num == 0)
        return;  
    int rem = num % 10;
    revnum = revnum+(rem);
    arm(num / 10);
    
}

int main()
{
    int input;
    cout << "enter number" << "\n";
    cin >> input;

    revnum = 0;            
    arm(input*2);
    cout<<revnum<<"\n";
    
    if(input==revnum){
        cout<<"its neon"<<"\n";
    }else{
        cout<<"its not";
    }
  

    return 0;
}