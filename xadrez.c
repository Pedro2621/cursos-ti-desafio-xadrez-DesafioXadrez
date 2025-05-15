#incluir  <stdio.h>

int  principal ( void ){
// Desafio de Xadrez - Novato
// Este código inicial serve como base para o desenvolvimento do sistema de entrega das peças de xadrez.
// O objetivo é utilizar estruturas de alteração e funções para determinar os limites de movimento dentro do jogo.
int   principal () {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis ​​constantes para representar o número de casas que cada peça pode se mover.

    printf ( "Desafio Jogo de Xadrez\n" );

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular o movimento do Bispo em diagonal.

}
    int   eu   =   1 ; // Inicializando o contador.
    printf ( "MOVIMENTAÇÃO DO BISPO:\n" );
    enquanto ( i <= 5 ){
        printf ( "-> Cima, Direita!\n" ); //Enquanto o contador para menor ou igual a cinco será impresso na direção.
        i  ++ ; // Incrmento.
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de reprodução para simular o movimento da Torre para a direita.
    int   j   =   1 ; // Inicializando o contador.
    printf ( "\nMOVIMENTAÇÃO DA TORRE:\n" );
    fazer {
        printf ( "-> Direita!\n" );
        j  ++ ; //Incremento.
    } enquanto ( j <= 5 ); //O código só será executado se o contador for menor ou igual a cinco.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular o movimento da Rainha para a esquerda.
    printf ( "\nMOVIMENTAÇÃO DA RAINHA:\n" );
    for ( int   k   =   1 ; k <= 8 ; k  ++ ){ // Inicializando o contador (k), enquanto ele for menor ou igual a 8 o bloco abaixo será executado; ao final tem o incremento.
        printf ( "-> Esquerda!\n" );
    }
