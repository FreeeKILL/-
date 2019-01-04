#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream f;
    f.open("1.txt");
    vector<string> v;
    string s;
    ofstream fin;
    fin.open("2.txt");
    while (!f.eof()){
      f>>s;
      v.push_back(s);
    }
    for (int i=0;i<v.size();i++){

    }
    return 0;
}
