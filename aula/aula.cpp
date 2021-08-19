// aula.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <stdio.h>
#define pi 3.14 

int main(int argc, char** argv[])
{
    
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
    printf("\n\n\n\n\n\n");    

    
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
    printf("\n\n\n");

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



    printf("\n\n\n");
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
