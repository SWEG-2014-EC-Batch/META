#include <iostream>
#include<ctype.h>
using namespace std;

int main()
{
    char  c;
    cout<<"Enter a character: ";
    cin>>c;
    if((c>='0' && c<='9')&&(c%2==1))
    {
    cout<<c<<" is an odd digit";}
    else if((c>='0' && c<='9')&&(c%2!=1))
        {cout<<c<<"  is an even digit";}

    else if(c>='A' && c<='Z')
        {cout<<c<<" is an uppercase letter";
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            {cout<<" and vowl.";}
        else
            {cout<<" and consonant";}}

    else if(c>='a'&&c<='z')
        {cout<<c<<" is a smallcase letter";
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            {cout<<" and vowl.";}
        else
            {cout<<" and consonant";}
        }
    else
        cout<<c<<" is a special character";
    return 0;
}
