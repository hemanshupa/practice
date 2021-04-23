//Hollow box pattern
#include<iostream>

int main(){
    int row, col;
    std::cout<<"Enter Number of Rows and Columns :";
    std::cin>>row>>col;

    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j){
            if(i==0 || i == row-1 || j==0 || j == col-1){
                std::cout<<"*";
            }
            else{
                std::cout<<" ";
            }
        }
        std::cout<<std::endl;
    }


    return 0;
}