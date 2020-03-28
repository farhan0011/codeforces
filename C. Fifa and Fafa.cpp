#include<bits/stdc++.h>
using namespace std;
int main()
{
    double R,x1,y1,x2,y2;
    cin>>R>>x1>>y1>>x2>>y2;
//    x1 = abs(x1);
//    x2 = abs(x2);
//    y1 = abs(y1);
//    y2 = abs(y2);
    double dis = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2) * (y1 - y2));
    if(dis >= R)
    {
        cout<<x1<<" "<<y1<<" "<<R<<endl;
    }
    else
    {
        //cout<<"YES"<<endl;
        double dia = 2 * R - (R - dis);
    double rad = dia/2.0;
    int r = 1,d = 1;
    if(x2>x1)
        r = -1;
    if(y2>y1)
        d = -1;
    //cout<<rad<<endl;
    if(dis>0)
    {
        double ax = x2 + r *(rad * abs(x1 - x2))/dis;
        double ay = y2 + d *(rad * abs(y1 - y2))/dis;
        cout<<fixed<<setprecision(15)<<ax<<" "<<ay<<" "<<rad<<endl;
    }
    else{
        cout<<fixed<<setprecision(15)<<rad + x1<<" "<<y1<<" "<<rad<<endl;
    }
    //cout<<"ax = "<<ax<<endl;

    }
}
