#include<stdio.h>
main(){
char A[9]="GOOMILAR", B;
int i, flag=0;
printf("masukan nilai yang ingin dicari: ");
scanf("%c", &B);

for(i=0; i<8; i++){
if(B==A[i]){
flag=1;
 }
}

if(flag==1){
printf("\n\nNilai yang Anda cari ADA");
}else{
printf("Nilai yang Anda cari TIDAK ADA");
}
}