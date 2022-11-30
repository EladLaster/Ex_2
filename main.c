#include<stdio.h>
#include"my_mat.h"

int main(){
    
    char menu;

    while(scanf("%c",&menu)!=EOF && menu!='D'){

        if(menu=='A')  scan_matriza();
        
        if(menu=='B') path_exist();
        
        if(menu=='C') shortest_path();
        
    }
        
    
    return 0;
    }
