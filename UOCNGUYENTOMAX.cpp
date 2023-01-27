#include<iostream>
#include<math.h>
using namespace std;

int abc(int i)
{
    int ktra=1;
    for(int j=2; j<i; j++)
    {
        if(i%j==0)
        ktra=0;
    }
    return ktra;
}

int main()
{
    int n;
    int c=0;

    cout <<"N = ";
    cin >> n;
	
    for(int i = 2; i<=n; i++)
    {
        if(n%i==0)
        {
 
            if(abc(i)==1)
            c=i;
        }

    }


    if(c!=0)
	cout<<"Thua so nguyen to lon nhat cua "<<n<<" la: "<<c;

}



