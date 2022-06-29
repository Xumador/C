#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int ID, idade, soma=0, mas =0, fem=0, outro=0, idadeMaior=0,
        idadeMenor=1000,pessoas=0,maiorLevel=0,menorLevel=0;
    double media=0;
    char sexo;
//formato dos dados 'identificador''gênero''idade'
    printf ("Digite o ID, o gênero e a idade:\n Para encerrar, digite '0 x 0'\n");

        do
        {
            scanf("%d %c %d", &ID, &sexo, &idade);
            getchar();

            if (ID !=0 && sexo!= 'x' && idade!=0 )
            {
                pessoas++;
                soma = soma + idade;


             //quantidade de pessoas
                    if(sexo =='m'|| sexo =='M')
                    {
                        mas = mas+1;
                    }
                    if(sexo== 'f'|| sexo == 'F')
                    {
                        fem = fem+1;
                    }
                    else if (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F' && sexo != 'x')
                    {
                        outro = outro+1;
                    }
                            //Maior e menor idade
                            if(idade<=idadeMenor && idade>0)
                            {
                                idadeMenor=idade;
                                menorLevel=ID;

                            }
                            if(idade>=idadeMaior)
                            {
                                idadeMaior=idade;
                                maiorLevel=ID;
                            }
            }
        //média
        media= soma/pessoas;


        }

        //Relatório
        /*  Soma das idades
            Total de pessoas
            Media de idades
            Homens
            Mulheres
            Outros
            Maior idade
            ID do mais velho
            Menor idade
            ID do mais novo*/
        while(ID!= 0 && sexo!='x' && idade!=0);
        printf("+------------------+----------+\n");
        printf("%18s %9d|\n","| Soma das idades  |", soma);
        printf("%18s %9d|\n","| Total de pessoas |",pessoas);
        printf("%18s %9.1f|\n","| Media de idades  |",media);
        printf("%18s %9d|\n","| Homens           |", mas);
        printf("%18s %9d|\n","| Mulheres         |", fem);
        printf("%18s %9d|\n","| Outros           |", outro);
        printf("%18s %9d|\n","| Maior idade      |", idadeMaior);
        printf("%18s %9d|\n","| ID do mais velho |",maiorLevel);
        printf("%18s %9d|\n","| Menor idade      |",idadeMenor);
        printf("%18s %9d|\n","| ID do mais novo  |",menorLevel);
        printf("+------------------+----------+\n");
        
        return 0;
        }
