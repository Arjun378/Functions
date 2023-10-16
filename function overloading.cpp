/*22070123150 Experiment function overloading*/
#include<iostream>
using namespace std;
int add(int a, int b)
{
    cout<<"Add 2 int units: "<<endl;
    return (a+b);
}
float add (int a, float f)
{
    cout<<"add with int and float called"<<endl;
    return((float)a+f);
}
float add(float x, float y)
{
    cout<<"Add with 2 floats called"<<endl;
    return(x+y);
}
main()
{
    int i = 4, j = 7, k;
    float f1 = 3.5, f2 = 7.9;
    k = add(i, j);
    cout<<k;
    cout<<add(f1, f2);
}