#include<iostream>
using namespace std;

int main()
{
    int marks_array[120];

    // for(int i=0; i<120; i++)
    // {
    //     cout << marks_array[i];
    //     // it gives me a grabage value
    // }

    int small_array[4] = {10,20,30,40};
    // small_array[0] = 1;
    // small_array[1] = 2;
    // small_array[2] = 3;
    // small_array[3] = 4;

    // cout<<small_array[0];

    char char_array[7] = {'D','A','R','S','H','A','N'};
    cout << char_array[0] << char_array[1] << char_array[2] << char_array[3] << char_array[4] << char_array[5] << char_array[6] << char_array[7];

    // Interesting thing to do on array
    // Quize time 1
    // int arr[4] = {1,2,3,4,5};

    // quize 2
    // int arr[4] = {1,2,'5',4};
    // we can try to accese the value 
    // cout << arr[2];
    // gives an ASCII value
    // It converted the type of char to integer

    // quize 3
    // int arr[4];
    // arr = {1,2,3,4};

    // this gives the error
    // int n = 5;
    // int arr[n] = {1,2,3,4,5};

    // int arr[5];
    // for(int i=0; i<5; i++)
    // {
    //     cin >> arr[i];
    // }
    // int sum = 0;
    // for(int i=0; i<5; i++)
    // {
    //    sum += arr[i];
    // }

    // cout << sum / 5;

    // int arr[4] = {1,2,3,4};
    // cout << arr[-1];
    // o/p : it gives me the garbage value

    // Quize
    int arr[5] = {1,2,3,4,5};
    cout<<arr << endl; // it gives me the first address of arr

    cout << (arr + 1) << endl; // address of staring index 2
    cout << *(arr + 2) << endl; // this give me the element => deaddressing

    /*
        0x61fcf4
        0x61fcf8
        0x61fcfc
    */

    cout << 2[arr];
    // reason behind it : The [] this operator converts to 2[arr] = *(arr + 1)

    // automaticaly crete the array
    int arr2[] = {1,2,3,4};
    cout << arr2[3] << endl;

    // Quetion 1
    int a[4] = {1,2,3,4};
    int a2[4] = {1,2,3,4};
    // if(a == a2) {
    //     cout << "yes";
    // }

    // Q2
    int t = 4;
    for(int i=0; i<4; i++)
    {
        if(a[i] == t)
        {
            cout << "Yes present" << endl;
            break;
        } 
    }

    // No we do notlike this : Becuse when I am comparing a == a2 we do not comparing the elements rather that base addreses

    // mini max to find
    int maxi = 0;
    int mini = 0;

    for(int i=0; i<4; i++)
    {
        if(a[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << maxi;
    return 0;
}