#include <iostream>
#include <vector>
using namespace std;

vector<int> TaoChuoi(int n){
    cout<<"Nhap cac phan tu: ";
    vector<int> DS(n);
    for(int i = 0; i < n; i++){
        cin >> DS[i];
    }   
    return DS;
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