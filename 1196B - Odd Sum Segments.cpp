#include<bits/stdc++.h>
using namespace std;
void test(int arr[],int n,int k)
{
    int odd=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
                odd++;
        }
        if(odd<k)
            {
                cout<<"NO"<<endl;
                return;
            }
        else if((odd-k)%2!=0)
            {
                cout<<"NO"<<endl;
                return;
            }
        else
        {
            vector<int>v;
            int a=k;
            for(int i=0;i<n;i++)
            {
                if(a==1)
                {
                    break;
                }
                if(arr[i]%2!=0)
                {
                    v.push_back(i+1);
                    a--;
                    //cout<<"a="<<a<<endl;
                }
 
            }
            cout<<"YES"<<endl;
            v.push_back(n);
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
            test(arr,n,k);
 
    }
}
