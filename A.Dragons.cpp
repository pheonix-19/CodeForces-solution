#include<bits/stdc++.h>

using namespace std;

const int max = 1000;

pair<int, int> ann[max];

int main()
{


    int s, n; cin >> s >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> ann[i].first >> ann[i].second;
    }

    sort(ann, ann+ n);

    for (int i = 0; i < n; i++)
    {
        if (s <= ann[i].first)
        {
            cout << "NO\n";
            return 0;
        }
        else
        {
            s += ann[i].second;
        }
    }
    cout << "YES\n";
}