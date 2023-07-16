#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main() {
    IOS;
    ll n = 0, x = 0, count = 0, minimum = 0, maximum = 0;
    vector<ll> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    minimum = v[0];
    maximum = v[0];

    for (int i = 0; i < n; i++) {
        if (minimum > v[i]) {
            minimum = v[i];
            count++;
        } else if (maximum < v[i]) {
            maximum = v[i];
            count++;
        }
    }

    cout << count;

    return 0;
}