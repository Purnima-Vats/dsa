#include<iostream>
using namespace std;


int main()
{
    // Write a program that takes an input of age
    // and tells if you are and adult or not

    // int age;
    // cin >> age;

    // if(age >=18){
    //     cout <<"You are an adult!";
    // }
    // else {
    //     cout <<"You are not an adult!";
    // }


    /*
    A school has following rules for grading system:
    a. Below 25 - F
    b. 25 to 44 - E
    c. 45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. Above 80 - A
    Ask user to enter marks and print the corresponding grade
    */

    int marks;
    cin >> marks;
    
    if (marks<25){
        cout << "F";
    }
    else if (marks>=25 && marks<45){
        cout << "E";
    }
    else if (marks>=45 && marks<50){
        cout << "D";
    }
    else if (marks>=50 && marks<60){
        cout << "C";
    }
    else if (marks>=60 && marks<80){
        cout << "B";
    }
    else if (marks>=80 && marks<=100){
        cout << "A";
    }

    return 0;
}