#include <iostream>
#include <vector>
using namespace std;

vector<int> TaoChuoi(int n){
    
}

void SapXepChuoi(vector<int> &DS){

}

int main(){
    cout << "Nhap so luong phan tu: ";
    int n;
    cin >> n;
    vector<int> DS = TaoChuoi(n);
    SapXepChuoi(DS);
    for(auto i : DS){
        cout << i << " ";
    }
    return 0;
}