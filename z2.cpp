#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    // double myPoweHelper(int a, int n) {
    //     // base condition
    //     if(n == 0) return 1.0;

    //     if(n < 0) {
    //         return 1/myPoweHelper(a,-n);
    //     } else {
    //         return a * myPoweHelper(a, n-1);
    //     }
    // }

    // Just thoda optimize for the minimize the function calls We present in mathematical form to x^n = x^n/2 * x^n/2 (when n is even)
    //x^n = x^n/2 * x^n/2 * x (when n is odd)

    // double myPoweHelper(int a, int n) {
    //     // base condition
    //     if(n == 0) return 1.0;

    //     // we find the n/2 partial ans first
    //     double partial_ans = myPoweHelper(a, n/2);

    //     if(n % 2 == 0) {
    //         return partial_ans * partial_ans;
    //     } else {
    //         return partial_ans * partial_ans * a;
    //     }
    // }

    // ------------------------------------ Powerof(a, n) qna solve ----------------------------------------    

    // * Power of 3 *
    // Just we see that the num % 3 check can it is multiple of 3 or not When yes then we say that ki num/3 also multiple of three othorwise not power of 3
    // e.g num = 81 , 81%3 == 0 |/ -> 81/3 = 27 -> 27%3 == 0 |/ -> 27/3 == 9 -> 9%3 == 0 |/ -> 9/3 = 3 -> 3%3 == 0 -> 3/3 == 1 stop hre and return "true"

    // bool isPowerOfThreeHelper(int num) {
    //     if(num <= 0) return false; // this use when thre will only case num == OR num < 0 (-ve)
    //     if(num == 1) return true; // at last movement when thre will be num == 1 we simply return TRUE first prority
    //     if(num%3 != 0) return false; 

    //     // otherwise call for next num/3
    //     return isPowerOfThreeHelper(num/3);
    // }

    // --------------------------------- Power of 3 end --------------------------------------------------------------

    // Search a number in an array **

    int findFirstOcuurrenceHelper(int n,int k, vector<int> &arr, int s, int e) {
        // if(arr[i] == k) return i+1;
        // if(i >= n) return -1;

        // return findFirstOcuurrenceHelper(n, k, arr, i+1);

        // Divide and conquare approach

        // we check that ki s kahi e ke pass to nahi a gaya 

        // step1: find mid
        if(s > e) return -1;
        int mid = (s+e) / 2;

        if(s == e) {
            cout << s << " " << e <<  endl;
            if(arr[s] == k) {
                return s+1;
            } else {
                return -1;
            }
        }
        // if(arr[mid] == k) return mid+1;  we remove this becuse we check first mid not suitable
        
        cout <<"Left side : " <<  s << " " << e <<  endl;
        int ans = findFirstOcuurrenceHelper(n, k, arr, s, mid-1);
        
        if(ans == -1)
        {
            cout <<"Right side : " <<  s << " " << e <<  endl;
            ans = findFirstOcuurrenceHelper(n, k, arr, mid+1, e);
        }

        return ans;
    }

};
int main()
{
    Solution s;
    int a = 2;
    // int n = -7;
    // if(n < 0) {
    //     // we handle the negative wala case
    //     s.(1/myPoweHelper(a,-n));
    // }

    // check for negaticve case
    // if(n < 0)
    //     cout << 1/s.myPoweHelper(a,-n) << endl;
    // else
    //     cout << s.myPoweHelper(a,n) << endl;

    // ---------------------------- Power of three context --------------------------
    // cout<<s.isPowerOfThreeHelper(27);

    // ------------------------------- Search number in an array -----------------------
    int n = 6;
    int k = 16;
    vector<int> arr = {9,16, 7, 2 , 16, 4};
    int ans = s.findFirstOcuurrenceHelper(n, k, arr, 0, n-1);

    if(ans == -1) {
        cout<<-1;
    } else {
        cout<<ans;
    }
    
    


    // ----------------------------------------------------- stop -----------------------------------------------
    // string s1 = "abcdefg";
    // string s2 = "AbCdEfF";

    // // first step to convert all the upper case into lowercase


    
    // for(int i=0; i<s1.length(); i++)
    // {
    //     if(isupper(s1[i])) {
    //         s1[i] = tolower(s1[i]);
    //     }


    
    //     if(isupper(s2[i])) {
    //         s2[i] = tolower(s2[i]);
    //     }
    // }

    // // cout << s1 << " " << s2;
    // int sum1 = 0,sum2 = 0;
    
    // for(int i=0; i<s1.length(); i++)
    // {
    //     sum1 += s1[i];
    //     sum2 += s2[i];
    // }

    // // cout << sum1 << " " << sum2;

    // if(sum1 < sum2) {
    //     cout << -1;
    // } else if(sum1 > sum2) {
    //     cout << 1;
    // } else {
    //     cout << 0;
    // }

    // int n;
    // cin>>n;

    // int arr[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }

    // // sets
    // vector<int> pos;
    // vector<int> neg;
    // vector<int> zero;

    // for(int i=0; i<n; i++)
    // {
    //     if(arr[i] < 0)
    //     {
    //         neg.push_back(arr[i]);
    //     } else if(arr[i] > 0) {
    //         pos.push_back(arr[i]);
    //     } else {
    //         zero.push_back(arr[i]);
    //     }
    // }

    // if(pos.size() == 0)
    // {
    //     pos.push_back(neg.back());
    //     neg.pop_back();
    //     pos.push_back(neg.back());
    //     neg.pop_back();
    // }

    // // print < 0 wale
    // cout << neg.size() << " ";
    // for(int i=0; i<neg.size(); i++)
    // {
    //     cout << neg[i] << " ";
    // }

    // // print > 0 wale
    // cout << "\n" << pos.size() << " ";
    // for(int i=0; i<pos.size(); i++)
    // {
    //     cout << pos[i] << " ";
    // }

    // // print == 0 wale
    // cout << "\n" << zero.size() << " ";
    // for(int i=0; i<zero.size(); i++)
    // {
    //     cout << zero[i] << " ";
    // }

    // string s = "BBAABBBA";

    // for(int i=0; i<s.length(); i++)
    // {
    //     for(int j=0; j<s.length(); j++)
    //     {
    //         if(s[i] == s[j] && s[i+1] == s[j+1])
    //         {
    //             cout<<s[i]<<s[j]<< " "<< s[i+1]<<s[j+1]<<" | ";
    //         }
    //     }
    // }

    // Practice of the coding qna's

    // power of power(a, n)

    
    return 0;
}