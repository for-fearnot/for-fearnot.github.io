#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;vector<int> number;
    cin >> num;
    for (int z = 2; z < num; z++) {
        for (int i = 2; i < num; i++) {
            int tmp = 0;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    tmp += 1;
                }
            }
            if (num % i == 0 && tmp < 3 && i != 1 && i != num) {
                number.push_back(i);
                num = num / i;
                break;
            }
        }
    }
    int tmp = 0;
    for(int i : number){
        if(tmp == 0){
            cout << i;
            tmp = i;
        }else if(i == tmp){
            cout << "^" << i;
            tmp = i;
        }else{
            cout << "x" << i;
            tmp = i;
        }
    }
    if(num != tmp) {
        cout << "x" << num;
    }else{
        cout << "^" << num;
    }
}
