#include <stdio.h>

int main(){
int sayi,i,f1=0,f2=1,siradaki=0;

printf("Gormek istediginiz fibonacci sayisini giriniz:");
scanf("%d",&sayi);

for(i=1;i<=sayi;i++){
        siradaki=f1 + f2;
        f1=f2;
        f2=siradaki;
        
printf(" %d ",siradaki);

} 


       
 






    return 0;
}