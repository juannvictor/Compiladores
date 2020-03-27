
/* 
 * ETAPA 2 PROJETO DE COMPILADORES
 */
/* nosso */

#include <stdio.h>
#include <string.h>

int scanner(char string[], int *index){ 

	q0: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case '-': goto q3;//ok
		case '*': goto q5;//ok
		case '+': goto q1;//ok
		case '/': goto q7;//precisa fazer caminho do comentário
		case '<': goto q9;//ok
		case '>': goto q13;//ok
		case '=': goto q17;//ok
		case '!': goto q21;//ok
		case ')': goto q24;//ok
		case '(': goto q25;//ok
		case ',': goto q26;//ok
		case ';': goto q27;//ok
		case '.': goto q28;//ok
		case '0': case '1': case '3': case '4': case '5': case '2': case '6': case '7': case '8': case '9': goto q102;//ok
		case '_': goto q95;//precisa fazer caminho da variavel
		case 'a': goto q88;//ok
		case 'r': goto q81;//ok
		case 't': goto q79;//ok
		case 'f': goto q71;//ok
		case 'e': goto q58;//ok
		case 'i': goto q54;//ok
		case 'b': goto q49;//ok
		case 's': goto q42;//ok
		case 'p': goto q34;//ok
		
		default: return 0;
	}

	q3: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q4;
		default: return 0;
	}

	q5: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q6;
		default: return 0;
	}

	q1: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q2;
		default: return 0;
	}

	q7: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case '*': goto q104;
		case ' ': goto q8;
		default: return 0;
	}

	q9: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case '=': goto q12;
		case ' ': goto q10;
		default: return 0;
	}
    
    q12: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q11;
        default: return 0;
    }

	q13: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case '=': goto q15;
		case ' ': goto q14;
		default: return 0;
	}
    
    q15: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q16;
        default: return 0;
    }
    
	q17: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case '=': goto q19;
		case ' ': goto q18;
		default: return 0;
	}
    
    q19: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q20;
        default: return 0;
    }
    

	q21: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case '=': goto q22;
		default: return 0;
	}
    
    q22: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q23;
        default: return 0;
    }
    

	q24: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q29;
		default: return 0;
	}

	q25: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q30;
		default: return 0;
	}

	q26: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q31;
		default: return 0;
	}

	q27: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q32;
		default: return 0;
	}

	q28: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q33;
		default: return 0;
	}
    
    q102: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case '0': case '1': case '3': case '4': case '5': case '2': case '6': case '7': case '8': case '9': goto q102;
        case ' ': goto q103;
        default: return 0;
    }
    
    q58: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'n': goto q59;
        case 's': goto q64;
        default: return 0;
    }
    
    q59: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 't': goto q60;
        default: return 0;
    }
    
    q60: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'a': goto q61;
        default: return 0;
    }
    
    q61: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'o': goto q62;
        default: return 0;
    }
    
    q62: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q63;
        default: return 0;
    }
    
    q64: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'c': goto q65;
        default: return 0;
    }
    
    q65: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'r': goto q66;
        default: return 0;
    }
    
    q66: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'e': goto q67;
        default: return 0;
    }
    
    q67: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'v': goto q68;
        default: return 0;
    }
    
    q68: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'a': goto q69;
        default: return 0;
    }
    
    q69: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q70;
        default: return 0;
    }
    
    q54: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'n': goto q55;
        default: return 0;
    }
    
    q55: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 't': goto q56;
        default: return 0;
    }
    
    q56: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q57;
        default: return 0;
    }
    
    q49: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'o': goto q50;
        default: return 0;
    }
    
    q50: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'o': goto q51;
        default: return 0;
    }
    
    q51: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'l': goto q52;
        default: return 0;
    }
    
    q52: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q53;
        default: return 0;
    }
    
    q42: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'e': goto q43;
        default: return 0;
    }
    
    q43: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q44;
        case 'n': goto q45;
        default: return 0;
    }
    
    q45: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'a': goto q46;
        default: return 0;
    }
    
    q46: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'o': goto q47;
        default: return 0;
    }
    
    q47: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q48;
        default: return 0;
    }
    
    q34: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'r': goto q35;
        default: return 0;
    }
    
    q35: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'o': goto q36;
        default: return 0;
    }
    
    q36: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'c': goto q37;
        case 'g': goto q38;
        default: return 0;
    }
    
    q37: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q40;
        default: return 0;
    }
    
    q38: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'r': goto q39;
        default: return 0;
    }
    
    q39: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q41;
        default: return 0;
    }
    
    q88: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 't': goto q89;
        default: return 0;
    }
    
    q89: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'e': goto q90;
        default: return 0;
    }
    
    q90: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'q': goto q91;
        default: return 0;
    }
    
    q91: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'u': goto q92;
        default: return 0;
    }
    
    q92: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'e': goto q93;
        default: return 0;
    }
    
    q93: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q94;
        default: return 0;
    }
    
    q81: *index = *index + 1;
       if (*index >= strlen(string)) return 0;
       switch (string[*index]){
           case 'e': goto q82;
           default: return 0;
    }
    
    q82: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'p': goto q83;
        default: return 0;
    }
    
    q83: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'i': goto q84;
        default: return 0;
    }
    
    q84: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 't': goto q85;
        default: return 0;
    }
    
    q85: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'a': goto q86;
        default: return 0;
    }
    
    q86: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q87;
        default: return 0;
    }
    
    q79: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q80;
        default: return 0;
    }
    
    q71: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q78;
        case 'i': goto q72;
        default: return 0;
    }
    
    q72: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'm': goto q73;
        default: return 0;
    }
    
    q73: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case ' ': goto q74;
        case 's': goto q75;
        default: return 0;
    }
    
    q75: *index = *index + 1;
    if (*index >= strlen(string)) return 0;
    switch (string[*index]){
        case 'e': goto q76;
        default: return 0;
    }
    
    q76: *index = *index + 1;
       if (*index >= strlen(string)) return 0;
       switch (string[*index]){
           case ' ': goto q77;
           default: return 0;
       }
    
    // --------------------------------- PARA FAZER: COMENTARIOS E VARIAVEIS ------------------------------
    
    /* COMENTÁRIOS
     // SUGESTAO DE CODIGO ANTIGO:
     
     q: *index = *index + 1;
     if (*index >= strlen(string)) return 0;
     if (
             (string[*index] >= ' ' &&
             string[*index] <= ')')
             ||
             (string[*index] >= '+' &&
             string[*index] <= '.')
             ||
             (string[*index] >= '0' &&
             string[*index] <= 254)
             ){
                 goto q;
     }else{
         switch (string[*index]){
             case '*': goto q;
             case '/': goto q;
             default: return 0;
         }
     }
     
     q: *index = *index + 1;
     if (*index >= strlen(string)) return 0;
         if (
             (string[*index] >= 'a' &&
             string[*index] <= 'z')
             ||
             (string[*index] >= 'A' &&
             string[*index] <= 'Z')
             ){
                 goto q;
         }else{
             return 0;
         }

     q: *index = *index + 1;
     if (*index >= strlen(string)) return 0;
     if (
             (string[*index] >= 'a' &&
             string[*index] <= 'z')
             ||
             (string[*index] >= 'A' &&
             string[*index] <= 'Z')
             ){
                 goto q;
         }else if (string[*index] == ' '){
             goto q;
         }else{
             return 0;
         }

    */
    
    


