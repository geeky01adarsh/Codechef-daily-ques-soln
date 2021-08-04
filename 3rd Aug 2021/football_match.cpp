// Question Link :- https://www.codechef.com/problems/FBMT

/*
    Approach:- 
    
    take input of all goals
    sort them to put teams together
    iterate over them to have a count of goals scored by first team
    do the same for second team, check if both the frequency are equal
    else
    now sort again
    the team with more goals is at index 1(bcz only 2 teams are there)
    time complexity-- O(nlogn)
    This approach will give runtime error

    determine the first and second time
    calculate their goal
*/

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count1 = 0, count2 = 0;
        cin >> n;
        if (n == 0)
        {
            cout << "Draw" << endl;
            continue;
        }

        string a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        string t = a[0];
        string u;
        for (int i = 0; i < n; i++)
        {
            if (t == a[i])
                count1++;
            else
            {
                u = a[i];
                count2++;
            }
        }
        if (count1 > count2)  
            cout << t << endl;
        
        else if (count2 > count1)
            cout << u << endl;
        else
            cout << "Draw" << endl;
    }
}