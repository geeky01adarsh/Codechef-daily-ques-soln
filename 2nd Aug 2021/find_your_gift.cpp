// Question Link - https://www.codechef.com/problems/GIFTSRC

/*
    Approach:-
    get your value of x or y declared as per s[0], 
    now traverse in your array from i=0 to i<s.size()
    increment or decrement value of x or y only if 
    last element was not of same variable, i.e., 
    for modifying y, last element must be either
    'L' or 'M' and similarly for x, last element must be
    'U' or 'D'.
*/

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        ll n;

        cin >> n;
        cin >> s;
        ll x = 0, y = 0;
        if (s[0] == 'L')
            x--;
        else if (s[0] == 'R')
            x++;
        else if (s[0] == 'U')
            y++;
        else
            y--;
        for (ll i = 1; i <s.size(); i++){
            if(s[i]=='L' && (s[i-1]=='U'||s[i-1]=='D')) x--;
            else if(s[i]=='R' && (s[i-1]=='U'||s[i-1]=='D')) x++;
            else if(s[i]=='U' && (s[i-1]=='L'||s[i-1]=='R')) y++;
            else if(s[i]=='D' && (s[i-1]=='L'||s[i-1]=='R')) y--;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
