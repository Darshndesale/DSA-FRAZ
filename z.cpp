#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int arr[] = {1,4,2,2,3};
//     int n = 5;
//     int k,i,j;
//     int flag = 0;

//     for(i=0; i<5; i++)
//     {
//         for(j=i+1; j<5; j++)
//         {
//             for(k=1; k<5; k++)
//             {
//                 int for_ans = abs(arr[i] - arr[k]) + abs(arr[j] - arr[k]);
//                 if(for_ans != abs(arr[i]-arr[j]))
//                 {
//                     break;
//                 }
//             }
//             if(k == 5)
//             {
//                 cout << i << " " << j << endl;
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0) break;
        
//     }
//     return 0;
// }

void tempp() {
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int k,j;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;

            if(a > maxi)
            {
                k = i;
                maxi = a;
            }

            if(a < mini)
            {
                j = i;
                mini = a;
            }
        }
        cout << k << " " << j << endl;
    }
}

// class and onject prectice
class Student {
    private:
    int roll;
    string name;
    float percentage;
    public:
    static int a;
    void setData() {
        cout << "Enter name : ";
        cin >> name;
        cout << "\nEnter roll no : ";
        cin >> roll;
        cout << "\nEnter Percentage : ";
        cin >> percentage;
    }

    void getData() { // parameter :Student s2
    
            // cout << "Student Has roll no " << s2.roll << endl;
            cout << "------------" << endl;
            cout << "Roll No : " << roll << endl;
            cout << "Name : " << name << endl;
            cout << "Percentage : " << percentage << endl;
        
    }
};
int Student :: a = 0;

int main() {
    // Student *s = new Student[2];
    // Student s2;
    // s->a++;
    // cout << s->a << endl;
    // s2.a++;
    // cout << s2.a << endl;
    // for(int i=0; i<2; i++)
    // {
    //     cout << "Enter the Student " << i << endl;
    //     s[i].setData();
    // }
    // for(int i=0; i<2; i++)
    // {
    //     cout << "Student " << i << "data" << endl;
    //     s[i].getData();
    // }
    // s1.setData();
    // s1.getData(s2);
    // long int s = 20.00;
    // cout << sizeof(s); // 4 byte

    tempp();
}