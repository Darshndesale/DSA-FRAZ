// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    // int n;
    // cin>>n;
    
    // while(n > 1)
    // {
    //     if(n % 2 == 1)
    //     {
    //         cout << "No" << endl;
    //         cout << n << endl;
    //         break;
    //     }
        
    //     n /= 2;
    // }
    
    // if(n == 1)
    // {
    //     cout << "YES" << endl;
    // } 
    int flag = 0;
    for(int num = n; num > 1;)
    {
        if(num % 2 != 0)
        {
            cout << "No it is do not power of 2" << endl;
            flag = 1;
            break;
        }
        
        num /= 2;
        cout << num << endl;
    }
    
    if(flag == 0)
    {
        cout << "Yes Power of 2" << endl;
    }

    return 0;
}