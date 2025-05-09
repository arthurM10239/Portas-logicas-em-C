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
    bool porta2 = 0;
    

    while(1){


    tecla == NULL;    
    system("cls");
        
    

    printf("PORTA LOGICA SELECIONADA [---XNOR---] \n\n  1 = A ( lig/desl ) \n  2 = B ( lig/desl )\n\n\n\n");
    
    
    
    printf("  A: ");
    if(porta1 == 1){
    printf("[  Ligado   ]============\n\n");    
    }else if(porta1 == 0){
    printf("[ Desligado ]------------\n\n");        
    }

    
    printf("  B: ");
    if(porta2 == 1){
    printf("[  Ligado   ]============\n");    
    }else if(porta2 == 0){
    printf("[ Desligado ]------------\n");        
    }


    gotoxy(29,6);
    printf(" -XNOR- ");

    gotoxy(28,7);
    printf("| \\");
    for(int i = 0; i < 3;i++){
    printf("%c",238);    
    }
    printf("\\");

    gotoxy(28,8);
    printf("| >   >%c",207);
    
    if(porta1 == 1 ^ porta2 == 1){
        printf("=====");
        gotoxy(39,6);
        printf("Desligado");
        gotoxy(40,8);
        printf("|");
        gotoxy(42,8);
        printf("|");
        gotoxy(41,9);
        printf("%c",238);
        gotoxy(41,7);
        printf("_");
        
    }else{
        printf("-----");
        gotoxy(39,6);
        printf("Ligado");
        gotoxy(40,8);
        printf("|");
        gotoxy(42,8);
        printf("|");
        gotoxy(41,9);
        printf("%c",238);
        gotoxy(41,7);
        printf("_");
        gotoxy(41,8);
        printf("%c",254);
        
    }

    gotoxy(28,9);
    printf("| /___/");

    printf("\n\n\n");

    if(porta1 == 1){
    printf("  A = 1 |");
    }else{
    printf("  A = 0 |");    
    }
    if(porta2 == 1){
    printf(" B = 1  ");
    }else{
    printf(" B = 0  ");    
    }

    printf("\n");
    
    char tabela[5][13] = {
        '|','A','|','B','|','S','=','A','(','.',')','B','|',   
        '|','0','|','0','|',0,0,'1',0,0,0,0,'|',
        '|','0','|','1','|',0,0,'0',0,0,0,0,'|',
        '|','1','|','0','|',0,0,'0',0,0,0,0,'|',
        '|','1','|','1','|',0,0,'1',0,0,0,0,'|'
         
        
        
    };

    for(int x =0; x < 5;x++){
    for(int y =0; y < 13;y++){ 
    gotoxy(y+5,x+15);    

    printf("%c", tabela[x][y]);    
    
    }        
    printf("\n");
    } 






    tecla = getch();
    if(tecla == '1'){
        porta1 = !porta1;
    }
    if(tecla == '2'){
        porta2 = !porta2;
    }




}
    return 0;
}