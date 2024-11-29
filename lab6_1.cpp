#include<iostream>
using namespace std;

int main(){

    int even_num = 0;
    int odd_num = 0;
    int num = 0;

    do
    {
        cout << "Enter an integer: ";
        cin >> num;

        if (num%2 == 0 && num != 0)
        {
            even_num++;
        }
        else if(num%2 == 1){

            odd_num++;
        }
        
        
    } while (num != 0);
    
    
    cout << "#Even numbers = " << even_num << endl;
    cout << "#Odd numbers = " << odd_num << endl;
    return 0;
}
