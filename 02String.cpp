#include<iostream>
using namespace std;

int main()
{
    // declare the string : String is class
    string ram_bhumi = "Ayodhya";
    // We declare the string into the constructor initialization
    string name("Darshan");
    // cout << name << endl;
    // cout << ram_bhumi << endl;

    // But in this way not work
    // string addreses;
    // addreses("delhi"); // error deta he

    // accese the length
    // cout << name.size() << endl;

    // Input and output in string
    string nickName;
    // cin >> nickName;
    // We only take input only untill thats have some space
    
    // solution for this _ Getline gunction
    // getline(cin,nickName,'\0');
    // cout << nickName << endl;

    // The issue is comming that the getline not give the input after the next line

    // print my name using the for loop
    // int str_length = name.size();
    // for(int i=0; i<str_length; i++)
    // {
    //     cout << name[i] << " ";
    // }

    // to uppercase the consonent
    // string mix_str;
    // cin >> mix_str;

    // for(int i=0; i<mix_str.length(); i++)
    // {
    //     if(!(mix_str[i] == 'a' || mix_str[i] == 'e' || mix_str[i] == 'i' || mix_str[i] == 'o' || mix_str[i] == 'u'))
    //     {
            // mix_str[i] = toupper(mix_str[i]);
    //         // we play around the ASCII value
    //         mix_str[i] -= 32;
    //     }
    // }

    // cout << mix_str;

    // Print the ASCII value : Using typecasting

    // QNA : To adding 2 string
    // string str1 = "Darshan";
    // string str2 = "Desale";
    // // string myname = str1 + " " + str2;
    // str1 += " ";
    // str1 += str2;
    // cout << str1;

    // In built fuctions of string
    // 1 size()
    // string s1 = "Darshan Desale";
    // cout << s1.size() << endl;

    // substr
    // cout << s1.substr(1) << endl;
    // cout << s1.substr(3) << endl;
    // cout << s1.substr(3,8) << endl;

    // erase
    string s1 = "abcde";
    s1.erase(1,2);
    cout << s1 << endl;

    string temp;
    getline(cin,temp,'\0');
    cout<<temp;

    cout << "hello";
}