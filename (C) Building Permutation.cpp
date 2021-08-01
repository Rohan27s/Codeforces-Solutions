#include <bits/stdc++.h>
using namespace std;
#define ll long long
void rohansolve()
{
    int n;
    ll sum = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int j = 1; j <= n; j++)
    {
        sum += (ll)abs(arr[j - 1] - j);
    }
    cout << sum << endl;
}
int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    rohansolve();
}
