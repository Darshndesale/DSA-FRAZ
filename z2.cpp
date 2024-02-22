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

    double myPoweHelper(int a, int n) {
        // base condition
        if(n == 0) return 1.0;

        // we find the n/2 partial ans first
        double partial_ans = myPoweHelper(a, n/2);

        if(n % 2 == 0) {
            return partial_ans * partial_ans;
        } else {
            return partial_ans * partial_ans * a;
        }
    }
    // int power(int a, int n) {
    //     cout << myPoweHelper(a,n);
    // }
};
int main()
{
    Solution s;
    int a = 2;
    int n = -7;
    // if(n < 0) {
    //     // we handle the negative wala case
    //     s.(1/myPoweHelper(a,-n));
    // }

    // check for negaticve case
    if(n < 0)
    
        cout << 1/s.myPoweHelper(a,-n) << endl;
    else
        cout << s.myPoweHelper(a,n) << endl;
        


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