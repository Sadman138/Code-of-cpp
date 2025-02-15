#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum;
    cout<<"enter number of student";
    cin>>n;

    int student[n];

    for(int i=0;i<n;i++)
    {
        cin>>student[i];
        sum=sum+student[i];
    }
    cout<<"total marks: "<<sum<<endl;
    float avg = (float)sum/n;
    cout<<"average: "<<avg<<endl;

    int max= student[0];
    int min= student[0];

    for(int i=1;i<n;i++)
    {
        if(max<student[i])
        {
            max = student[i];
        }
        if(min>student[i])
        {
            min = student[i];
        }

    }
    cout<<"maximum marks = "<<max<<endl;
    cout<<"minimum marks = "<<min<<endl;


    getch();

}
