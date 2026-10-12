
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char name[20];
    cin >> name;

    int s = 0;
    int e = strlen(name) - 1;

    while(s < e) {
        if(name[s] != name[e]) {
            cout << "It is not a palindrome string" << endl;
            return 0;
        }
        s++;
        e--;
    }

    cout << "It is a palindrome string" << endl;

    return 0;
}
