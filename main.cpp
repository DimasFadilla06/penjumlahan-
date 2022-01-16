#include <iostream>

using namespace std;

int main()
{
    int a, b, data[30];
    float rata,jum;

    cout<<"Banyaknya Data = ";
    cin>>b;
    cout<<endl;

    for (a=0; a<b; a++)
        {
           cout<<"Data ke-"<<a+1<<" = ";
           cin>>data[a];
           jum += data[a];
        }

    rata=jum/b;

    cout<<endl;
    cout<<"Nilai Total = "<<jum<<endl;
    cout<<"Nilai Rata-rata = "<<rata<<endl;
    return 0;
}
