#include <iostream>
using namespace std;
class op
{
    int r,img;
public:
    op() {
        r=img=0;
            }
    op(int real, int i)
        {
            r=real;
            img=i;
        }
        op operator -(op o1)
        {
            op co;
            co.r=r-o1.r;
            co.img=img-o1.img;
            return co;
        }
        void show()
        { if(img<=0)
        {
            cout<<r<<img<<"i"<<endl;
        }
        else
            cout<<r<<"-"<<img<<"i"<<endl;
        }
};
int main()
{
op c1(5,7),c2(10,8),c3;
c3=c1-c2;
c3.show();
return 0;
}
