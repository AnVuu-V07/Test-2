#include <iostream>
#include <vector>
using namespace std;

vector<int> TaoChuoi(int n){
    
}

void SapXepChuoi(vector<int> &DS){
    for(int i = 0; i < DS.size() - 1; i++){
        for(int j = 0; j < DS.size() - i - 1; j++){
            if(DS[j] > DS[j + 1]){
                swap(DS[j], DS[j + 1]);
            }
        }
    }
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