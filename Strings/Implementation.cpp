#include <iostream>
#include<cstring>
using namespace std;
int main() 
{
    string s="hello";
    cout<<s.length()<<endl;
    cout<<s[0]<<endl;

    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            cout<<s.substr(i,j)<<endl;
        }
    }
    s+='w';
    s+='o';
    s+="rld";
    s+="10";
    s+="20";
    cout<<endl<<s<<endl;
    char t[]="Hi I am Divyansh Nigam";
    char* p= strtok(t," ");
    while(p!=NULL)
    {
        cout<<p<<endl;
        p=strtok(NULL," ");
    }
}
/*
output:
5
h
h
he
hel
hell
el
ell
ello
llo
llo
lo

helloworld1020
Hi
I
am
Divyansh
Nigam
*/
