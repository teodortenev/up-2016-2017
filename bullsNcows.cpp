#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int aComp, bComp, cComp, dComp;
	int difDigits = 0;
	do
	{
		srand(time(NULL));
		int compNum = rand() % 9000 + 1000;
		dComp = compNum % 10;
		cComp = (compNum / 10) % 10;
		bComp = (compNum / 100) % 10;
		aComp = compNum / 1000;
		if (aComp == bComp || aComp == cComp || aComp == dComp || bComp == cComp || bComp == dComp || cComp == dComp)
		{
			difDigits = 0;
		}
		else
		{
			difDigits = 1;
			cout << compNum << endl;
		}
	}
while (difDigits != 1);

int aUser,bUser,cUser,dUser,userInput,cows=0,bulls=0;
cout<<"Enter number:\n";
cin>>userInput;
dUser=userInput%10;
cUser=(userInput/10)%10;
bUser=(userInput/100)%10;
aUser=userInput/1000;

if (userInput >= 0 && aUser > 0)
{
    if (dUser==dComp)
   {
       bulls++;
   }
    else if (dUser==aComp || dUser==bComp || dUser==cComp)
    {
        cows++;
    }

    if (cUser==cComp)
    {
        bulls++;
    }
    else if (cUser==aComp || cUser==bComp || cUser==dComp)
    {
        cows++;
    }

    if (bUser==bComp)
   {
       bulls++;
   }
    else if (bUser==aComp || bUser==dComp || bUser==cComp)
    {
        cows++;
    }

    if (aUser==aComp )
   {
       bulls++;
   }
    else if (aUser==dComp || aUser==bComp || aUser==cComp)
    {
        cows++;
    }
cout<<"Cows:"<<cows<<endl;
cout<<"Bulls:"<<bulls<<endl;

}
else cout<<"Invalid input"<<endl;





    return 0;
}
