#include<iostream.h>
class integer
{
private:
int m,n;
public:
integer()
{
m=0;
n=0;
cout<<"Default constructor\n";
}
integer(int x,int y)
{
m=x;
n=y;
cout<<"Parameterized constructor\n";
}
integer(integer &r)
{
m=r.m;
n=r.n;
cout<<"Cpy constructor\n";
}
~integer()
{
cout<<"Destructor for m="<<m<<",n="<<n<<endl;
}
void put_data()
{
cout<<"m="<<m<<"n="<<n<<endl;
}
};
int main()
{
integer i;
integer j(3,9);
integer k=j;
i.put_data();
j.put_data();
k.put_data();
return 0;
}




