//NOM-015-SSA2-2010
//CRITERIOS DE SINDROME METABOLICO Pag_28-NOM 
//=====================================================
#include <stdio.h>
#include <string.h>
//#include <ctype.h>
//=====================================================
int Presion_arterial (int Sis_mmHg_f, int Dias_mmHg_f){
	if (Sis_mmHg_f >=130 && Dias_mmHg_f >=85){ 
		printf ("Suma 1 punto \n");
	return 1;}
}
//=====================================================
int Trigliceridos (int Tri_mgdl_f){
	if (Tri_mgdl_f >150) {printf ("Suma 1 punto \n"); 
	return 1;}
}
//=====================================================
int Colesterol_HDL (int Col_mgdl_f, char sexo_f[]){
	strupr(sexo_f);
	if (strcmp(sexo_f, "MASCULINO") == 0 && Col_mgdl_f < 40){
		printf ("Suma 1 punto \n");return 1;
		} else if (strcmp(sexo_f, "FEMENINO") == 0 && Col_mgdl_f < 50){
		printf ("Suma 1 punto \n"); return 1;
	} else return 0;
}
//=====================================================
int Circunferencia_Abdominal (int Cint_cm_f, char sexo_f[]) { 
	strupr(sexo_f);
	if (strcmp(sexo_f, "MASCULINO") == 0 && Cint_cm_f>90){
		printf ("Suma 1 punto \n"); return 1;
		} else if (strcmp(sexo_f, "FEMENINO") == 0 && Cint_cm_f>80){
		  printf ("Suma 1 punto \n"); return 1;
	} else return 0;
}
//=====================================================
int Glucosa_plasmatica_ayuno (int Gluc_mgdl_f) {
	if (Gluc_mgdl_f >110){
		printf ("Suma 1 punto \n");
		return 1;
		} else return 0;
}
//=====================================================
int main(){

	//Variables Funcion 
	int Sis_mmHg, Dias_mmHg, Tri_mgdl, Col_mgdl, Cint_cm, Gluc_mgdl, K;
	char sexo[9];
	
	printf ("Ingrese sexo del Px \n");
	scanf ("%[^\n]", &sexo);
	printf ("Ingrese cintura de paciente \n");
	scanf ("%d", &Cint_cm);
	Circunferencia_Abdominal (Cint_cm, sexo);
	K=Circunferencia_Abdominal;
	Glucosa_plasmatica_ayuno (Gluc_mgdl);
	printf ("%d \n", K);
return 0;
}
