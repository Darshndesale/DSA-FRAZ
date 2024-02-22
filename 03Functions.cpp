#include<iostream>
using namespace std;
// create the function which has functionality as print my name
void fun1()
{
    cout << "Hi name is func 1";
}
// addition of 2 numbers
int add_2_no(int a,int b)
{
    int sum = a+b;
    return sum;
}

// QNA 2 sum of squere of num
int square(int num)
{
    return num * num;
}

// the fun to give two numbers and return sum
int sum_of_suqare(int n1,int n2)
{
    int sum1 = square(n1);
    int sum2 = square(n2);
    // main(); do not knows about the main the f1
    return sum1 + sum2;
}
int main()
{
    // strting with the iron to press the cloths
    // steps to press
    // fun1();
    // cout << add_2_no(10,20);

    // nested functions
    cout << sum_of_suqare(5,3) << endl;
    // main();
    // fun1(); :-> It it also don't know the scope of f1
    // Solution : -> To declaration of funtion for future

    // After that we move to call by "reference" to valriable: to poiting same memory space
    int a = 10;
    int *ptr = &a;
    int &b = a; // just like refer diff nick name

    cout << b++ << endl;
    cout << a; // this updates the reference value (avaj diya usne responce kiya simple)

    return 0;
}