#include<iostream>
using namespace std;

int main(){
    int num1 = 0 ;
    int num2 = 0 ;
    int num = 1;
    
    while (num != 0){
    cout << "Enter an integer: ";
    cin >> num ;

    if (num != 0){

        
        if (num % 2 == 0){
        num1++ ;
    
        }
        else {num2++ ;
        }      
    }
    }
    cout << "#Even numbers = " << num1 << endl;
    cout << "#Odd numbers = " << num2 << endl;

    return 0;
}
