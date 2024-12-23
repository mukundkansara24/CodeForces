#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string a;
    cin >> a;
    int cntx = 0, cnty = 0, cnt = 0;
    bool chx = false, chy = false;
    int dx = ex - sx, dy = ey - sy;
    if (dx >= 0)
    {
        if (dx == 0)
        {
            chx = true;
            goto fory;
        }
        int i = 0;
        while (dx > 0 && i < t)
        {
            if (a[i] == 'E')
            {
                dx--;
                cntx = i;
            }
            i++;
        }
        // cout << "cntx = " << cntx << endl;
        if (dx == 0)
        {
            chx = true;
        }
    }
    else if (dx < 0)
    {
        dx = dx * (-1);
        int i = 0;
        while (dx > 0 && i < t)
        {
            if (a[i] == 'W')
            {
                dx--;
                cntx = i;
            }
            i++;
        }
        // cout << "cntx = " << cntx << endl;
        if (dx == 0)
        {
            chx = true;
        }
    }
fory:
    if (dy >= 0)
    {
        if (dy == 0)
        {
            chy = true;
            goto check;
        }
        int i = 0;
        while (dy > 0 && i < t)
        {
            if (a[i] == 'N')
            {
                dy--;
                cnty = i;
            }
            i++;
        }
        // cout << "cnty = " << cnty << endl;
        if (dy == 0)
        {
            chy = true;
        }
    }
    else if (dy < 0)
    {
        dy = dy * (-1);
        int i = 0;
        while (dy > 0 && i < t)
        {
            if (a[i] == 'S')
            {
                dy--;
                cnty = i;
            }
            i++;
        }
        if (dy == 0)
        {
            chy = true;
        }
    }
check:
    if (chx && chy)
    {
        if (cntx > cnty)
            cout << cntx + 1 << endl;
        else
            cout << cnty + 1 << endl;
    }
    else
        cout << "-1" << endl;
    return 0;
}