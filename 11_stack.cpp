#include<bits/stdc++.h>
using namespace std;

class Stack {
    vector<int> stk;
    public:

    Stack()
    {

    }

    void push(int val)
    {
            stk.push_back(val);
    }

    void top()
    {
        if(stk.size() == 0)
        {
            cout<<"Stack is empty"<<endl;
            return ;
        }
        cout<<"Top element: "<<stk.back() << endl;
    }

    void pop()
    {
        if(stk.size() == 0)
        {
            cout<<"Stack is empty"<<endl;
            return ;
        }

        cout<<"Pop element : " << stk.back() << endl;
        stk.pop_back();
    }

    bool empty()
    {
        if(stk.size() == 0)
        {
            return true;
        } else{
            return false;
        }
    }

    void clear()
    {
        while(empty() == false)
        {
            stk.pop_back();
        }
    }

};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    
    string s = "(()()())";
    // o:1,2,34 c:1,234

    int opning_cnt = 0;
    int closing_cnt = 0;

    for(auto p: s)
    {
        if(p == '(')
        {
            opning_cnt++;
        } else {
            closing_cnt++;   
        }

        if(closing_cnt > opning_cnt) 
            cout << "Not balance parentheses";
    }
    if(opning_cnt == closing_cnt)
        cout << "balance parentheses";
    else
        cout << "Not balance parentheses";
    return 0;
}