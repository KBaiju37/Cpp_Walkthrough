#include <iostream>
#include <string>

using namespace std;
int arr[10]={1,5,7,12,24,32,6,80,42,8};
int even=0;
int odd=0;



int main() {
    
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"array is : ";
    for(int i=0;i<10;i++){
        
        cout<<arr[i]<<' ';
    }
    cout<<"\n";
    cout<<even<<"\n";
    cout<<odd<<"\n";
    

    
    return 0;
}