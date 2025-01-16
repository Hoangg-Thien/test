#include <iostream>

void xuatmang(int n){
    for(int i=0; i < n; i++){
        std::cout << i << " ";
    }
}

int main(){
    int n;
    std::cout<< "Nhap n = " << std::endl;
    std::cin >> n;
    xuatmang(n);
}