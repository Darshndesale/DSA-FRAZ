#include<iostream>
using namespace std;

// create class
class Student{
    public:
    string name;
    int roll;
    char div;
    char gender;

    private:
    int a;
    int b;
};

// create the couple class
class Couple{
    private:
    int first;
    int second;
    const int a;

    public:
    Couple(int f,int s,int x) : first(f), second(s), a(x){
        first = f;
        second = s;
    }
    void setFirst(int f) {
        first = f;
    }
    void setSecond(int s) {
        second = s;
    }

    int getFirst() {
        return first;
    }
    int getSecond() {
        return second;
    }

    int multiPly() {
        return first * second;
    }
}; // imp to put this

int main()
{
    // Student stud1;
    // cout << sizeof(Student) << endl;
    // cin>>stud1.name;
    // cin>>stud1.roll;
    // cin>>stud1.div;
    // cin>>stud1.gender;

    // cout << endl;
    // cout << stud1.name << endl;
    // cout << stud1.roll << endl;
    // cout << stud1.div << endl;
    // cout << stud1.gender << endl;

    // obj of class couple
    Couple c1(10,20,2);
    // c1.setFirst(6);
    // c1.setSecond(5);
    cout << c1.getFirst() << endl;
    cout << c1.getSecond() << endl;
    cout << c1.multiPly() << endl;
    return 0;
}