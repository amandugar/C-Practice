# include <bits/stdc++.h>

using namespace std;

class countBits
{
    public:
        unsigned int countSetBits(int n)
        {
            unsigned int count = 0;
            while(n)
            {
                n = n&(n-1);
                count ++;
            }
            return count;
        }
};

int main()
{
    countBits c;
    int n;
    cin >> n;
    cout << c.countSetBits(n) << endl;
    return 0;
}