#include <stdio.h>

int main(){

    FILE *archivo = NULL;
    FILE *archivo1 = NULL;

    int pi;

    archivo=fopen("vector.txt","r");
    archivo1=fopen("multiplos.txt","w");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    int contador;
    int i;
    while(!feof(archivo)){
        fscanf(archivo, "%d", &pi);
        if(pi%10 == 0){
            fprintf(archivo1,"soy un multiplo de 10\n");
        }
        else
        {
            fprintf(archivo1,"%d\n", pi);
        }
    }
   
     fclose(archivo);
     fclose(archivo1);

     return 0;
}