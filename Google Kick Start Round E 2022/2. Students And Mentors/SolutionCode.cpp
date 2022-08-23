#include<bits/stdc++.h>
#define int long long int
const int mod=1e9+7;
#define fastinout ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void myFunc()
{
    int n;
    cin>>n;
    vector<int>c1(n);
    multiset<int>ss;
    for(int i=0;i<n;i++)
    {
        cin>>c1[i];
        ss.insert(c1[i]);
    }

    for(int i=0;i<n;i++)
    {
        auto it=ss.find(c1[i]);
        ss.erase(it);
        auto iit=ss.lower_bound(2*c1[i]+1);
        int kk=-1;
        if(iit!=ss.begin())
        {
            iit--;
            kk=*iit;
        }
        ss.insert(c1[i]);
        cout<<kk<<" ";

    }
    cout<<"\n";
}

signed main()
{
    fastinout;
    int n=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Case #"<<i<<": ";
        myFunc();
    }
    return 0;
}