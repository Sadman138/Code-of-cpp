#include<iostream>
using namespace std;

class mobileuser
{
public:
    void call()
    {
        cout<<"hello !"<<endl;
    }
    virtual void sendmessage()=0;
};
class rahim : public mobileuser
{
public:
    void sendmessage()
    {
        cout<<" hi,this is rahim"<<endl;
    }
};
class karim : public mobileuser
{
public:
    void sendmessage()
    {
        cout<<"hi,this is karim"<<endl;
    }
};
int main()
{
    mobileuser *m;

    rahim r;
    karim k;

    m = &r;
    m->sendmessage();

    m = &k;
    m->sendmessage();


}
