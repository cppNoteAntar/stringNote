#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s=" antar";
    // s.push_back('b');          // you can add a character(not string) at the last
    // s.append(" banik");           // you can add a string at the last

    // s.replace(pos,rep,stringToReplace);
    // s.replace(0,1,"_"); //output="_antar";
    // s.erase(4,5); // output=" ant";
    // cout<<s.substr(3); // output="tar;
    // cout<<s.substr(1,5); //output="antar";
    // reverse(s.begin(),s.end()); //output="ratna ";
    // sort(s.begin(),s.end()); //output=" aanrt";






    

    // int pos=s.find('a'); //output=1(index of the character);
    // // cout<<pos;
    // if(pos!=string::npos) cout<<"found";
    // else cout<<"not found";
    // cout<<s;


    

    // string s1="antar";
    // string s2="banik";
    // auto cmp=s1==s2;// if true 1 else o; 
    // cout<<cmp; cout<<"0";







    string s1, s2; cin>>s1>>s2;
    if(s1.find(s) != -1) cout<<"FOUND";
    else cout<<"NOT FOUND";

    


    
    return 0;
}
