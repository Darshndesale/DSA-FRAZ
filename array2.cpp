#include<iostream>
using namespace std; 

int main()
{
    int arr[] = {1,2,3};
    cout << *(arr) << endl;

    // change the value at first addrease
    *(arr) += 5;
    cout << *(arr) << endl; 

    *(arr + 2) += 5;
    cout << *(arr + 2) << endl;

    // we create the pointer
    // int a = 10; // 4byte It a have some add in memory
    // way to do t the find addrease
    // cout << &a << endl;

    // how to create the pointers
    // int * ptr = &a;
    // cout << ptr << endl; // it gives me the a addrease present
    // cout << *(ptr) << endl; // it gives the value at that addrease

    // this is not possible ony give the char type addrease
    char b = 'b';
    char * ch = &b;
    cout << *(ch) << endl;

    // cout << sizeof(ptr) << endl;
    // It gives the 4 byte becuse the integer

    int c = 30; // 101
    int *p = &c; // 102 - > 101
    int **p2 = &p; // 103 -> 102

    cout << *p << endl; // 30
    cout << *p2 << endl; // give the addrease same as the &c
    cout << &c << endl; // yes write gase this gives me the *under value means addrease that store currently

    cout << **p2 << endl;

    // int *pointer = &c;
    // cout << pointer + 1;

    
}