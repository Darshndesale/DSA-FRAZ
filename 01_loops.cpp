#include<iostream>
using namespace std;

// Defination of digit_sum
int digit_Sum(int number)
{
    int digit_sum = 0;
        for(int num = number; num>0; num /= 10)
        {
            digit_sum += (num%10);
        }
        return digit_sum;
}

bool isPrime(int number)
{
    int factor_cnt;
    if(number <= 1){
        cout << "Not a Prime";
    } else {
        factor_cnt = 0;
        for(int i=1; i<=number; i++)
        {
            if(number%i == 0) 
                factor_cnt++;
        }
    }

    if(factor_cnt == 2)
    {
        return 1;
    } else {
        return 0;
    }
}
int main()
{
    // to find digit sum in number which sum is K : to print the 1st 3 numbers
    // int cnt = 0;
    // int n = 3;
    // int k = 10;
    // int number = 1;
    // while(cnt < n)
    // {
    //     // callled the function
    //     int digit_sum = digit_Sum(number);

    //     if(digit_sum == k)
    //     {
    //         cnt++;
    //         cout << number << endl;
    //     }

    //     number++;
    // }

    // 2nd quetion
    // to seperate out the functionality
    // Why but : to seperate functionality for clean the code and usability
    
    // prime number code
    // int n;
    // cin >> n;
    // int factor_cnt;
    // if(n <= 1){
    //     cout << "Not a Prime";
    // } else {
    //     factor_cnt = 0;
    //     for(int i=1; i<=n; i++)
    //     {
    //         if(n%i == 0) 
    //             factor_cnt++;
    //     }
    // }

    // if(factor_cnt == 2){
    //     cout << "Prime number";
    // } else{
    //     cout << "Not a Prime number";
    // }

    // Anothhor approach is "Flag" wala
    // Floow up quetion : prime number 1 to n

    // int n = 50;
    // for(int i=1; i<=50; i++)
    // {
    //     if(isPrime(i))
    //     {
    //         cout << i << " is Prime" << endl;
    //     } else {
    //         cout << i << " is Not Prime" << endl;
    //     }
    // }

    // Print patterns
    // int n = 5;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    /* o/p
        *****
        *****
        .
        n
    */

    // for(int i=0; i<n; i++)
    // {
    //     int spaces = i;
    //     int stars = n;

    //     // first print " "
    //     for(int j=0; j<spaces; j++)
    //     {
    //         cout << " ";
    //     }
    //     for(int j=0; j<stars; j++)
    //     {
    //         cout << "*" << " ";
    //     }

    //     cout << endl;
    // }
    // return 0;

    // Date : 12/01/2024

    // HCF
    int HCF = 1;
    int num1=50,num2=100;

    // for(int i=1; i<=min(num1,num2); i++)
    // {
    //     if(num1 % i == 0 && num2 % i == 0)
    //     {
    //         HCF = i;
    //     }

    // }
    // for(int i=min(num1,num2); i>=1; i++)
    // {
    //     if(num1 % i == 0 && num2 % i == 0)
    //     {
    //         HCF = i;
    //         break;
    //     }

    // }

    cout << HCF << endl;
    // Follow up : To Num x is perfect divisors sum == number (e.g : 28 -> 1,2,4,7,16)
    //code 
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++)
    // {
    //     int sum = 0;
    //     for(int j=1; j<n; j++)
    //     {
    //         if(i % j == 0)
    //         {
    //             sum += j;
    //         }
    //     }
    //     if(sum == i)
    //     {
    //         cout << "This number " << i << " has perfect Number" << endl;
    //     }
    // }

    // 1 ke liye we ingnore becuse 1 has factor only 1 but we ignore

    // pattern printing quetion
    int row = 5;
    int col = 3;
    // int range = row;

    for(int i=0; i<row; i++)
    {
        for(int j=i+1; j<=col; j++)
        {
            cout << j << " ";
        }
        cout << endl;
        col++;
    }
    // also we think that start with i=1 and goes every time col + i

    // 2nd patteren
    // int n = 100;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++)
    //     {
    //         if(i == j)
    //         {
    //             cout << "*";
    //         } else if( i + j == n+1) {
    //             cout << "*";
    //         }
    //         else {
    //             cout<<" ";
    //         }
    //     }
    //     cout << endl;
        
    // }

    // 3rd pattern
    int n=5;

    for(int i=1; i<=n; i++)
    {
        int stars = i * 2 - 1;
        int spaces = n - i;

        // print spaces
        for(int space=1; space<=spaces; space++)
        {
            cout << " ";
        }
        // print stars
        for(int str=1; str<=stars; str++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // for ramaining rows
    for(int i=1; i<=n; i++)
    {
        int stars = 2 * (4 - i) + 1;
        int spaces = i;

        // print spaces
        for(int space=1; space<=spaces; space++)
        {
            cout << " ";
        }
        // print stars
        for(int str=1; str<=stars; str++)
        {
            cout << "*";
        }
        cout << endl;
    }

}