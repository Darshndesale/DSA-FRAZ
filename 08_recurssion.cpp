#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    // base case
    if(n == 0) return ;
    cout<<n<<endl;
    print(n-1);
}

int fact(int n)
{
    // base case
    if(n == 0 || n == 1)
    {
        return n;
    }

    int a = fact(n-1);
    int b = fact(n-2);

    return a+b;
}

int powofa(int a,int n)
{
    if(n == 1) return a;

    return a * powofa(a,n-1);
}

int factorial(int n)
{
    if(n == 0) return 1;

    return n * factorial(n-1);
}

int main()
{
    cout<<" Hi I am darshan " << endl;
    // can the main function
    // main();
    // print(5);
    // cout<<fact(5);
    // cout<<powofa(4,6);
    cout<<factorial(5);
    return 0;
}