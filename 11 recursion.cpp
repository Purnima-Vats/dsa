#include<bits/stdc++.h>
using namespace std;

void printName(int n){
    if (n == 0) return;
    cout << "Purnima" << "\n";
    n--;
    printName(n);
}

void printN(int i, int n){
    if (i > n) return;
    cout << i << "\n";
    i++;
    printN(i,n);
}


void printReverseN(int n){
    if(n == 0) return;
    cout << n << "\n";
    n--;
    printReverseN(n);
}

void summation(int i, int sum = 0){
    if(i<1){
        cout << sum << "\n";
        return;
    }
    summation(i-1,sum+i);
}

int summation1(int n){
    if(n==0) return 0;
    return n + summation1(n-1);
}

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
    // time and space complexity will be O(n)
}

void reverseArray(int i, int arr[], int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArray(i+1, arr, n);
    // time and space complexity will be O(n/2)
}

bool palindrome(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size() -i -1]) return false;
    return palindrome(i+1, s);
    // time and space complexity will be O(n/2)
}

int fib(int n){
    if(n<=1) return n;
    int last = fib(n-1);
    int slast = fib(n-2);
    return last + slast;
}

int main()
{
    // Print name N times
    // int n;
    // cin >> n;
    // printName(n);
    // printN(1,n);
    // printReverseN(n);

    // sum of first N numbers
    // Two ways:
    // (i) parameterized 
    // (ii) functional

    // cout << summation1(n) << "\n";

    // cout << "Factorial of " << n << " is " << factorial(n) << "\n";

    // Reverse an array
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i = 0; i<n; i++) cin >> arr[i];
    // reverseArray(0, arr, n);
    // for(int i = 0; i<n; i++) cout << arr[i] << " ";

    // Check if a given string is a palidrome or not
    // string s = "madsm";
    // cout << palindrome(0,s);

    // Multiple Recursion calls
    // Fibbonacci series: time complexity will be exponential
    cout << fib(6);

    return 0;
}