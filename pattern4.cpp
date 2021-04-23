//Half Pyramid Pattern 180degree rotated
#include<iostream>

int main(){
    int n;
    std::cout<<"Enter N :";
    std::cin>>n;

    for(int i=n;i>0;i--){
        for(int j=0;j<n;j++){
            if (j>=i-1)
                std::cout<<"*";
            else
                std::cout<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}