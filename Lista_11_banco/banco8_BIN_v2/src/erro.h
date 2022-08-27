#ifndef __ERROR_CONTAS
#define __ERROR_CONTAS

#define ERRO_ABERTURA_ARQUIVO 1
#define ERRO_FORMATO_CONTA_INVALIDO 2
#define ERRO_CONTA_NAO_ENCONTRADA 3
#define ERRO_OPERACAO_INVALIDA 4
#define ERRO_VALOR_INVALIDO 5
#define ERRO_SALDO_INSUFICIENTE 6
#define ERRO_CONTA_JA_EXISTE 7
#define ERRO_INFORMACOES_INSUFICIENTES 8
#define ERRO_NOME_INVALIDO 9

extern int errornum;

void printError();
int handleError();

#endif