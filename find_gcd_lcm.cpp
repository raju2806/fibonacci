#include<iostream>
using namespace std;

int main()
{
    int n1,n2,Hcf,Lcm;
    cout<<"Enter first no and second no: ";
    cin>>n1>>n2;
    if(n1>n2) {swap(n1,n2);}
    cout<<n1<<" "<<n2<<endl;
    for(int i=0; i<n1/2; i++)
    {
        for(int j=1; j<n1; j++)
        {
            if(n1%j==0  && n2%j==0){Hcf=j;}
        }
    }
    cout<<"Gcd of "<<n1 <<" and "<< n2<<" = " <<Hcf<<endl;
    Lcm=((n1*n2)/Hcf);
    cout<<"Lcm of "<< n1 <<" and "<< n2 <<" = "<<Lcm<<endl;
    return 0;
}