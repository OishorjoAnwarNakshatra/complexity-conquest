#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;

    if(x >= '0' && x <= '9'){
        cout << "IS DIGIT\n";
    }
    else if (x >= 'A' && x <= 'Z')
    {
        cout << "ALPHA\n";
        cout << "IS CAPITAL\n";
    }
    else if (x >= 'a' && x <= 'z')
    {
        cout << "ALPHA\n";
        cout << "IS SMALL\n";
    }
    

    
    return 0;
}