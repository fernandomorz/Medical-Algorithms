//Variables Funcion CRITERIOS DE SINDROME METABOLICO 
#include <stdio.h>
#include <string.h>
//#include <ctype.h>
//=====================================================
int Presion_arterial (int Sis_mmHg_f, int Dias_mmHg_f){
int i=0;
	if (Sis_mmHg_f >=130 && Dias_mmHg_f >=85){i=1;}
return i;
}
//=====================================================
int Trigliceridos (int Tri_mgdl_f){	
	int i=0;
	if (Tri_mgdl_f >150) {i=1;} 
return i;
}
//=====================================================
int Colesterol_HDL (int Col_mgdl_f, char sexo_f[]){
	int i=0;
	strupr(sexo_f);
	if (strcmp(sexo_f, "MASCULINO") == 0 && Col_mgdl_f < 40){i=1;}
		 else if (strcmp(sexo_f, "FEMENINO") == 0 && Col_mgdl_f < 50){i=1;}
return i;
}
//=====================================================
int Glucosa_plasmatica_ayuno (int Gluc_mgdl_f) {
	int i=0;
	if (Gluc_mgdl_f >110){ i=1;}
}
//=====================================================
int Circunferencia_Abdominal (int Cint_cm_f, char sexo_f[]) { 
	int i=0;
	strupr(sexo_f);
	//puts(sexo_f);
	if ((strcmp( sexo_f, "MASCULINO") == 0 )&& Cint_cm_f>90){i= 1;} 
		else if (strcmp(sexo_f, "FEMENINO") == 0 && Cint_cm_f>80){i=1;} 
		return i;
}
//=====================================================
int main(){
	//Variables Funcion 
	int Sis_mmHg, Dias_mmHg, Tri_mgdl, Col_mgdl, Cint_cm, Gluc_mgdl, contador=0;
	char sexo[10];

	printf ("Ingrese sexo del paciente \n");
	gets (sexo); //puts (sexo);

	printf ("Ingrese la medida de Circunferencia Abdominal del paciente \n");
	scanf ("%d", &Cint_cm);

	printf ("Ingrese Presion Arterial Sistolica del paciente \n");
	scanf ("%d", &Sis_mmHg);
	printf ("Ingrese Presion Arterial Diastolica del paciente \n");
	scanf ("%d", &Dias_mmHg);
	
	printf ("Ingrese el nivel de Trigliceridos del paciente \n");
	scanf ("%d", &Tri_mgdl);

	printf ("Ingrese el nivel de Colesterol del paciente \n");
	scanf ("%d", &Col_mgdl);

	printf ("Ingrese la glucosa del paciente \n");
	scanf ("%d", &Gluc_mgdl);
	
	contador=Circunferencia_Abdominal (Cint_cm, sexo);
	contador=contador + Glucosa_plasmatica_ayuno (Gluc_mgdl);
	contador=contador + Presion_arterial (Sis_mmHg, Dias_mmHg);
	contador=contador + Trigliceridos (Tri_mgdl);
	contador=contador + Colesterol_HDL (Col_mgdl, sexo);

	printf ("%d \n", contador);
return 0;
}

