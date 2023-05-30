#include<stdio.h>

float sodu=0.0;

void menu(){
 printf("Menu\n") ;
 printf("A-kiem tra so du\n");
 printf("B-Rut tien\n");
 printf("C-Gui tien\n");
 printf("D_thoat khoi chuong trinh\n");
}


void kiemtrasodu() {
  printf("so du cua ban la:$%.2f\n",sodu);
}

void ruttien(){
    float tienrut;
    printf("nhap so tien muon rut:");
    scanf("%f",&tienrut);
    if(tienrut>sodu) {
        sodu -= tienrut;
        printf("so tien trong tai khoan khong du de rut!\n");
    } else{
        printf("ban da rut thanh cong$%.2f\n",tienrut);
    }
}
void guitien() {
   float tiengui;
   printf("nhap so tien muon gui:");
   scanf("%f",&tiengui);
  if(tiengui<=0) {
      printf("so tien khong hop le!\n");
  }else {
      sodu += tiengui;
      printf("ban da nap thanh cong$.2f\n", tiengui);
  }

}
int main() {
    char luachon;
    do {
        menu();
        printf("nhap lua chon cua ban");
        scanf("%c", &luachon);

        switch (luachon) {
            case 'A':
                kiemtrasodu();
                break;
            case 'b':
                ruttien();
                break;
            case 'c':
                guitien();
                break;
            default:
                printf("lua chon khong hop le\n");
        }

    } while (1);
    return 0;
}

