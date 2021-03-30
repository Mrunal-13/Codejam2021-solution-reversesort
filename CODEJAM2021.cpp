#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int p;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        vec.push_back(p);
    }
    //for(int i=0;i<n;i++)
    //{
    //    cout<<vec[i];
    //}
    //cout<<endl;
    long r = 0;
    for (int i = 0; i < n - 1; i++)
    {
        auto begin = vec.begin() + i;
        auto end = vec.end();
        int min = min_element(begin, end) - vec.begin();
        // cout<<"min is"<<min<<endl;
        reverse(vec.begin() + i, vec.begin() + (min + 1));
        r = r + ((min + 1) - (i + 1) + 1);
        //cout<<"cost is"<<r<<endl;
        //for(int i=0;i<n;i++)
        //{
            //cout<<vec[i];
        //}
        //cout<<endl;
    }
    return r;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        long r = solve(n);
        cout << "Case #" << i + 1 << ": " << r << endl;

    }
}
