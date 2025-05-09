#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int naveg=7;

void gotoxy(int x, int y){
COORD c;
c.X = x;
c.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void portaAND();

void simbolos(int x, int y){

    for(int i = 0; i < 5;i++){
    gotoxy(x,y+i);
    printf("           "); 
    }
 
    if(naveg == 7){//and
    gotoxy(x,y);
    printf("-|");
    for(int i = 0; i < 3;i++){
    printf("%c",238);    
    }
    printf("\\");

    gotoxy(x,y+1);
    printf(" |   |-");

    gotoxy(x,y+2);
    printf("-|___/");    
    }else if(naveg == 6 || naveg == 13){//or

        gotoxy(x,y);
        printf("-\\");
        for(int i = 0; i < 3;i++){
        printf("%c",238);    
        }
        printf("\\");
    
        gotoxy(x,y+1);
        printf(" >   >-");
        
        gotoxy(x,y+2);
        printf("-/___/");




    }else if(naveg == 5 || naveg == 12){//not

    gotoxy(x-1,y);
    printf(" -| \\   ");
    gotoxy(x-1,y+1);
    printf("  |  >%c=   ",207);
    gotoxy(x-1,y+2);
    printf(" -| /   ");


    }else if(naveg == 4 || naveg == 11){//nand

    gotoxy(x,y);
    printf("-|");
    for(int i = 0; i < 3;i++){
    printf("%c",238);    
    }
    printf("\\");

    gotoxy(x,y+1);
    printf(" |   |%c=", 207);

    gotoxy(x,y+2);
    printf("-|___/");


    }else if(naveg == 3 || naveg == 10){//nor
        
    gotoxy(x,y);
    printf("-\\");
    for(int i = 0; i < 3;i++){
    printf("%c",238);    
    }
    printf("\\");

    gotoxy(x,y+1);
    printf("  >   >%c=",207);
    
    gotoxy(x,y+2);
    printf("-/___/");  

    }else if(naveg == 2 || naveg == 9){//xor
     gotoxy(x,y);
    printf("-| \\");
    for(int i = 0; i < 3;i++){
    printf("%c",238);    
    }
    printf("\\");

    gotoxy(x,y+1);
    printf(" |  >   >-");
    
    gotoxy(x,y+2);
    printf("-| /___/");    

    }else if(naveg == 1 || naveg == 8){//xnor

    gotoxy(x,y);
    printf("-| \\");
    for(int i = 0; i < 3;i++){
    printf("%c",238);    
    }
    printf("\\");

    gotoxy(x,y+1);
    printf(" | >   >%c=", 207);

    gotoxy(x,y+2);
    printf("-| /___/");    


    }



    for(int i = -1; i < 4;i++){
    gotoxy(x+10,y+i);
    printf("|");
    gotoxy(x-2,y+i);
    printf("|");
    }
    for(int i = -1; i < 10;i++){
    gotoxy(x+i,y+3);
    printf("_");
    gotoxy(x+i,y-2);
    printf("_");
    
    }


}





int main(){

    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    
    char tecla;
    int telaS=0;
    int j=20;


if(telaS == 0){  //MENU INTERATIVO  

while(1){       
tecla = NULL;    
    char tela[15][68] = {
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,0,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,0,0,1,0,1,1,1,0,0,0,0,0,1,0,0,0,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,1,0,0,1,1,0,1,0,1,0,0,0,0,0,1,1,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,1,0,0,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    };


    for(int x =0; x < 15;x++){//TELA
    for(int y =0; y < 67;y++){ 
    gotoxy(y+30,x+1);    
    if(x == 0 || y == 0 || x == 14 || y == 66){  
    SetConsoleTextAttribute(console, 128 | 8);    
    printf("%c", tela[x][y] = ' ');
    SetConsoleTextAttribute(console, 7);    
    
    }   

    else if(tela[x][y] == 1){        
    SetConsoleTextAttribute(console, 112);    
    printf("%c", tela[x][y] = ' ');
    SetConsoleTextAttribute(console, 7);    
    }
    
    else{
    printf("%c", tela[x][y] = ' ');    
    }

    }        
    printf("\n");
    }

    printf("%d\n", j);
    printf("%d", naveg);



    //MENU INTERATIVO

    SetConsoleTextAttribute(console, 128);
    for(int i = 18; i < 23;i++){
    gotoxy(54,i);    
    printf("              ");    
    }
    SetConsoleTextAttribute(console, 7);


    if(j > 25){
    j = 20;
    naveg=7; 
    }else if(j < 14){
    j = 20;  
    naveg=7;
    }

    int corletra = 4, corfundo = 0;
    
    

    simbolos(72,19);//SIMBOLOGIA DAS PORTAS LOGICAS



    gotoxy(30,27);
    printf("TECLAS:   ");
    SetConsoleTextAttribute(console,1);
    printf("| W | SUBIR -");
    SetConsoleTextAttribute(console,4);
    printf(" | S | DESCER -");
    SetConsoleTextAttribute(console,2);
    printf(" | ENTER | CONFIRMAR ");
    SetConsoleTextAttribute(console,7);


    gotoxy(40,19);
    printf("   Escolha  ");
    gotoxy(40,20);
    printf("     Uma    >>");
    gotoxy(40,21);
    printf("Porta Logica");
    gotoxy(54,20);
    SetConsoleTextAttribute(console, corletra | corfundo);
    printf("[            ]");

    SetConsoleTextAttribute(console, 128);

    if(j == 20){
    SetConsoleTextAttribute(console, corletra | corfundo);
    }
     if(j >= 18 && j <= 22){
    gotoxy(56,j);
    printf("Porta AND "); 
    }else if(j <= 15){
    gotoxy(56,j+7);
    printf("Porta AND ");    
    }else if(j >= 24){
    gotoxy(56,j-6);
    printf("Porta AND ");    
    }

    SetConsoleTextAttribute(console, 128);


    if(j+1 == 20 || j-5 == 20){
    SetConsoleTextAttribute(console, corletra | corfundo);    
    }
    if(j >= 23){
    gotoxy(56,j-5);
    printf("Porta OR  ");    
    }else if(j >= 17 && j <= 21){
    gotoxy(56,j+1);
    printf("Porta OR  ");
    }else if(j <= 14){
    gotoxy(56,j+8);
    printf("Porta OR  ");
    }
    SetConsoleTextAttribute(console, 128);

    if(j+2 == 20 || j-4 == 20){
    SetConsoleTextAttribute(console, corletra | corfundo);    
    }
    if(j >= 23){
    gotoxy(56,j-4);
    printf("Porta NOT ");
    }else if(j >= 16 && j <= 20){
    gotoxy(56,j+2);
    printf("Porta NOT ");
    }else if(j <= 13){
    gotoxy(56,j+9);
    printf("Porta NOT ");    
    }
    SetConsoleTextAttribute(console, 128);

    if(j+3 == 20 || j-4 == 20){
    SetConsoleTextAttribute(console, corletra | corfundo);   
    }
    if(j >= 22 && j <= 25){
    gotoxy(56,j-4);
    printf("Porta NAND");
    }else if(j >= 15 && j <= 19){
    gotoxy(56,j+3);
    printf("Porta NAND");
    }
    SetConsoleTextAttribute(console, 128);
    
    if(j+4 == 20 || j-3 == 20){
    SetConsoleTextAttribute(console, corletra | corfundo);    
    }
    if(j >= 21 && j <=25){
    gotoxy(56,j-3);
    printf("Porta NOR ");
    }else if(j <= 18){
    gotoxy(56,j+4);
    printf("Porta NOR ");    
    }
    SetConsoleTextAttribute(console, 128);

    if(j+5 == 20 || j-2 == 20){
    SetConsoleTextAttribute(console, corletra | corfundo);
    }

    if(j >= 26){
    gotoxy(56,j-8);
    printf("Porta XOR ");
    }else if(j >= 20 && j <= 24){
    gotoxy(56,j-2);
    printf("Porta XOR ");
    }else if(j <= 17){
    gotoxy(56,j+5);
    printf("Porta XOR ");
    }
    
    SetConsoleTextAttribute(console, 128);

    if(j-1 == 20 || j+6 == 20){
    SetConsoleTextAttribute(console, corletra | corfundo); 
    }
    if(j >= 25){
    gotoxy(56,j-7);
    printf("Porta XNOR");
    }else if(j >= 19 && j <= 23){
    gotoxy(56,j-1);
    printf("Porta XNOR");
    }else if(j <= 16){
    gotoxy(56,j+6);
    printf("Porta XNOR");    
    }


    
    SetConsoleTextAttribute(console, 128);
    



    if(kbhit()){
    tecla = getch();    
    }

    if(tecla == 'w'){
    j++;        
    naveg++;
    }
    if(tecla == 's'){
    j--;    
    naveg--;
    }



    if(tecla == 13 && naveg == 7){
    telaS=1;
    break;    
    }




}   //MENU INTERATIVO
}


SetConsoleTextAttribute(console, 7);

if(telaS == 1){//AND
   
    portaAND();

}


    return 0;
}





void portaAND(){
    
    char tecla;
    bool porta1 = 0;
    bool porta2 = 0;
    

    while(1){


    tecla == NULL;    
    system("cls");
        
    

    printf("PORTA LOGICA SELECIONADA [---AND---] \n\n  1 = A ( lig/desl ) \n  2 = B ( lig/desl )\n\n\n\n");
    
    
    
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

    gotoxy(30,6);
    printf("-AND- ");
    
    gotoxy(30,7);
    printf("|");
    for(int i = 0; i < 3;i++){
    printf("%c",238);    
    }
    printf("\\");

    gotoxy(30,8);
    printf("|   |");

    if(porta1 == 1 && porta2 == 1){
        printf("=====");
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
    }else{
        printf("-----");
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
        
    }

    gotoxy(30,9);
    printf("|___/");


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
    
    

    char tabela[5][11] = {
        '|','A','|','B','|','S','=','A','.','B','|',   
        '|','0','|','0','|',0,0,'0',0,0,'|',
        '|','0','|','1','|',0,0,'0',0,0,'|',
        '|','1','|','0','|',0,0,'0',0,0,'|',
        '|','1','|','1','|',0,0,'1',0,0,'|'
         
        
        
    };

    for(int x =0; x < 5;x++){
    for(int y =0; y < 11;y++){ 
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


}