#include<iostream>
using namespace std;

// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to reduce code repetition
// void -> which doesn't return anything
// return 
// parameterised
// non-parameterised

// void and parameterised
void greeting(string name){
    cout << "Hey " << name;
}

// void and non-parameterised
void greeting2(){
    cout << "Hey stranger";
}

// Take two numbers and print its sum
// return and parameterised
int sum (int a, int b){
    return a+b;
}

// Make sure that the function returns something when its not void.

// void doSomething(int num){
//     // pass by value is a copy of the variable
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

void doSomething(int &num){
    // pass by reference makes changes in the original variable
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// Arrays are always passed by refernce, we don't need to use & sign to make it pass by reference besides that all data structures are passed by value by default and we have to add & to make it pass by reference so that function makes changes to the original variable.

int main()
{
    string name;
    // getline(cin, name);
    // greeting(name);

    // greeting2();

    // int a,b;
    // cin>> a >> b;
    // int additionSum = sum(a,b);
    // cout << additionSum;

    int num = 10;
    doSomething(num);
    cout << num << endl;

    return 0;
}