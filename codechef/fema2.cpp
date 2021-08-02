#include <bits/stdc++.h>

using namespace std;

#define long long int

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        queue<int> magnet;
        queue<int> iron;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'M')
            {
                magnet.push(i);
            }
            if (s[i] == 'I')
            {
                iron.push(i);
            }
            if (s[i] == 'X' || i == n - 1)
            {
                int l, r, sheet = 0;
                while (!magnet.empty() && !iron.empty())
                {
                    sheet = 0;
                    l = min(magnet.front(), iron.front());
                    r = max(magnet.front(), iron.front());
                    for (int j = l; j <= r; j++)
                    {
                        if (s[j] == ':')
                        {
                            sheet++;
                        }
                    }
                    if ((k + 1 - abs(l - r) - sheet) > 0)
                    {
                        count++;
                        magnet.pop();
                        iron.pop();
                    }
                    else if (magnet.front() < iron.front())
                    {
                        magnet.pop();
                    }
                    else
                    {
                        iron.pop();
                    }
                }
                while (!magnet.empty())
                {
                    magnet.pop();
                }
                while (!iron.empty())
                {
                    iron.pop();
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}