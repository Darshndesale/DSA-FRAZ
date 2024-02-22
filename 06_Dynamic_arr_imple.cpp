#include<iostream>
using namespace std;

class Vector {
    public:
    int *a;
    int Size;
    int cap;

    Vector() {
        a = NULL;
        Size = 0;
        cap = 0;
    }

    void add(int num) {
        if(Size < cap) {
            a[Size++] = num; // good to go
        } else {
            int *b;
            if(cap > 0)
            {
                

                // set  its capacity
                b = new int[cap*2];
                cap *= 2;
            } else {
                b = new int[1];
                cap = 1;
            }

            // to push all old array element to new array b
            for(int i=0; i<Size; i++)
            {
                b[i] = a[i];
            } 

            // delete the etra space
            delete []a;

            a = b;

            // push the element you wat the num
            a[Size] = num;
            Size++;
        }
    }

    // for get the element
    int get(int i)
    {
        if(i >= 0 || i < Size)
        {
            return a[i];
        } else {
            cout << "\nPut valid index";
        }
    }

    // get the size
    int sizi() {
        return Size;
    }

    // get the capacity
    int capacity(){
        return cap;
    }
};

int main()
{
    Vector v;

    cout << "Size" << " | " << "Capacity" << endl;
    for(int i=1; i<20; i++)
    {
        v.add(i);
        cout << v.sizi() << " | " << v.capacity() << endl;
    }
    return 0;
}