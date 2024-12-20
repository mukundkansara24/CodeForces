    #include <iostream>
    using namespace std;
    int main()
    {
        int a;
        cin >> a;
        int b = 0;
        while (a>0)
        {
            if (a>=5)
            {
                a-=5;
                b++;
            }
            else if (a>=4)
            {
                a-=4;
                b++;
            }
            else if (a>=3)
            {
                a-=3;
                b++;
            }
            else if (a>=2)
            {
                a-=2;
                b++;
            }
            else if (a>=1)
            {
                a-=1;
                b++;
            }
        }
        cout << b << endl;
    }