#include<iostream.h>
class integer
{
private:
int m,n;
public:
integer()
{
cout<<"Enter number 1:";
cin>>m;
cout<<"Enter number 2:";
cin>>n;
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
cout<<"Copy constructor\n";
}
~integer()
{
cout<<"Destructor for\t"<<m<<"and\t"<<n<<endl;
}
void put_data()
{
cout<<"m:"<<m<<",n:"<<n<<endl;
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
