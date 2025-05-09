#include <stdio.h>
#include <conio.h>
#include <Windows.h>


void gotoxy(int x, int y){
COORD c;
c.X = x;
c.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


void tabela(){
    
}




int main(){

    char tecla;
    bool porta1 = 0;
    

    while(1){
    tecla == NULL;    
    system("cls");    
    

    printf("PORTA LOGICA SELECIONADA [---NOT---] \n\n1 = A ( lig/desl )\n\n\n\n\n");
    
    
    printf("  A: ");
    
    if(porta1 == 1){
    printf("[  Ligado   ]=========\n\n");    
    }else if(porta1 == 0){
    printf("[ Desligado ]---------\n\n");        
    }


    gotoxy(29,5);
    printf("-NOT-");

    gotoxy(30,6);
    printf("| \\");
    gotoxy(30,7);
    printf("|  >%c",207);
    if(porta1 == 0){
        printf("=====");
        gotoxy(39,5);
        printf("Ligado");
        gotoxy(40,7);
        printf("|");
        gotoxy(42,7);
        printf("|");
        gotoxy(41,8);
        printf("%c",238);
        gotoxy(41,6);
        printf("_");
        gotoxy(41,7);
        printf("%c",254);
    }else{
        printf("-----");
        gotoxy(38,5);
        printf("Desligado");
        gotoxy(40,7);
        printf("|");
        gotoxy(42,7);
        printf("|");
        gotoxy(41,8);
        printf("%c",238);
        gotoxy(41,6);
        printf("_");
        
    }
    gotoxy(30,8);
    printf("| /");

    printf("\n\n\n");

    if(porta1 == 1){
    printf("  A = 1 ");
    }else{
    printf("  A = 0 ");    
    }
    

    char tabela[3][8] = {
        '|','A','|','S','=',39,'A','|',
        '|','0','|',0,'1',0,0,'|',
        '|','1','|',0,'0',0,0,'|',
         
    };

    for(int x =0; x < 3;x++){
    for(int y =0; y < 8;y++){ 
    gotoxy(y+5,x+15);    

    printf("%c", tabela[x][y]);    
    
    }        
    printf("\n");
    } 


    
    tecla = getch();
    if(tecla == '1'){
        porta1 = !porta1;
    }
    

}
    return 0;
}