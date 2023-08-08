#include <iostream>

using namespace std;

void graycode(string & s, int k)
{
    if(k == s.size()) 
    {
        cout<<s<<"\n"; 
        return;
    }
    graycode(s, k+1);
    s[k] = (s[k] == '1')?'0':'1';
    graycode(s, k+1);
}

int main()
{
    int n;
    cin >> n;
    string s(n, '0');
    graycode(s, 0);
    return 0;
}