/* nosso */

	
	/* ERRO LÉXICO */
	return 0;
    
    /* --- NOSSO ERRO LÉXICO --------------------------------------------------------------------------------------------------- */

	/* operador - */
	q4: return 1;
    /* operador * */
    q6: return 2;
    /* operador + */
    q2: return 3;
    /* operador / */
    q8: return 4;
    
    /* COMENTÁRIO */
    q108: return 5;
    
    /* operador < */
    q10: return 6;
    /* operador <= */
    q11: return 7;
    /* operador > */
    q14: return 8;
    /* opertador >= */
    q16: return 9;
    /* operador = */
    q18: return 10;
    /* operador == */
    q20: return 11;
    /* operador != */
    q23: return 12;
    /* delimitador )*/
    q29: return 13;
    /* delimitador (*/
    q30: return 14;
    /* delimitador ,*/
    q31: return 15;
    /* delimitador ;*/
    q32: return 16;
    /* delimitador .*/
    q33: return 17;
    
    /* [0-9] */
    q103: return 18;
    
    /* PROC */
    q40: return 19;
    /* PROGR */
    q41: return 20;
    /* SE */
    q44: return 21;
    /* SENAO */
    q48: return 22;
    /* BOOL */
    q53: return 23;
    /* INT */
    q57: return 24;
    /* ENTAO */
    q63: return 25;
    /* ESCREVA */
    q70: return 26;
    /* FIM */
    q74: return 27;
    /* FIMSE */
    q77: return 28;
    /* F */
    q78: return 29;
    /* T */
    q80: return 30;
    /* REPITA */
    q87: return 31;
    /* ATEQUE */
    q94: return 32;
    
    /* variavel */
    q98: return 33;
    /* variavel */
    q101: return 34;
    
    /* --- NOSSO --------------------------------------------------------------------------------------------------- */
    
    // LEMBRAR DE DELETAR ESSE AQUI EMBAIXO
     /* - */
     q27: return 2;
     /* / */
     q29: return 3;
     /* * */
     q30: return 4;
     /* < */
     q26: return 5;
     /* <> */
     q32: return 6;
     /* <= */
     q35: return 7;
     /* > */
     q31: return 8;
     /* >= */
     q36: return 9;
     /* = */
     q33: return 10;
     /* == */
     q34: return 11;

     /* ( */
     q37: return 12;
     /* ) */
     q38: return 13;
     /* , */
     q41: return 14;
     /* ; */
     q42: return 15;
     /* { */
     q39: return 16;
     /* } */
     q40: return 17;

     /* COMENTARIO */
     q45: return 18;
     /* IDENTIFICADOR */
     q93: return 19;
     /* NUM */
     q44: return 20;
     /* PROGRAM */
     q72: return 21;
     /* PRINT */
     q97: return 22;
     /* ELSE */
     q81: return 25;
     /* VOID */
     q82: return 26;
     /* TRUE */
     q56: return 27;
     /* FALSE */
     q51: return 28;
     /* BOOL */
     q61: return 29;
     /* WHILE */
     q86: return 30;
     /* DO */
     q100: return 31;
     /* [0-9] */
     q103: return 32;
     /* proc */
     q40: return 33;
     /* progr */
     q41: return 34;
     /* se */
     q44: return 35;
     /* senao */
     q45: return 36;
     /* bool */
     q53: return 37;
     /* int */
     q57: return 38;
     /* entao */
     q63: return 39;
     /* escreva */
     q64: return 39;
    
    // ATÉ AQUI
	
}

