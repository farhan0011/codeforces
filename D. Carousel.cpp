#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n];
        set<int>s;
        int c[n];
        c[0] = 1;
        int ans =1;
        for(int i=0;i<n;i++)
            {
                cin>>arr[i];
                s.insert(arr[i]);
            }
            int p = s.size();
            if(p == 1)
            {
                cout<<1<<endl;
                for(int i=0; i<n; i++)
                    cout<<1<<" ";
                cout<<endl;
            }
            else if(n % 2 == 0)
            {
                cout<<2<<endl;
                for(int i=0; i<n; i++)
                {
                    if(i%2 == 0)
                        cout<<1<<" ";
                    else
                        cout<<2<<" ";
                }
                cout<<endl;
            }
            else
            {
                int che_odd = 0;
                for(int i=1;i<n;i++)
                {
                    if(arr[i-1] == arr[i])
                    {
                        che_odd = 1;
                        break;
                    }
                }
                if(arr[n-1] == arr[0])
                    che_odd = 1;
                if(che_odd == 1){
                    cout<<2<<endl;
                    int col = 1;
                    cout<<col<<" ";
                    for(int i=1,p = 0;i<n;i++)
                    {
                        if(arr[i] == arr[i-1] && p == 0)
                        {
                            cout<<col<<" ";
                            p =1;
                        }
                        else if(col == 1)
                            {
                                col = 2;
                        cout<<col<<" ";
                            }
                        else
                            {
                                col = 1;
                        cout<<col<<" ";
                            }
                    }
                    cout<<endl;
                }
                else{
                    cout<<3<<endl;
                    for(int i=0,col = 1;i<n-1;i++)
                    {
                        cout<<col<<" ";
                        if(col == 1)
                            col = 2;
                        else
                            col = 1;
                    }
                    cout<<3<<endl;
                }

            }




    }
}
