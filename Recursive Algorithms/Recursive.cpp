#include <iostream>

using namespace std;

//Adding two numbers
int sum(int m, int n){
    if (n == 1) return 1;
    else return 1 + sum(m, n-1);
}
//Factorial function
int factor(int m){
        if (m == 1) return 1;
        else return m*factor(m-1);
}
//Multiplication
int multiplier(int m, int n){
    if (n == 1) return m;
    else return m + multiplier(m, n-1);
}
//Power function: m to the power of n
int power(int m, int n){
    if (n == 1) return m;
    else return m * power(m, n-1);

}

int main()
{
    int m {5};
    int n{4};
    cout << "The summation result is: " << sum(m,n) << endl;
    cout << "5! is eual to: " << factor(5) << endl;  // here I want to show that calling a function with rvalue is possible
    cout << "5 multiplied by 4 is: " << multiplier(m,n) << endl;
    cout << "5 to the power of 4 is: " << power(m,n) << endl;
    return 0;
}