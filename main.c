#include<stdio.h>
#include"my_mat.h"

int main(){
    
    char menu;

    while(scanf("%c",&menu)!=EOF && menu!='D'){

        if(menu=='A')  makeMat();
        
        if(menu=='B') isConnect();
        
        if(menu=='C') shortestPath();
        
    }
        
    
    return 0;
    }
