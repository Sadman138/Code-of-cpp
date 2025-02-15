#include<iostream>
#include<conio.h>
using namespace std;

class shap
{
public:
    double dim1,dim2;

    shap(double dim1,double dim2)
    {
        this -> dim1 = dim1;
        this -> dim2 = dim2;
    }
    virtual double area()
    {
        return 0;
    }

};
class triangle : public shap
{
public:
    triangle(double dim1,double dim2)
    : shap (dim1,dim2)
    {

    }
    double area ()
    {
        return 0.5 * dim1 * dim2;
    }

};
class rectangle : public shap
{
public:
    rectangle(double dim1,double dim2)
    :shap(dim1,dim2)
    {

    }
    double area()
    {
        return dim1*dim2;
    }
};
int main()
{
    shap *p;
    triangle t(10,20);
    rectangle r(10,20);

    p = &t;
    cout<<"triangle area = "<<p ->area()<<endl;

    p = &r;
    cout<<"rectangle area = "<<p ->area()<<endl;
}
