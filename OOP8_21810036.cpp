#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream f;
    f.open("first.txt",ios::out);

    if(!f)
    {
        cout<<"Error opening file!";
        return 0;
    }

    cout<<"File name first.txt created"<<endl;
    f<<"SY Btech, Computer, Division B, Batch B-3, VIIT Pune"<<endl;
    f.close();
    f.open("first.txt",ios::in);

    if(!f)
    {
        cout<<"Error opening file! ";
        return 0;
    }

    char ch;
    while(!f.eof())
    {
        f>>ch;
        cout<<ch;
    }

    f.close();
    return 0;
}
