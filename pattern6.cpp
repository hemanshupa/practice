//FLoyd's Pattern
#include<iostream>

int main(){
    int n;
    std::cout<<"Enter N :";
    std::cin>>n;
    int count=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            std::cout<<count<<" ";
            count++;
        }
        std::cout<<std::endl;
    }
    return 0;
}