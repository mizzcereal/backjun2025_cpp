#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;

    cin >> n;
    for(int i =1; i <=n; i++){
        cout << "Hello World, Judge " + to_string(i) << "!" << endl;
    }

    return 0;
}