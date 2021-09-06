// EstudandoLivro.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


#define pi 3.14
#define p 9.8
/*
struct automovel {
    char modelo[20];
    int ano;
};
*/


int somar(){
    return 2 + 3.23;
}


int* retornarVetor() {
    static int v[10];
    int a;
    for (a = 0; a < 10; ++a) {
        //printf("A: %d, V: %d\n", a);
        v[a] = 2 * a;
        printf("A: %d\n", v[a]);
    }
    //printf("%d", v);
    return v;
}


int gerarSenha() {
    char frase[40];
    int i, cont = 0;

    printf("\n Digite uma frase para gerar sua senha: ");
    fflush(stdin);
    fgets(frase, 40, stdin);

    for (i = 0; i <= sizeof(frase); i++) {
        if (frase[i]=='a' || frase[i] == 'e') {
            cont++;
        }
    }

    srand(cont);
    return rand() % 90 * rand();
}


float qualPeso(float alt, float larg, float compr) {
    return (alt * larg * compr) * 25;
}

int* alocar(){
    return (int*)malloc(200);
}

int* gerarRandomico() {
    static int r[10];
    int a;
    for (a = 0; a < 10; a++) {
        r[a] = rand();
        printf("r[%d] = %d\n", a, r[a]);
    }
    return r;
}

int max_of_four(int a, int b, int c, int d) {
    if (a > b && a > c && a > d) {
        return a;
    }
    else if (b > a && b > c && b > d) {
        return b;
    }
    else if (c > a && c > b && c > d) {
        return c;
    }
    else {
        return d;
    }
}

void update(int* a, int* b) {
    // Complete this function
    int t1, t2;
    t1 = *a + *b;
    t2 = abs(*a - *b);
    *a = t1;
    *b = t2;
}


