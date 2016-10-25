#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    if(a>0 && b>0 && c>0)    cout<<"Positive:"<<'+'<<endl;
    if(a<0 || b<0 || c<0)    cout<<"Negative:"<<'-'<<endl;
    if(a==0 || b==0 || c==0) cout<<"Nothing:"<<'0'<<endl;

    return 0;
}
