// Question Link:- https://www.codechef.com/problems/BIT2A

/* 
    Approach:-
    traverse the array and for every ith element count from j=1 to j=n-1,
    elements which are greater than ith element, i.e.,
    arr[j]>arr[i];
    try doing it lesser tym complexity(hint:- array is sorted)
    print the count as the answer
    worst case time complexity of this algoritm - O(nlogn)
    Space Complexity - O(1)
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
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        for (ll i = 0; i < n; i++)
        {
            int j = i + 1;
            while (arr[i] == arr[j] && j < n)
            {
                j++;
            }
            cout << (n - j) << " ";
        }
        cout << endl;
    }
}