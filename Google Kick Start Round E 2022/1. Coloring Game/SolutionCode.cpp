#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    
    int n,count=1;
    cin>>n;


    while(n--)
    {
        int x;
        cin>>x;

        double num=x;
      //  cout<<num<<endl;
        
        cout << "Case #" << count++ << ": " << ceil(num/4) << '\n';
        
    }
    
    return 0;
}