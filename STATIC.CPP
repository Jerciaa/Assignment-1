#include<iostream.h>
class counter
{
private:
static int count;
public:
counter()
{
count++;
cout<<"The count of the created object="<<count<<endl;
}
static int getcount()
{
return count;
}
};
int counter::count=0;
int main()
{
counter c1,c2,c3;
counter::getcount();
cout<<"Number of counter objects created:"<<counter::getcount()<<endl;
return 0;
}