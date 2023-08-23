#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
      int N,flag=0;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    ((N%2==1)?(flag=1):((N>=2&&N<=5)?(flag=0):((N>=6&&N<=20)?(flag=1):((N>20)?(flag=0):(flag=1)))));
    if (flag==0)
    cout<<"Not Weird"<<endl;
    else
    cout<<"Weird"<<endl;
    return 0;
    
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
