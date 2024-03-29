#include<bits/stdc++.h>
using namespace std;


int main()
{
    map<string, int> hm;

    hm["darshan"] = 10000;
    hm["pukit"] = 20000;
    hm["jasnam"] = 40000;

    for(auto m: hm)
    {
        cout << "Current networth of : " << m.first << " is : "<< m.second <<  endl;
    }

    
    return 0;
}