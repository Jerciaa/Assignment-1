#include<iostream.h>
class rectangle
{
private:
int l,b;
public:
void get_data()
{
cout<<"Enter length of the rectangle:";
cin>>l;
cout<<"Enter breath of the rectangle:";
cin>>b;
}
void put_data()
{
cout<<"Length of rectangle:"<<l<<endl;
cout<<"Breath of rectangle:"<<b<<endl;
cout<<"Area of rectangle:"<<l*b<<endl;
}
};
int main()
{
rectangle r;
r.get_data();
r.put_data();
return 0;
}