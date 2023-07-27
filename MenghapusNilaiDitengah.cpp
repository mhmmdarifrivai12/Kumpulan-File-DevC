struct simpul{
       int data;
       simpul *=next;
       } *awal=NULL,*akhir=NULL,*baru, *bantu, *hapus;

void hapus_awal(){
    hapus = awal;
    awal = awal->next;
    delete hapus;
}

void hapus_tengah(int number){
     int count=1;
     bantu=awal;
     while(bantu){
             if(count==number-1){ //berhenti di posisi sebelum node yang akan dihapus
                                 hapus=bantu->next; //hapus menjadi node setelah bantu
                                 bantu->next=hapus->next; //bantu->next mengarah sama seperti hapus->next
                                 delete hapus; //delete hapus
                                 break;
             }
             count++;
    bantu=bantu->next;                       
     }
}

void hapus_akhir(){
  bantu=awal;
       while(bantu){
             if(bantu->next==akhir){
               hapus=akhir;
               akhir=bantu;
               akhir->next=NULL;
               delete hapus;
               break;
             }
             bantu=bantu->next;
       }
}