//Half Pyramid Pattern using numbers
#include<iostream>

int main(){
    int n;
    std::cout<<"Enter N :";
    std::cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            std::cout<<i+1<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}