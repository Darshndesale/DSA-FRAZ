#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,4,4,6,10,8};
    
    int target = 2;

    // App 2 : better approach
    int presence[100001] = {0};

    for(int i=0; i<arr.size(); i++)
    {
        int past = target - arr[i];
        if(presence[past] == 1)
        {
            cout << "Yes"<< endl;
            return 0;
        } 
            // we see this first time
            presence[past] = 1;
        
    }
    cout << "No" << endl;

    // for(int me=0; me<arr.size(); me++)
    // {
    //     int to_search = target - arr[me];
    //     for(int frend=me+1; frend<arr.size(); frend++)
    //     {
    //         if(target == arr[frend]) {
    //             cout << "Yes" << endl;
    //             return 0;
    //         }
    //     }
    // }

    // cout << "No" << endl;
    return 0;
}