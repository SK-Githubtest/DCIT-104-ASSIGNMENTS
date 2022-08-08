/*A simple code to calculate the sum of all even numbers less than a number*/
#include <iostream>
using namespace std;

int main (){
    int num1;
    int i = 1;
    int sum = 0;

    cout << "input a number: ";
    cin >> num1;

    while (i < num1){
        if (i%2 == 0){
            sum = sum + i;
        }
    i ++;
    }

    cout <<"The sum of even numbers less than " <<num1<< " is: " <<sum;
    
    return 0;
}
