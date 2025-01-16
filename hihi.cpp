#include <iostream>

void xuatmang(int n){
    for(int i=0; i < n; i++){
        std::cout<< "Thu tu cua mang la: " << std::endl; 
        std::cout << i << " ";
    }
}

int main(){
    int n;
    std::cout<< "Nhap n = " << std::endl;
    std::cin >> n;
    xuatmang(n);
}
