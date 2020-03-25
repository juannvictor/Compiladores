
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
		case '-': goto q3;
		case '*': goto q5;
		case '+': goto q1;
		case '/': goto q7;
		case '<': goto q9;
		case '>': goto q13;
		case '=': goto q17;
		case '!': goto q21;
		case ')': goto q24;
		case '(': goto q25;
		case ',': goto q26;
		case ';': goto q27;
		case '.': goto q28;
		case '0': case '1': case '3': case '4': case '5': case '2': case '6': case '7': case '8': case '9': goto q102;
		case '_': goto q95;
		case 'a': goto q88;
		case 'r': goto q81;
		case 't': goto q79;
		case 'f': goto q71;
		case 'e': goto q58;
		case 'i': goto q54;
		case 'b': goto q49;
		case 's': goto q42;
		case 'p': goto q34;
		
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

	q13: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case '=': goto q15;
		case ' ': goto q14;
		default: return 0;
	}

	q17: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case '=': goto q19;
		case ' ': goto q18;
		default: return 0;
	}

	q21: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case '=': goto q22;
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

/* nosso */

	q2: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	if (
			(string[*index] >= ' ' && 
			string[*index] <= ')') 
			||
			(string[*index] >= '+' &&
			string[*index] <= 254)
			){
				goto q2;
	}else{
		switch (string[*index]){
			case '*': goto q3;
			default: return 0;
		}
	}

q3: *index = *index + 1;
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
				goto q2;
	}else{
		switch (string[*index]){
			case '*': goto q3;
			case '/': goto q4;
			default: return 0;
		}
	}

	q4: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q45;
		default: return 0;
	}

	q8: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q28;
		default: return 0;
	}
	
	q7: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q27;
		default: return 0;
	}

	q6: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q30;
		default: return 0;
	}

	q9: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q26;
		case '>': goto q11;
		case '=': goto q14;
		default: return 0;
	}

	q11: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q32;
		default: return 0;
	}

	q14: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q35;
		default: return 0;
	}

	q10: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q31;
		case '=': goto q104;
		default: return 0;
	}

	q104: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q36;
		default: return 0;
	}

	q12: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q33;
		case '=': goto q13;
		default: return 0;
	}

	q13: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q34;
		default: return 0;
	}

	q21: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q37;
		default: return 0;
	}

	q20: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q38;
		default: return 0;
	}
	
	q17: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q41;
		default: return 0;
	}
	
	q16: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q42;
		default: return 0;
	}
	
	q19: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q39;
		default: return 0;
	}
	
	q18: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q40;
		default: return 0;
	}
	
	q98: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'o': goto q99;
		default: return 0;
	}
			
	q99: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q100;
		default: return 0;
	}
		
	q91: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'h': goto q92;
		default: return 0;
	}
		
	q92: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'i': goto q83;
		default: return 0;
	}
		
	q83: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'l': goto q84;
		default: return 0;
	}
			
	q84: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'e': goto q85;
		default: return 0;
	}
			
	q85: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q86;
		default: return 0;
	}
			
	q57: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'o': goto q58;
		default: return 0;
	}
			
	q58: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'o': goto q59;
		default: return 0;
	}
			
	q59: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'l': goto q60;
		default: return 0;
	}
			
	q60: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q61;
		default: return 0;
	}
		
	q46: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'a': goto q47;
		default: return 0;
	}
			
	q47: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'l': goto q48;
		default: return 0;
	}
			
	q48: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 's': goto q49;
		default: return 0;
	}
			
	q49: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'e': goto q50;
		default: return 0;
	}
		
	q50: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q51;
		default: return 0;
	}
		
	q52: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'r': goto q53;
		default: return 0;
	}
		
	q53: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'u': goto q54;
		default: return 0;
	}
			
	q54: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'e': goto q55;
		default: return 0;
	}
			
	q55: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q56;
		default: return 0;
	}
			
	q80: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'o': goto q79;
		default: return 0;
	}
			
	q79: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'i': goto q78;
		default: return 0;
	}
			
	q78: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'd': goto q77;
		default: return 0;
	}
		
	q77: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q82;
		default: return 0;
	}
			
	q73: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'l': goto q74;
		default: return 0;
	}
			
	q74: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
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
		case ' ': goto q81;
		default: return 0;
	}
		
	q101: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'f': goto q63;
		case 'n': goto q24;
		default: return 0;
	}
			
	q63: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q64;
		default: return 0;
	}
			
	q24: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 't': goto q25;
		default: return 0;
	}
			
	q25: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q43;
		default: return 0;
	}
		
	q105: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'r': goto q65;
		default: return 0;
	}
			
	q65: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'o': goto q67;
		case 'i': goto q94;
		default: return 0;
	}
			
	q67: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'g': goto q68;
		default: return 0;
	}
			
	q68: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'r': goto q69;
		default: return 0;
	}
			
	q69: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'a': goto q70;
		default: return 0;
	}
			
	q70: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'm': goto q71;
		default: return 0;
	}
			
	q71: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q72;
		default: return 0;
	}
			
	q94: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'n': goto q95;
		default: return 0;
	}
			
	q95: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 't': goto q96;
		default: return 0;
	}
			
	q96: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case ' ': goto q97;
		default: return 0;
	}
		
	q22: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	switch (string[*index]){
		case 'a': case '1': case '3': case '4': case '5': case '2': case '6': case '7': case '8': case '9': goto q22;
		case ' ': goto q44;
		default: return 0;
	}
			
	q89: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
		if (
			(string[*index] >= 'a' && 
			string[*index] <= 'z') 
			||
			(string[*index] >= 'A' &&
			string[*index] <= 'Z')
			){
				goto q90;
		}else{
			return 0;
		}

	q90: *index = *index + 1;
	if (*index >= strlen(string)) return 0;
	if (
			(string[*index] >= 'a' && 
			string[*index] <= 'z') 
			||
			(string[*index] >= 'A' &&
			string[*index] <= 'Z')
			){
				goto q90;
		}else if (string[*index] == ' '){
			goto q93;
		}else{
			return 0;
		}
		
	/* ERRO LÉXICO */
	return 0;

	/* - */	
	q4: return 1;
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
	/* IF */
	q64: return 23;
	/* INT */
	q43: return 24;
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
}

int main(int argc, const char* argv[])
{
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
		"IF",
		"INT",
		"ELSE",
		"VOID",
		"TRUE",
		"FALSE",
		"BOOL",
		"WHILE",
		"DO"};

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