int main(int argc, const char* argv[])
{// NOSSO TOKEN
	char tokens[][100] = {"ERRO LEXICO>",//0
		" - ",//1
		" * ",//2
		" + ",//3
		" / ",//4
		" COMENTÁRIO ",//5
		" < ",//6
		" <= ",//7
		" > ",//8
		" >= ",//9
		" = ",//10
		" == ",//11
		" != ",//12
		" ) ",//13
		" (  ",//14
		" , ",//15
		" ; ",//16
		" . ",//17
		"NUMERAL INTEIRO",//18
		"PROC",//19
		"PROGR",//20
		"SE",//21
		"SENAO",//22
		"BOOL",//23
		"INT",//24
		"ELSE",//25
		"ESCREVA",//26
		"FIM",//27
		"FIMSE",//28
		"F",//29
		"T",//30
		"REPITA",//31
		"VARIAVEL",//33
		"VARIAVEL"};//34
    
    /* TOKEN DO CÓDIGO ANTIGO
     
     char tokens[][100] = {"ERRO LEXICO>",
     " + ",
     " - ",
     " / ",
     " * ",
     " < ",
     " <> ",
     " <= ",
     " > ",
     " >= ",
     " = ",
     " == ",
     " ( ",
     " ) ",
     " ,  ",
     " ; ",
     " { ",
     " } ",
     "COMENTÁRIO",
     "IDENTIFICADOR",
     "NUM",
     "PROGRAM",
     "PRINT",
     "INT",
     "ELSE",
     "VOID",
     "TRUE",
     "FALSE",
     "BOOL",
     "WHILE",
     "DO",
     "0", "1", "2", "3", "4", "5", "6", "7", "8", "9",
     "proc",
     "progr",
     "se",
     "senao",
     "bool",
     "entao",
     "escreva"};
     
     */

    // ARGUMENTO DO CÓDIGO ANTIGO. MUDAR DEPOIS
	char argumento[] = "+ - / * <> >= < <= > == = ( ) , ; { } program print if int else void true false bool while do 3455 /* gfivghjwun 5483jgnp34g */ ";
	int index;
	int lastindex;
	int lexema;
	int i;
	FILE *file_pointer; 

	printf("%s\n", argumento);

	file_pointer = fopen("itens_lexicos_identificados.txt", "w");
	
	index = -1;
	lastindex = 0;
	lexema = scanner(argumento, &index);

	if (lexema == 18 || lexema == 19 || lexema == 20){
		fprintf(file_pointer, "<%s, ", tokens[lexema]);
		for (i = lastindex; i < index; i++){
			fprintf(file_pointer, "%c", argumento[i]);
		}
		fprintf(file_pointer, ">\n");
	}else{
		fprintf(file_pointer, "<%s>\n", tokens[lexema]);
	}
	lastindex = index + 1;

	while (index < strlen(argumento)-1){
		if(argumento[index+1] == ' '){
			index++;
		}
		lexema = scanner(argumento, &index);
		
		if (lexema == 18 || lexema == 19 || lexema == 20){
			fprintf(file_pointer, "\n<%s, ", tokens[lexema]);
			for (i = lastindex; i < index; i++){
				fprintf(file_pointer, "%c", argumento[i]);
			}
			fprintf(file_pointer, ">\n");
		}else{
			fprintf(file_pointer, "\n<%s>\n", tokens[lexema]);
		}
		lastindex = index + 1;
	}

	fclose(file_pointer);
	return 0;
}