int main(int argc, char *argv[])
{
    std::cout << "Hello World!\n";

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
/*
    float salario, resultado, inss, ir, teto = 6101.06;
    float inssAliquotaUm = 7.5, inssAliquotaDois = 9, inssAliquotaTres = 11, inssAliquotaQuatro = 14;
    float irStepUm = 7.5, irStepDois = 15, irStepTres = 22.5, irStepQuatro = 27.5;
    char continua;

    



    while (true) {

        printf("\n Qual salario? \n");
        scanf_s("%f", &salario);

        if (salario < 1045.00) {

            //resultado = (salario - (deducao * inssAliquotaUm));
            inss = salario * (inssAliquotaUm / 100);

        }
        else if (salario >= 1045.00 && salario <= 2089.00) {
            //resultado = (salario - (deducao * inssAliquotaDois));
            inss = salario * (inssAliquotaDois / 100);

        }
        else if (salario >= 2089.61 && salario <= 3134.40) {
            //resultado = (salario - (deducao * inssAliquotaTres)); 
            inss = salario * (inssAliquotaTres / 100);

        }
        else if (salario >= 3050.53 && salario < 6101.06) {
            //resultado = (salario - (deducao * inssAliquotaQuatro));
            inss = salario * (inssAliquotaQuatro / 100);

        }
        else if (salario > 6101.06) {


            inss = teto * (inssAliquotaQuatro / 100);
        }

        if (salario < 1903.98) {

            ir = 0;
        }
        else if (salario >= 1903.99 && salario <= 2826.65) {

            ir = salario * (irStepUm / 100);
        }
        else if (salario >= 2826.66 && salario <= 3751.05) {
            ir = salario * (irStepDois / 100);
        }
        else if (salario >= 3751.06 && salario <= 4664.68) {
            ir = salario * (irStepTres / 100);
        }
        else if (salario > 4664.68) {
            ir = salario * (irStepQuatro / 100);
        }


        printf("\n Valor de INSS: R$ %.2f", inss);
        printf("\n Valor de IR: R$ %.2f", ir);
        resultado = (salario - inss) - ir;

        printf("\n Salario liquido, %.2f", resultado);

        printf("\n Quer continuar?");
        scanf_s("%c", &continua);

        if (continua == 'n') {
            break;
        }
    }

    */
/*
int segunda = 2, terca = 3, quarta = 4, quinta = 5, sexta = 6, sabado = 0, domingo = 1;
int escolha;

printf("\n Qual dia da semana?");
scanf_s("%d", &escolha);

switch (escolha)
{
    case 0:
        printf("\n Hoje sabado nao ha descontos");
        break;
    case 1:
        printf("\n Domingo, ganha-se um refrigerante!");
        break;
    case 2:
        printf("\n Segunda feira, hoje o desconto na compra de uma pizza, é de 30 por cento!! ");
        break;
    case 3:
        printf("\n Terca feira, desconto de 40 por cento no valor da pizza!!! ");
        break;
    case 4:
        printf("\n Quarta feira, hoje na compra de uma pizza, ganhe outra!");
        break;
    case 5:
        printf("\n Quinta feira, desconto de 20 por cento na pizza!");
        break;
    case 6:
        printf("\n Sexta feira, desconto de 10 por cento na pizza!");
        break;
default:
    printf("\n Valor informado, nao conrresponde a um dia da semana!");
    break;
}


*/

//Problema de Collatz
/*
int num, i;


printf("Digite um numero para o Problema de Collatz \n");
scanf_s("%d", &num);
i = 0;

while (num > 1) {
    if (num % 2 == 0) {
        num /= 2;
    }
    else {
        num = num*3 + 1;
    }
    i++;
    printf("\n resultado do problema: %d, numero de voltas: %d", num, i);
    
}

//printf("\n resultado do problema: %d, numero de voltas: %d", num, i);
*/
//Exemplo Soffner
/*
float soma = 0, valor;
int opcao;

do {
    printf("\n \n\nDigite uma Operacao\n");
    printf("\n 1. Deposito");
    printf("\n 2. Saque");
    printf("\n 3. Saldo");
    printf("\n 4. Sair");

    printf("\n Opcao? \n");
    scanf_s("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\n Valor do deposito? \n");
            scanf_s("%f", &valor);
            soma += valor;
            break;

        case 2:
            printf("\n Valor do saque? \n");
            scanf_s("%f", &valor);
            soma -= valor;
            break;

        case 3:
            printf("\n Saldo atual R$ %.2f", soma);
            break;

        default:
            if (opcao != 4) {
                printf("\n Opcao Invalida! \n");
            }


    }
} while (opcao != 4);

printf("\n\n Fim das operacoes. ");
*/
/*
int nota, cont = 0, soma = 0;
char letra;
float media;

do {
    printf("\n\n Digite uma nota para avaliacao: ");
    scanf_s("%d", &nota);
    fflush(stdin);
    cont++;
    soma += nota;
    printf("\n\n Digite [n] para para sair.\t");
    //scanf_s("%c", &letra);

} while (letra = getchar() != 'n');
printf("\n Quantidade de Avaliacao: %d, soma das notas: %d", cont, soma);
media = soma / cont;
printf("\n A media das notas e: %.0f", media);
*/
/*
int i;
 do
 {
     printf("\n\n INFORMACAO NUTRICIONAL DO SORVETE \n\n");
          
     printf("\n\n Digite um numero que corresponde ao saber desejado\n\n");
     printf("\t(1)...flocos\n");
     printf("\t(2)...morango\n");
     printf("\t(3)...leite condensado\n\n");
     scanf_s("%d", &i);

 } while ((i < 1) || (i > 3));

         switch (i) {
         case 1:
             printf("\t\t Voce escolheu flocos.\n");
             break;

         case 2:
             printf("\t\t Voce escolheu morango.\n");
             break;

         case 3:
             printf("\t\t Voce escolheu leite condensado.\n");
             break;
         }
*/

/*
int x, y;

for (x = 10, y = 0; x >= 0, y <= 10; x--, y++) {
    printf("\n X: %d / Y: %d", x, y);
}
*/

/*
int contador;

printf("Digite um numero para contagem regressiva");
scanf_s("%d", &contador);

for (contador; contador >= 1; contador--) {
    printf("\n Tempo em: %d", contador);
}
*/
/*
int w;

for (w = 1; w <= 15; w++) {
    if (w == 8) {
        break;
    }

    printf("\n contagem em : %d", w);
}
*/
/*
int num[5];
printf("Entre com um numero \n");
scanf_s("%d", &num[0]);

printf("O valor digitado foi: %d", num[0]*2);
*/
/*
int numero, i, posicao = 0, vetor[10];

printf("Entre com o numero de ate 3 casas diferente de zero, a ser procurado em um vetor");
scanf_s("%d", &numero);

for (i = 0; i <= 10;i++) {
    printf("\n Entre com o numero para posicao %01d: ", i+1);
    scanf_s("%d", &vetor[i]);
}
while (vetor[posicao] != numero) {
    posicao++;      
}
for (i = 0; i < 10; i++) {
    printf("%01d ", vetor[i]);
}
printf("\n");
for (i = 0; i < posicao; i++) {
    printf("   ");
}
printf("*");
*/

/*
int i;
for (i = 1; i <= 100; i++) {
    if (i==30) {
        printf("\n Fim Laco!");
        break;
        
    }
    else {
        if (i%2==1) {
            continue;
        }
        else {
            printf("\n Numero: %2d", i);            
        }
        
    }

}
*/

/*
int  linha, coluna;
int matriz[3][3];

for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++)
    {
        printf("\n Entre com valor da linha %d e coluna %d: ", linha, coluna);
        scanf_s("%d", &matriz[linha][coluna]);
    }
}

for (linha = 0; linha <= 2; linha++)
{
    for (coluna = 0; coluna <= 2; coluna++) {
        printf("\n Matriz[%d][%d]: %d", linha, coluna, matriz[linha][coluna]);
    }
}

*/
/*
int Matriz[31][31], i, j, ordem = 0, quadrado_da_ordem = 0, linha = 0, coluna = 0, soma = 0;

printf("Qual a ordem do quadrado magico ? (deve ser um numero impar positivo) \n");
scanf_s("%d", &ordem);


//encerra o programa se a ordem for par (pois so funciona para numeros impares)
if (ordem % 2 == 0 || ordem <= 0)
{

    printf("Tem que ser numero impar positivo \n");
    return(0);
}
quadrado_da_ordem = ordem * ordem;


printf("\n Quantidade de numero no Quadrado Magico : %d", quadrado_da_ordem);


//calculo da posicao inicial (onde vai o numero “1”).

// Quando a ordem e diferente de 1, sera sempre na penultima coluna e na ultima linha.
if (ordem == 1)
{
    linha = 0;
    coluna = 0;
}
else
{
    linha = ((ordem + 1) / 2) - 1;
    coluna = ordem - 1;
}
//Loop de loop para zerar a Matriz 
for (i = 0; i < ordem; i++)
{
    for (j = 0; j < ordem; j++)
    {
        Matriz[i][j] = 0;
    }



    //Preenchendo a Matriz com os valores do Quadrado Magico
    for (i = 1; i <= quadrado_da_ordem; i++)
    {
        Matriz[linha][coluna] = i;

        //se estamos na ultima coluna, voltamos a coluna “0”, do contrario, 
        //vamos uma coluna a frente.


        if (coluna == ordem - 1) { coluna = 0; }
        else { coluna++; }



        // se estamos na primeira linha, vamos a ultima coluna (ordem-1), 
        //do contrario, vamos uma linha atras


        if (linha == 0) { 
            linha = ordem - 1; 
        }
        else
        {
            linha--;
        }


        //Se a proxima posição ja esta¡ ocupada (e diferente de “0”), devemos ocupar a posicao


        //do lado esquerdo da ultima posicao preenchida.


        //Caso contrario, devemos preencher a posição acima e a direita
       //da ultima posição preenchida.
        if (Matriz[linha][coluna] != 0)
        {

            if (coluna == 0) {
                coluna = ordem - 2;
            }
            else { coluna = coluna - 2; }



            if (linha == ordem - 1) { linha = 0; }
            else {
                linha++;
            }
        }
    }

    printf("\nO quadrado magico de %d x %d e: ", ordem, ordem);

    //Loop de loop para imprimir a Matriz 
    for (i = 0; i < ordem; i++)
    {
        for (j = 0; j < ordem; j++)
        {
            printf("%d", Matriz[i][j]);
        }
        printf("\n");
    }


    //Loop para calcular a soma de linhas, colunas e da diagonal principal do Quadrado magico.
    for (i = 0; i < ordem; i++)
    {
        soma += Matriz[i][i];
    }


    printf("A soma de cada linha, de cada coluna ou da diagonal principal e: %d", soma);
    
}

*/
/*
char nome[30];
int contador = 0;


printf("Digite o seu nome: ");
//scanf_s("%c", &nome);
fflush(stdin);
fgets(nome, 30, stdin);

for (int i = 0; i <= strlen(nome); i++) {
    nome[i] = toupper(nome[i]);
    contador++;
}

printf("Numero de Caracteres: %d, nome: %s", contador, nome);
*/
/*
int d, i = 9, maxi, maxp;

maxi = i - 1;
maxp = maxi * maxi;

while (i >= 0) {
    d = i;
    d = d*d;
    if (d >= 0 && d <= maxp) {
       
        printf("\n %d", d);
    }

    i -= 1;
}
*/
/*
bool bissexto = false;
int ano;

printf("Ano: ");
scanf_s("%d", &ano);

if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
    bissexto = true;
}
else {
    bissexto = false;
}

printf("\n Ano: %d, Bisexto: %d", ano, bissexto);
*/

//the command is scanf("%d %d", &n, &m)



//O Maior Valor 
/*
    int a, b, c, d;
    scanf_s("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
*/
/*
int a, b;
int *pa = &a, *pb = &b;
a = 4;
b = 5;
//scanf("%d %d", &a, &b);
update(pa, pb);
printf("%d\n%d", a, b);
*/
//abs retorna um número sempre positivo


//LIMPEZA DE SIMBOLOS

/*
char cpf1[15];
char cpf2[12];
int i = 0, n = 0;

printf("\n Digite seu CPF na forma: NNN.NNN.NNN-NN!\n");
//fflush(stdin);
fgets(cpf1, 15, stdin);

for (i = 0; i <= sizeof(cpf1); i++) {

    if (cpf1[i] == '.' || cpf1[i]=='-') {
        continue;
    }
    else {
        cpf2[n] = cpf1[i];
        printf("\n %d", n);
        n++;        
    }
    
}
printf("\n\n CPF formatado: %s, N: %d", cpf2, sizeof(cpf2));
*/

/*

int *v;
int i;

v = gerarRandomico();
for (i = 0; i < 10; i++) {
    printf("\nv[%d] = %d", i, *(v+i));
}
*/
/*

int *memoria;

memoria = alocar();

if (memoria != NULL) {
    printf("Endereco de memoria alocado: %x", memoria);
}
else {
    printf("Memoria não alocada");
}
*/

//PESO DA COLUNA P = VR (R = 25 Kn)
/*
float peso;
float altura, largura, comprimento;


printf("\n Digite a Altura, a Largura e o Comprimento! \n");
scanf_s("%f %f %f", &altura,  &largura, &comprimento);

peso = qualPeso(altura, largura, comprimento);



//printf("\n %f", peso);
if (peso <= 500) {
    printf("\n Guindaste: G1");
}
else if (peso > 1500) {
    printf("\n Guindaste: G3");
}
else {
    printf("\n Guindaste: G2");
}

*/

//Senha
/*
int senha;

senha = gerarSenha();
printf("\n Sua senha: %d", senha);
*/
/*
int resultado = 0;
resultado = somar();
printf("O resultado da funcao e = % d", resultado);
*/


/*

int* po;
po = retornarVetor();
printf("Valor = %d", *(po + 2));

//Retorna a referencia do arrai na posição v[2]
*/









 printf("\n\n\n");

 system("pause");
 return 0;
 }


    





