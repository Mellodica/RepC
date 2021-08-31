// aula.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define pi 3.14
#define p 9.8

struct automovel {
    char modelo[20];
    int ano;
};

int main(int argc, char** argv[])
{
    /*
    short int idade = 18;
    float salario = 7500;
    double qtd_atomos = 12345;
    char genero = 'f';
    float altura = 1.63;

    const float g = 9.80;


    printf("\n idade: %d", idade);
    printf("\n salario: %f", salario);
    printf("\n quantidade de atomos: %f", qtd_atomos);
    printf("\n genero: %c", genero);
    printf("\n altura: %.3f", altura);

    printf("\n pi = %f", pi);
    printf("\n g = %f", g);
    float soma = pi + g;
    printf("\n Soma de Pi e G %f", soma);
    printf("\n Local %x", &soma); //referencia de memoria
    //printf("\n\n\n\n\n\n");    

    
    //float valor1 = 0, valor2 = 0;

    //printf("\n Digite o primeiro valor: ");
    //scanf_s("%f", &valor1);
    //printf("\n Digite o valor 2: ");
    //scanf_s("%f", &valor2);

    //printf("\n\n Variavel 1: %.2f", valor1);
    //printf("\n Variavel 2: %.2f", valor2);

    printf("\n\n\n\n\n\n");


    //int idadee[3];
    //float altura[3] = { 1, 2, 3};

    //printf("Vetor altura[0] = %.1f", altura[0]);
    //printf("\n Vetor altura[1] = %.1f", altura[1]);
    //printf("\n Vetor altura[2] = %.1f", altura[2]);

    */
    /*
    char nome[16] = { 'J', 'O', 'A', 'O' };
    char sobrenome[31] = "Alberto";
    char pula[101] = { "Disciplina" };

    printf(nome);
    printf("\n", sobrenome);
    printf("\n", pula);

    char bola[16];

    printf("\n Digite seu nome: ");
    scanf_s("%s", bola);
    printf("\n Nome digitado: %s", bola);
    */
    //printf("\n\n\n");
/*
    char frase[101];
    printf("\n Digite uma frase: ");

    //fgtes(destino, tamanho, fluxo);

    fflush(stdin);
    fgets(frase, 101, stdin);
    printf("\n Frase digitada: %s", frase);



    float notas[3][2];

    //aluno1
    notas[0][0] = 10;
    notas[0][1] = 8.5;

    //aluno2
    notas[1][0] = 5.5;
    notas[1][1] = 2.7;

    //aluno3
    notas[2][0] = 4;
    notas[2][1] = 10;


    printf("\n\n Aluno A: %.1f e %.1f", notas[0][0], notas[0][1]);
    printf("\n Aluno B: %.1f e %.1f", notas[1][0], notas[1][1]);
    printf("\n Aluno C: %.1f e %.1f", notas[2][0], notas[2][1]);

    //int cha = 12.50;

    //printf("\n %d", cha);
    printf("\n");
    //int para = 0;

    //scanf_s("%f", &para);

    //printf("\n %d", para);
    //printf("\n %f", para);
        
    printf("\n Tamanho define %f", sizeof(p));



    printf("\n\n\n");


    int idade1 = 0;
    int idade2 = 0;

    int resultado = 0;

    printf("\n Digite a primeira Idade: ");
    scanf_s("%d",&idade1);
    printf("\n Ditite a segunda Idade: ");
    scanf_s("%d", &idade2);

    resultado = idade1 + idade2;

    printf("\n Resultado: %d", resultado);
    
    printf("\n\n\n");

    char nome[30];
    int i = 0;
    printf("\n Digite o nome da Pessoa: ");
    fflush(stdin);
    fgets(nome, 30, stdin);


    printf(nome,"\n");


    //strlen, nome[i], 

    for (i; i < strlen(nome); i++) {
        //printf("%c", nome[i]);        
        nome[i] = toupper(nome[i]);
        printf("%c", nome[i]);
        
    }
    printf("\nTamanho %d", sizeof(nome));
    
    printf("\n",nome);
    */

    /*
    int matriz[2][3];
    int coluna = 0;
    int linha = 0;

    for (linha = 0; linha <= 2; linha++){
        for (coluna = 0; coluna <= 3; coluna++) {
            printf("\n Digite valores de linha %d e coluna %d: -> :", linha+1, coluna+1);
            scanf_s("%d", &matriz[linha][coluna]);
        }
    }

    for (linha = 0; linha <= 2; linha++) {
        for (coluna = 0; coluna <= 3; coluna++)
        {
            printf("\n %d", matriz[linha][coluna]);
        }

    }
    */


//int resultado = 43 % 3;

//printf("Operacao modulo 43%3 = %d", resultado);

/*int n1 = 0;
int n2 = 0;

printf("Digite o primeiro numero: ");
scanf_s("%d", &n1);
printf("Digite o segundo numero: ");
scanf_s("%d", &n2);

printf("\n N1 e N2 sao iguais? %d", n1 == n2);
printf("\n N1 e maior que N2? %d", n1>n2);
printf("\n N1 e menor que N2? %d", n1<n2);
*/

/*int a = 5, b = 10, c = 5;

printf("\n (a==b)&&(a==c) = %d", ((a==b)&&(a==c)));
printf("\n (a==b)||(a==c) = %d", ((a == b) || (a == c)));
printf("\n !(a==b) || (a==c) = %d", !((a==b)||(a==c)));
*/




/*

int ano_2014[3] = { 0 };

float media_2014 = 0;
float media_2015 = 0;
float media_2016 = 0;


ano_2014[0] = 16319979;
ano_2014[1] = 4133366;
ano_2014[2] = 658713;

//scanf("%d", &ano_2014[0]);


media_2014 = (ano_2014[0] + ano_2014[1] + ano_2014[2]) / 3;

printf("\n 2014 obteve a maior media? %d", ((media_2014 > media_2015) && (media_2014 > media_2016)));
*/

//CALCULO DESCONTO

/*
int pessoas = 0;
float valor = 0, comdesconto = 0, apagar = 0, desconto = 0;

printf("Qual o numero de pessoas? \n");
scanf_s("%d", &pessoas);
printf("\n Qual valor da conta? \n");
scanf_s("%f", &valor);
printf("\n Qual desconto oferecido: \n");
scanf_s("%f", &desconto);
comdesconto = valor;

//printf("\n Valor %x \n pessoas %d \n desconto %f", &valor, pessoas, desconto);

apagar = ((comdesconto * (desconto / 100)) + valor) / pessoas;

//printf("%x", &comdesconto);

printf("\n O valor divido para pagamento e: %.2f R$", apagar);
printf("\n Have good day!");
*/
/*
int a = 2;
int b = 3;
int c = 5, resultado = 0;


resultado = a + b * (c - b) / a;

printf("\n %d", resultado);
*/


//struct automovel auto1;

 //printf("%d", malloc(sizeof(auto1)));

//ESTRUTURA DE REPETIÇÃO

//TABELA IR E INSS
//double %lf

float salario, resultado, inss, ir = 0;
float inssAliquotaUm = 7.5,
inssAliquotaDois = 9,
inssAliquotaTres = 11,
inssAliquotaQuatro = 14;

printf("Qual salario? \n");
scanf_s("%f", &salario);




if (salario < 1045.00) {

    //resultado = (salario - (deducao * inssAliquotaUm));
    inss = salario * (inssAliquotaUm / 100);

}
else if (salario >= 1045.00 || salario <= 2089.00) {
    //resultado = (salario - (deducao * inssAliquotaDois));
    inss = salario * (inssAliquotaDois / 100);

}else if(salario >= 2089.61 || salario <= 3134.40) {
    //resultado = (salario - (deducao * inssAliquotaTres)); 
    inss = salario * (inssAliquotaTres / 100);

}
else if (salario >= 3050.53 || salario < 6101.06) {
    //resultado = (salario - (deducao * inssAliquotaQuatro));
    inss = salario * (inssAliquotaQuatro / 100);

}else if(salario > 6101.06){

     
    inss = 6101.06 * (inssAliquotaQuatro / 100);
}

//liquido = 6101.06;
//resultado = (salario - (liquido * (inssAliquotaQuatro / 100)));
printf("%f", inss);
resultado = (salario - inss);

printf("\n Salario liquido, %.2f", resultado);










    printf("\n\n\n");

    system("pause");
    return 0;
























    /*
     


     int valor;
    char valida;
    int validaCount = 0;

    printf("Digite um numero: ");
    scanf_s("%d", &valor);

    //printf("\n o número digitado foi %d, está certo? [S] ou [N]", valor);
    //scanf("%c",&valida);

    while (validaCount <= 3) {

        printf("\n\n o numero digitado foi %d, esta certo? [S] ou [N]", valor);
        scanf_s(" %c", &valida);
        //if (fgets(valida, sizeof valida, stdin) == NULL) {
            //printf("Input error.\n");
            //exit(1);
        //}

        if (valida == 's' || valida == 'S' || valida == 'n' || valida == 'N') {

            if (valida == 's' || valida == 'S') {
                printf("\n Numero digitado e: %d", valor);
                break;
            }
            else {
                printf("Digite um numero: ");
                scanf_s("%d", &valor);

                validaCount++;
                continue;
            }

        }
        else {
            printf("\n letra digitada nao aceita, tente novamente!");
            validaCount++;
            continue;
        }
    }

    if (validaCount == 3) {
        printf("Limite de tentativas atingido!");
    }




























     #include <stdio.h>

    int main(void)
    {
    char line[256];
    char ch;

    if (fgets(line, sizeof line, stdin) == NULL) {
        printf("Input error.\n");
        exit(1);
    }

    ch = line[0];
    printf("Character read: %c\n", ch);
    return 0;
}
















    char nome[30];
    char endereco[30];
    int idade;

    printf("Nome \n");
    scanf_s("%s", &nome);

    printf("Endereco \n");
    scanf_s("%s", &endereco);

    printf("Idade \n");
    scanf_s("%d", &idade);

    printf("\n Nome: %s", nome);
    printf("\n endereco: %s", endereco);
    printf("\n Idade: %d", idade); 
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    
    * 
    * 
    * 
    * 
    * 
    float nota1, nota2, media;

    printf("Insira nota 1: \n");
    scanf_s("%f", &nota1);

    printf("Insira nota 2: \n");
    scanf_s("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("%f.0", media);

    return 0;
    */
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
