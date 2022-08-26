#include <stdio.h>
struct veiculo {
  char proprietario[30];
  int combustivel; // 0=alcool, 1=gasolina e 2=flex
  char modelo[20];
  char cor[20];
  struct {
    int dia, mes, ano;
  } data;
  char placa[7];
} tabela[100];

int main(void) {
  int n,combustivel,dia,mes,ano;
  char dono[10],marca,cor;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%c",&tabela[i].proprietario);
  }
  return 0;//EM PROCESSO
}
