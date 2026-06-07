#include <iostream>

using namespace std;

int revnum = 0;

void reverse(int num)
{
    if (num == 0)
        return; 
    int rem = num % 10;
    revnum = (revnum * 10) + rem;
    reverse(num / 10);
}

int main()
{
    int input;
    cout << "enter number" << "\n";
    cin >> input;

    revnum = 0;            
    reverse(input);
    int reversed = revnum; 

    cout << "Reversed: " << reversed << "\n";

    if (input == reversed)
        cout << "its pall" << "\n";
    else
        cout << "its not" << "\n";

    return 0;
}