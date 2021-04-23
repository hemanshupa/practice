//Butterfly Pattern
#include<iostream>

int main(){
    int n;
    std::cout<<"Enter N :";
    std::cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            std::cout<<"*";
        }
        int space = 2*(n-1) - 2*i;
        for(int j=0;j<space;j++){
            std::cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i+1;j++){
            std::cout<<"*";
        }
        int space = 2*(n-1) - 2*i;
        for(int j=0;j<space;j++){
            std::cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    return 0;
}