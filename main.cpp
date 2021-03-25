#include <iostream>

using namespace std;

int main()
{
string correctpassword = "2235";
string userpassword;
do
{
    cout<<"Enter password"<<endl;
    cin>>userpassword;
    }while (userpassword!=correctpassword);

    return 0;
}
