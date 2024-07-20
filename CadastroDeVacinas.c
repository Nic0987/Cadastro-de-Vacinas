/* DATA: 20/06/2022
 ACADÊMICO: NICOLAS RYAN 
 RA (REGISTRO ACADÊMICO): 22168634-5
 CURSO: ENGENHARIA DE SOFTWARE              
 DISCIPLINA: ALGORITMOS E LÓGICA DE PROGRAMAÇÃO II 
 MAPA - CADASTRO DE VACINAS.*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct usuario{
char nome [99];
char cpf [99];
char vacina [99];
char data [99];
char lote [99];

};

main() {
    setlocale(LC_ALL, "Portuguese");	
	struct usuario cadastro;
	struct usuario cadastramento [999];
	int op, consulta, x, cont;
	cont= 0;
	char cpf [30];
	
	do{	
	printf ("1- CADASTRAR VACINA:\n");	
	printf ("2- LISTAR APLICACÕES:\n");
	printf ("3- CONSULTAR CPF:\n");
	printf ("4- SAIR:\n\n");	
	printf ("ESCOLHA UMA OPÇÃO:\n");	
	scanf ("%d", &op);
	
	switch (op){
	case 1:
		  do {
		  
		  system ("cls");
		  fflush(stdin);
		  printf ("DIGITE O NOME:\n");
		  gets (cadastramento[cont].nome);
		 
		  
		  printf ("DIGITE O CPF(EX: 000.000.000-00):\n");
		  scanf ("%s", &cadastramento[cont].cpf);
		  fflush(stdin);
		  
		  
		  printf ("DIGITE A VACINA APLICADA:\n");
		  scanf ("%s", &cadastramento[cont].vacina);
		  fflush (stdin);
		  
		 
		  printf ("DIGITE A DATA DE APLICAÇÃO(EX: 00/00/0000):\n");
		  scanf ("%s", &cadastramento[cont].data);
		  fflush (stdin);
		  
		  printf ("DIGITE O NÚMERO DO LOTE:\n");
		  scanf ("%s", &cadastramento[cont].lote);
		 
		  printf ("CADASTRO FEITO COM SUCESSO...\n");
		  fflush (stdin);
		  
		  printf ("DIGITE 1 PARA FAZER MAIS CADASTROS OU 0 PARA SAIR\n");
		  scanf ("%d", &op);
		  fflush (stdin);
		  
		  cont++;
		  }while (op== 1);
		  cont++;
		  fflush (stdin);	

	   break;
	   
	case 2:
	   system ("cls");	
	   for (x=0;x < cont; x++){
	   	printf("CÓDIGO: %d\n",x);
	   	printf ("NOME: %s\n",cadastramento[x].nome);
		printf("VACINA: %s\n",cadastramento[x].vacina);
	   	printf("DATA: %s\n",cadastramento[x].data);
	   	printf("LOTE: %s\n",cadastramento[x].lote);	   	
	   	printf("\n");
	   	
	   };
	   x= 0;
	  
	   break;
	   
	case 3:
		system ("cls");	
		consulta= 0;
		x= 0;
		printf ("CONSULTE SEU CPF!\n");
		printf ("DIGITE O CPF PARA REALIZAR A CONSULTA:\n");
		scanf ("%s", &cpf);
		fflush(stdin);
	    while (consulta == 0 && x < cont) {
		    if (!strcmp (cadastramento [x].cpf, cpf)) {
		    	consulta= 1;
		    	
	   	 }
		  else{
		    x++;
		  }
	     }
		if (consulta == 1){
		    printf ("\nCPF ENCONTRADO\n");
		 	printf("CÓDIGO: %d\n",x);
	   	    printf ("NOME: %s\n",cadastramento[x].nome);
		    printf("VACINA: %s\n",cadastramento[x].vacina);
	        printf("DATA: %s\n",cadastramento[x].data);
	   	    printf("LOTE: %s\n",cadastramento[x].lote);	
		}
	    else {
	       printf ("\nCPF NÃO LOCALIZADO...\n");
	   	}
	   break;
	   
	case 4:
	    printf ("Obrigado Por Sua Visita!\n");
	    getch ();
	   break;
	   
	default:
	    printf ("Opção inválida!");
	    getch ();
	   break;
	   
	}	  
	 }while (op != 4);
}



