#include<bits/stdc++.h>
using namespace std;
int word(string str)
{
   if(str=="zero")return 0;
   if(str=="one")return 1;
   if(str=="two")return 2;
   if(str=="three")return 3;
   if(str=="four")return 4;
   if(str=="five")return 5;
   if(str=="six")return 6;
   if(str=="seven")return 7;
   if(str=="eight")return 8;
   if(str=="nine")return 9;
   if(str=="ten")return 10;
   if(str=="eleven")return 11;
   if(str=="twelve")return 12;
   if(str=="thirteen")return 13;
   if(str=="fourteen")return 14;
   if(str=="fifteen")return 15;
   if(str=="sixteen")return 16;
   if(str=="seventeen")return 17;
   if(str=="eighteen")return 18;
   if(str=="nineteen")return 19;
   if(str=="twenty")return 20;
   if(str=="thirty")return 30;
   if(str=="fourty")return 40;
   if(str=="fifty")return 50;
   if(str=="sixty")return 60;
   if(str=="seventy")return 70;
   if(str=="eighty")return 80;
   if(str=="ninety")return 90;
   if(str=="hundred")return 100;
   if(str=="thousand")return 1000;




}
int main()

{

    string s;
    getline(cin,s);
    stringstream ss(s);
    int sum=0,l=0,temp;
    while(ss>>s)
        //cout<<word(s)<<endl;
    {
        temp=word(s);
        if(temp==1000){
                sum+=1000;
                l=0;
        }
        else if(temp==100)
        {
            sum+=l*temp;
            l=0;
        }
        else
        {
            sum+=l;
            l=temp;
        }
        //cout<<temp<<endl;

    }
    sum+=l;
    cout<<sum<<endl;
    /*
int r;
string st="";
while(sum)
{
    r=sum%2;
    st+=to_string(r);
    sum/=2;
}
reverse(al(st));
string ans=st;
cout<<ans<<endl;
reverse(al(st));
if(ans==st)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;

*/
}

