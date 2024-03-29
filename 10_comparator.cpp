#include<bits/stdc++.h>
using namespace std;

// bool comp(int a, int b) {
//     // if a should come before b
//     // retur true
//     // otherwise false
    
//     if(a > b) return true;
//     else return false;
// }

// write the comparator function and try different things to it
bool comp(int a, int b) {
    // if a come before b the return 1

    if(a > b) { // in which the a is greaer so we pick for making reverse sorted array
        return true;
    }

    return false;
}

bool string_sort(char a, char b)
{
    return a > b;
}
int main() 
{
    
    vector<int> arr = {3,4,1,2,7,65,5};

    sort(arr.begin(), arr.end(), comp);

    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    // we can sort by our choice custome comparator
    /*
        cases
        - negative if e1 to come before the e2 in sorting
        - positive if e1 to come after the e2 in sorting
        - zero if it is equals

    */

    // my name string
    string s = "darshan";
    sort(s.begin(), s.end(), string_sort);
    cout<< s;
    return 0;
}