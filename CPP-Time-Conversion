#include<iostream>
using namespace std;
class TIME
{
    int hr, mini;
public:
    void setdata(int h, int m)
    {
        hr=h;
        mini=m;
    }
    void add(TIME &a,TIME &b)
    {
        mini=a.mini+b.mini;
        hr=a.hr+b.hr+(mini/60);
        mini=mini%60;
    }
    void display()
    {
        cout<<hr<<" : "<<mini<<endl;
    }
};
int main()
{
    TIME t1,t2,t3;
    t1.setdata(10,6);
    t2.setdata(5,59);
    t3.add(t1,t2);
    t3.display();
    return 0;
}
