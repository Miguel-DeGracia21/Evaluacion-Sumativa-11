#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>


int main(){
	setlocale (LC_ALL,"");
	//Variables
	int dia, mes;
	char nombre[20];
	char genero[20];
	//Intrucciones 
	printf("\t\t\tBIENVENIDO AL HOROSCOPO\t\t\t\n\n");
	printf("Ingrese su nombre: ");
	scanf ("%s", &nombre);
	printf("Ingrese su genero: ");
	scanf("%s", &genero);
	printf("\n!LOS DATOS DEL DIA Y MES SE INTRODUCEN SOLO CON NUMEROS!\n\n");
	printf("Ingrese el dia de su nacimiento: ");
	scanf("%d", &dia);
	printf("Ingrese el mes de su nacimiento: ");
	scanf("%d", &mes);
	
	switch(mes){
		case 1:
			if(dia<21){
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: CAPRICORNIO.\n\n");
				printf("SU PREDICCION PARA CAPRICORNIO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nA�o pr�spero y feliz. Salud buena. Gran poder comunicador. Los amigos muy importantes, un gran apoyo. El amor estable. Trabajo m�s creativo. La familia rebelde, pero divertida. El dinero muy bien. Estudios muy bien.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nSer� un a�o con buena salud general y de bienestar para los nativos de este signo. Algunos peque�os problemas menores podr�an llegar a presentarse pero no ser�n situaciones que pongan en riesgo la vida normal de Capricornio. Los buenos h�bitos de alimentaci�n deber�n de ser incluidos en este a�o para lograr permanecer saludables y en forma. El ejercicio es una muy buena opci�n para el signo durante este per�odo de su vida.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEste a�o que inicia puede ser muy bueno en el campo sentimental y del amor, las relaciones estables puede iniciarse y la vida marital ser� muy satisfactoria. La comprensi�n y la lealtad estar�n presentes para ayudarte a fortalecer tus v�nculos sentimentales. Tendr�s que tener un cuidado especial con tus palabras pues podr�an herir a quienes te rodean incluyendo a la persona que tiene un significado especial en tu vida.\n");
				printf("\n-COLOR DE LA SUERTE: NEGRO.\n");
				printf("\n-NUMEROS DE LA SUERTE: 3,6,16.\n\n");
			}
			else{
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: ACUARIO.\n\n");
				printf("SU PREDICCION PARA ACUARIO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nPesimista y preocupado por la situaci�n mundial. A�o pr�spero. Muy bien en negocio o trabajo. Vida espiritual muy evolucionada. La familia movida y cambiante. Buscas la alegr�a y la diversi�n. Cambio de imagen. Cuidate m�s. Ayudas a los amigos y a quien puedes.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud ser� inestable. El principal problema, que puedes tener, es que no te cuides lo suficiente. Pensar�s demasiado en los dem�s y poco en ti mismo. Tienes, que estar atento a tu cuerpo y ver lo que te pide. No te excedas con el trabajo y con el deporte. Cuando est�s cansado, descansa, duerme y recupera energ�as. \n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEn el amor todo seguir� igual. Tendr�s estabilidad, pero sin cambios. Si est�s casado o en pareja, seguir�s con tu vida cotidiana sin problema. Si tienes novio/a, seguir�s con la relaci�n.\n");
				printf("\n-COLOR DE LA SUERTE: TURQUESA.\n");
				printf("\n-NUMEROS DE LA SUERTE: 7,14,20.\n\n");
			}
		break;
		case 2:
			if(dia<19){
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: ACUARIO.\n\n");
				printf("SU PREDICCION PARA ACUARIO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nPesimista y preocupado por la situaci�n mundial. A�o pr�spero. Muy bien en negocio o trabajo. Vida espiritual muy evolucionada. La familia movida y cambiante. Buscas la alegr�a y la diversi�n. Cambio de imagen. Cuidate m�s. Ayudas a los amigos y a quien puedes.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud ser� inestable. El principal problema, que puedes tener, es que no te cuides lo suficiente. Pensar�s demasiado en los dem�s y poco en ti mismo. Tienes, que estar atento a tu cuerpo y ver lo que te pide. No te excedas con el trabajo y con el deporte. Cuando est�s cansado, descansa, duerme y recupera energ�as. \n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEn el amor todo seguir� igual. Tendr�s estabilidad, pero sin cambios. Si est�s casado o en pareja, seguir�s con tu vida cotidiana sin problema. Si tienes novio/a, seguir�s con la relaci�n.\n");
				printf("\n-COLOR DE LA SUERTE: TURQUESA.\n");
				printf("\n-NUMEROS DE LA SUERTE: 7,14,20.\n\n");
			}
			else{
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: PISCIS.\n\n");
				printf("SU PREDICCION PARA PISCIS EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nEl 2021 ser� un a�o un poco embarazoso donde tendr�s que ajustarte a nuevas condiciones. Neptuno, tu planeta regente, permanecer� en tu signo todo el 2021, y podr�s seguir fortaleciendo tu intuici�n, imaginaci�n, compasi�n y empat�a. Tu creatividad y habilidades art�sticas pueden elevarse, y estar�s m�s carism�tico. Aquellos pececitos nacidos del 8 al 17 de marzo pueden recibir un impacto directo de Neptuno en el 2021, y sentir esta energ�a m�s fuerte.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nPresta mucha atenci�n a tu salud emocional, piensa positivo y siempre observa el lado bonito de las cosas. Presta m�s atenci�n a tus problemas que a los ajenos. Trata de cuidar tu sistema digestivo. Si tienes alg�n padecimiento busca siempre una segunda opini�n m�dica.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEl amor es el cimiento de tu vida. Anhelas encontrar a la persona perfecta para vivir con ella un amor apasionado, y este a�o tu sue�o se consumar�. Los pececitos solteros disfrutar�n del beneficio de conocer a su alma gemela, una persona que constituir� parte de su vida y no querr� trasformar nada de ti, ya que te considerar� como la persona ideal para compartir este sorprendente sendero de la vida. Participa en las fiestas o eventos que seas convidado, porque ser� en un entorno de festividad y diversi�n donde conocer�s a esta persona.\n");
				printf("\n-COLOR DE LA SUERTE: VIOLETA.\n");
				printf("\n-NUMEROS DE LA SUERTE: 5,11,19.\n\n");
			}
		break;	
		case 3:
			if(dia<21){
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: PISCIS.\n\n");
				printf("SU PREDICCION PARA PISCIS EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nEl 2021 ser� un a�o un poco embarazoso donde tendr�s que ajustarte a nuevas condiciones. Neptuno, tu planeta regente, permanecer� en tu signo todo el 2021, y podr�s seguir fortaleciendo tu intuici�n, imaginaci�n, compasi�n y empat�a. Tu creatividad y habilidades art�sticas pueden elevarse, y estar�s m�s carism�tico. Aquellos pececitos nacidos del 8 al 17 de marzo pueden recibir un impacto directo de Neptuno en el 2021, y sentir esta energ�a m�s fuerte.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nPresta mucha atenci�n a tu salud emocional, piensa positivo y siempre observa el lado bonito de las cosas. Presta m�s atenci�n a tus problemas que a los ajenos. Trata de cuidar tu sistema digestivo. Si tienes alg�n padecimiento busca siempre una segunda opini�n m�dica.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEl amor es el cimiento de tu vida. Anhelas encontrar a la persona perfecta para vivir con ella un amor apasionado, y este a�o tu sue�o se consumar�. Los pececitos solteros disfrutar�n del beneficio de conocer a su alma gemela, una persona que constituir� parte de su vida y no querr� trasformar nada de ti, ya que te considerar� como la persona ideal para compartir este sorprendente sendero de la vida. Participa en las fiestas o eventos que seas convidado, porque ser� en un entorno de festividad y diversi�n donde conocer�s a esta persona.\n");
				printf("\n-COLOR DE LA SUERTE: VIOLETA.\n");
				printf("\n-NUMEROS DE LA SUERTE: 5,11,19.\n\n");
			}
			else{
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: ARIES.\n\n");
				printf("SU PREDICCION PARA ARIES EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nCierras el a�o mirando las cosas desde una perspectiva diferente. Tendr�s al frente nuevas opciones, ahora todo lo planificar�s detenidamente. Es posible que manejes actividades paralelas. A lo largo del a�o cultiva la paciencia, apresurarte podr�a traerte problemas. Debes ser desconfiado antes de establecer alguna sociedad, se acercar�n personas poco transparentes y es fundamental que sepas identificarlas.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nDebes tener cuidado de no descuidar tu salud, sobre todo si haces a un lado tus problemas sentimentales para concentrarte m�s en lo laboral desde fines de marzo.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nSoledad en la primera etapa de a�o, te alejar�s de todo aquello que pueda ser inestable e intrascendente. Cierras el a�o con posibilidades m�s interesantes. Si tienes una relaci�n, es importante que no enfr�es pasiones.\n");
				printf("\n-COLOR DE LA SUERTE: ROJO.\n");
				printf("\n-NUMEROS DE LA SUERTE: 7,17,21.\n\n");
				
			}
		break;
		case 4:
			if(dia<21){
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: ARIES.\n\n");
				printf("SU PREDICCION PARA ARIES EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nCierras el a�o mirando las cosas desde una perspectiva diferente. Tendr�s al frente nuevas opciones, ahora todo lo planificar�s detenidamente. Es posible que manejes actividades paralelas. A lo largo del a�o cultiva la paciencia, apresurarte podr�a traerte problemas. Debes ser desconfiado antes de establecer alguna sociedad, se acercar�n personas poco transparentes y es fundamental que sepas identificarlas.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nDebes tener cuidado de no descuidar tu salud, sobre todo si haces a un lado tus problemas sentimentales para concentrarte m�s en lo laboral desde fines de marzo.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nSoledad en la primera etapa de a�o, te alejar�s de todo aquello que pueda ser inestable e intrascendente. Cierras el a�o con posibilidades m�s interesantes. Si tienes una relaci�n, es importante que no enfr�es pasiones.\n");
				printf("\n-COLOR DE LA SUERTE: ROJO.\n");
				printf("\n-NUMEROS DE LA SUERTE: 7,17,21.\n\n");
			}
			else{
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: TAURO.\n\n");
				printf("SU PREDICCION PARA TAURO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nEl a�o 2021 promete ser un gran a�o para Tauro, �s� feliz! Sin embargo, no ser� un a�o tranquilo en todas las �reas de tu vida. Por una vez, estos cambios no te asustar�n porque t� los habr�s decidido.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud ser� buena. Quiz�s tus energ�as podr�an ser m�s altas, pero estar�s bien y podr�s afrontar tu vida sin cansarte. De todas formas, tienes que ser tu mejor m�dico. Escucha a tu cuerpo y si est� cansado, descansa y duerme m�s. Si te duele algo, ves al m�dico y cuidate. As� de simple. Si haces esto, ninguna enfermedad ir� a m�s y estar�s bien.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEl amor te ir� bien sin m�s. Este a�o te apetece m�s estar solo. Si tienes novio/a, no es un a�o para casarte, si no m�s bien, para consolidar la relaci�n o si hace poco, que sales con ella, necesitas m�s tiempo para conocerla.\n");
				printf("\n-COLOR DE LA SUERTE: AMARILLO.\n");
				printf("\n-NUMEROS DE LA SUERTE: 4,6,11.\n\n");
			}
		break;
		case 5:
			if(dia<21){
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: TAURO.\n\n");
				printf("SU PREDICCION PARA TAURO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nEl a�o 2021 promete ser un gran a�o para Tauro, �s� feliz! Sin embargo, no ser� un a�o tranquilo en todas las �reas de tu vida. Por una vez, estos cambios no te asustar�n porque t� los habr�s decidido.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud ser� buena. Quiz�s tus energ�as podr�an ser m�s altas, pero estar�s bien y podr�s afrontar tu vida sin cansarte. De todas formas, tienes que ser tu mejor m�dico. Escucha a tu cuerpo y si est� cansado, descansa y duerme m�s. Si te duele algo, ves al m�dico y cuidate. As� de simple. Si haces esto, ninguna enfermedad ir� a m�s y estar�s bien.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEl amor te ir� bien sin m�s. Este a�o te apetece m�s estar solo. Si tienes novio/a, no es un a�o para casarte, si no m�s bien, para consolidar la relaci�n o si hace poco, que sales con ella, necesitas m�s tiempo para conocerla.\n");
				printf("\n-COLOR DE LA SUERTE: AMARILLO.\n");
				printf("\n-NUMEROS DE LA SUERTE: 4,6,11.\n\n");
			}
			else{
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: GEMINIS.\n\n");
				printf("SU PREDICCION PARA GEMINIS EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nLo mejor trabajo y profesi�n: exitos, reconomientos. Enorme espiritualidad y sabidur�a, reinvenci�n. Los amigos muy importantes, un gran apoyo. El amor mucho mejor y sexo. Viajes al extranjero. La familia fant�stica. Salud perfecta y mejorar�s tu imagen.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nDebes hacer ejercicio diario, para sentirte equilibrado y con fondo, pero si no lo est�s haciendo, ser�a aconsejable para tu salud. Otro tema importante para ti ser� tu imagen. Querr�s cambiar de imagen y te lo tomar�s en serio. Las cosas te van muy bien y querr�s dar una imagen impecable.\n");
				printf("\n-PARA LAS RELACIONES: \n");	
				printf("\nTu vida amorosa te va a ir muy bien y estar� llena de cambios, especialmente si est�s soltero y solo. Si es as�, te vas a dedicar a viajar y a conocer gente nueva. Te atrae la gente adinerada, de buena posici�n, intelectual, deportista, inquieta y divertida. Necesitas, que tenga tu misma escala de valores. Te sentir�s atra�do por personas extranjeras, profesores o gur�s, empresarios y personas adineradas. No confundas el interes con el amor.\n");
				printf("\n-COLOR DE LA SUERTE: VIOLETA.\n");
				printf("\n-NUMEROS DE LA SUERTE: 2,4,7,9.\n\n");
			}
		break;
		case 6:
			if(dia<21){
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: GEMINIS.\n\n");
				printf("SU PREDICCION PARA GEMINIS EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nLo mejor trabajo y profesi�n: exitos, reconomientos. Enorme espiritualidad y sabidur�a, reinvenci�n. Los amigos muy importantes, un gran apoyo. El amor mucho mejor y sexo. Viajes al extranjero. La familia fant�stica. Salud perfecta y mejorar�s tu imagen.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nDebes hacer ejercicio diario, para sentirte equilibrado y con fondo, pero si no lo est�s haciendo, ser�a aconsejable para tu salud. Otro tema importante para ti ser� tu imagen. Querr�s cambiar de imagen y te lo tomar�s en serio. Las cosas te van muy bien y querr�s dar una imagen impecable.\n");
				printf("\n-PARA LAS RELACIONES: \n");	
				printf("\nTu vida amorosa te va a ir muy bien y estar� llena de cambios, especialmente si est�s soltero y solo. Si es as�, te vas a dedicar a viajar y a conocer gente nueva. Te atrae la gente adinerada, de buena posici�n, intelectual, deportista, inquieta y divertida. Necesitas, que tenga tu misma escala de valores. Te sentir�s atra�do por personas extranjeras, profesores o gur�s, empresarios y personas adineradas. No confundas el interes con el amor.\n");
				printf("\n-COLOR DE LA SUERTE: VIOLETA.\n");
				printf("\n-NUMEROS DE LA SUERTE: 2,4,7,9.\n\n");
			}
			else{
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: CANCER.\n\n");
				printf("SU PREDICCION PARA CANCER EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nSer� un a�o de altas y bajas para las personas del signo C�ncer y a pesar de esto, contar�s con las energ�as suficientes para lograr todos tus objetivos. Este nuevo a�o tendr�s la oportunidad de empezar de nuevo, conseguir una mayor independencia y ser mucho m�s feliz.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nTendr�s molestias y dificultades f�sicas que te restaran tiempo. Deber�s hacer deporte y comer m�s sano.\n");
				printf("\n-PARA LAS RELACIONES: \n");	
				printf("\nLas parejas se sentir�n absorbidas por las diferentes obligaciones en lo laboral y tendr�n que hacer un alto para fortalecer la relaci�n. No aceptes que otros te quiten lo que consideras tuyo. Los solteros tendr�n un nuevo amor, pero depende de c�mo vayan las cosas ser� pasajero o con planes de futuro. Nuevas fuerzas para hacer y lograr lo que quieres.\n");
				printf("\n-COLOR DE LA SUERTE: BLANCO.\n");
				printf("\n-NUMEROS DE LA SUERTE: 5,6,8,19.\n\n");
			}
		break;
		case 7:
			if(dia<23){
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: CANCER.\n\n");
				printf("SU PREDICCION PARA CANCER EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nSer� un a�o de altas y bajas para las personas del signo C�ncer y a pesar de esto, contar�s con las energ�as suficientes para lograr todos tus objetivos. Este nuevo a�o tendr�s la oportunidad de empezar de nuevo, conseguir una mayor independencia y ser mucho m�s feliz.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nTendr�s molestias y dificultades f�sicas que te restaran tiempo. Deber�s hacer deporte y comer m�s sano.n");
				printf("\n-PARA LAS RELACIONES: \n");	
				printf("\nLas parejas se sentir�n absorbidas por las diferentes obligaciones en lo laboral y tendr�n que hacer un alto para fortalecer la relaci�n. No aceptes que otros te quiten lo que consideras tuyo. Los solteros tendr�n un nuevo amor, pero depende de c�mo vayan las cosas ser� pasajero o con planes de futuro. Nuevas fuerzas para hacer y lograr lo que quieres.\n");
				printf("\n-COLOR DE LA SUERTE: BLANCO.\n");
				printf("\n-NUMEROS DE LA SUERTE: 5,6,8,19.\n\n");
			}
			else{
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: LEO.\n\n");
				printf("SU PREDICCION PARA LEO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nEste a�o ver�s las cosas de manera diferente y considerar�s hacer un cambio radical, ya sea en tus relaciones o en tus planes profesionales.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nContin�a amando la vida como lo haces ahora, pero evita fumar sin parar y consumir cantidades excesivas de alcohol. Recuerda calentar bien antes de hacer deporte y ten cuidado de moverte de repente para no tirar de ning�n m�sculo.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nDeber�s compartir y disfrutar del amor, as� como darle prioridad a las personas que te aman. En el �mbito familiar, vivir�s momentos tensos, sin embargo, podr�s resolver algunos asuntos importantes en casa. Eso te da tranquilidad.\n");
				printf("\n-COLOR DE LA SUERTE: NARANJA.\n");
				printf("\n-NUMEROS DE LA SUERTE: 1,4,19,22.\n\n");	
			}
		break;
		case 8:
			if(dia<25){
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: LEO.\n\n");
				printf("SU PREDICCION PARA LEO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nEste a�o ver�s las cosas de manera diferente y considerar�s hacer un cambio radical, ya sea en tus relaciones o en tus planes profesionales.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nContin�a amando la vida como lo haces ahora, pero evita fumar sin parar y consumir cantidades excesivas de alcohol. Recuerda calentar bien antes de hacer deporte y ten cuidado de moverte de repente para no tirar de ning�n m�sculo.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nDeber�s compartir y disfrutar del amor, as� como darle prioridad a las personas que te aman. En el �mbito familiar, vivir�s momentos tensos, sin embargo, podr�s resolver algunos asuntos importantes en casa. Eso te da tranquilidad.\n");
				printf("\n-COLOR DE LA SUERTE: NARANJA.\n");
				printf("\n-NUMEROS DE LA SUERTE: 1,4,19,22.\n\n");	
			}
			else{
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: VIRGO.\n\n");
				printf("SU PREDICCION PARA VIRGO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nA�o feliz y din�mico. Fijaci�n con la salud y cambio de estilo de vida. Vida social s�per activa. Amor muy importante. El trabajo complicado, pero excelente. La familia preocupaci�n. Los estudiantes cambios importantes. Evoluci�n espiritual. Dinero inestable.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud va a ser muy importante este a�o para ti. Cambiar�s de estilo de vida, porque querr�s llevar una vida m�s sana que nunca. T� lo har�s y querr�s, que tu familia lo comparta. Te esforzar�s en ingerir productos ecol�gicos, con una dieta sana y equilibrada, ejercicio diario, m�s tiempo al aire libre... �Cuidado! Corres el riesgo de obsesionarte y hacer una monta�a de un grano de arena. El asunto de la Covid-19 te ha preocupado en demas�a y puedes llegar a obsesionarte con la salud.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nSi est�s soltero, va a ser un a�o lleno de emociones y varias relaciones espor�dicas. A ti te gusta m�s una relaci�n romantica y seria, pero este a�o 2021 ser� distinto. Necesitas encontrar a una persona espiritual, que comparta tu vida y tu escala de valores. Pero este a�o va a ser mucho mas movido. Saldr�s m�s que nunca y conocer�s a mucha gente nueva. Si tienes novia, el 2021 ser� el a�o de tu boda.\n");
				printf("\n-COLOR DE LA SUERTE: VERDE.\n");
				printf("\n-NUMEROS DE LA SUERTE: 10,15,27.\n\n");
			}
		break;
		case 9:
			if(dia<24){
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: VIRGO.\n\n");
				printf("SU PREDICCION PARA VIRGO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nA�o feliz y din�mico. Fijaci�n con la salud y cambio de estilo de vida. Vida social s�per activa. Amor muy importante. El trabajo complicado, pero excelente. La familia preocupaci�n. Los estudiantes cambios importantes. Evoluci�n espiritual. Dinero inestable.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud va a ser muy importante este a�o para ti. Cambiar�s de estilo de vida, porque querr�s llevar una vida m�s sana que nunca. T� lo har�s y querr�s, que tu familia lo comparta. Te esforzar�s en ingerir productos ecol�gicos, con una dieta sana y equilibrada, ejercicio diario, m�s tiempo al aire libre... �Cuidado! Corres el riesgo de obsesionarte y hacer una monta�a de un grano de arena. El asunto de la Covid-19 te ha preocupado en demas�a y puedes llegar a obsesionarte con la salud.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nSi est�s soltero, va a ser un a�o lleno de emociones y varias relaciones espor�dicas. A ti te gusta m�s una relaci�n romantica y seria, pero este a�o 2021 ser� distinto. Necesitas encontrar a una persona espiritual, que comparta tu vida y tu escala de valores. Pero este a�o va a ser mucho mas movido. Saldr�s m�s que nunca y conocer�s a mucha gente nueva. Si tienes novia, el 2021 ser� el a�o de tu boda.\n");
				printf("\n-COLOR DE LA SUERTE: VERDE.\n");
				printf("\n-NUMEROS DE LA SUERTE: 10,15,27.\n\n");
			}
			else{
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: LIBRA.\n\n");
				printf("SU PREDICCION PARA LIBRA EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nEste a�o realmente tienes que agarrarte fuerte porque nada te tendr�. Sobresaldr�s en todas las actividades que te propongas. La amistad estar� a la orden del d�a y �ser� lo m�s importante para ti!\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud es muy importante este a�o. Mejoras con respecto a los a�os anteriores. Tendr�s mucha energ�a y fuerzas, para afrontar el a�o con mucho �nimo, para todo. En momentos de estr�s y de fatiga, un masaje en los pies y te quedar�s nuevo. Evita la ansiedad bajo ning�n concepto, porque te desequilibra y somatizas tu estado nervioso en tu salud. Lo mejor ser�a, que hicieras una Meditaci�n diaria o Yoga o Taichi. Tu naturaleza responder�a muy bien a cualquiera de estas t�cnicas de relajaci�n.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEn la vida sentimental tender�s a la estabilidad. No habr� cambios, tanto si est�s casado como soltero, sentir�s, que debes continuar igual que estabas al empezar el a�o. Lo que est� claro, es que ser� un a�o en el que, tu vida sexual ser� muy activa. Si est�s casado o en pareja, te apetecer� probar cosas nuevas y experimentar. Ecolucionar�s al respecto. Si est�s sotero, lo mismo. Aunque no tengas pareja, tendr�s m�s relaciones espor�dicas, siempre en busca del sexo y la admiraci�n del sexo opuesto y lo vas a pasar bien con el juego de la seducci�n.\n");
				printf("\n-COLOR DE LA SUERTE: GRIS.\n");
				printf("\n-NUMEROS DE LA SUERTE: 2,8,19.\n\n");
			
			}
		break;
		case 10:
			if(dia<24){
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: LIBRA.\n\n");
				printf("SU PREDICCION PARA LIBRA EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nEste a�o realmente tienes que agarrarte fuerte porque nada te tendr�. Sobresaldr�s en todas las actividades que te propongas. La amistad estar� a la orden del d�a y �ser� lo m�s importante para ti!\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud es muy importante este a�o. Mejoras con respecto a los a�os anteriores. Tendr�s mucha energ�a y fuerzas, para afrontar el a�o con mucho �nimo, para todo. En momentos de estr�s y de fatiga, un masaje en los pies y te quedar�s nuevo. Evita la ansiedad bajo ning�n concepto, porque te desequilibra y somatizas tu estado nervioso en tu salud. Lo mejor ser�a, que hicieras una Meditaci�n diaria o Yoga o Taichi. Tu naturaleza responder�a muy bien a cualquiera de estas t�cnicas de relajaci�n.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEn la vida sentimental tender�s a la estabilidad. No habr� cambios, tanto si est�s casado como soltero, sentir�s, que debes continuar igual que estabas al empezar el a�o. Lo que est� claro, es que ser� un a�o en el que, tu vida sexual ser� muy activa. Si est�s casado o en pareja, te apetecer� probar cosas nuevas y experimentar. Ecolucionar�s al respecto. Si est�s sotero, lo mismo. Aunque no tengas pareja, tendr�s m�s relaciones espor�dicas, siempre en busca del sexo y la admiraci�n del sexo opuesto y lo vas a pasar bien con el juego de la seducci�n.\n");
				printf("\n-COLOR DE LA SUERTE: GRIS.\n");
				printf("\n-NUMEROS DE LA SUERTE: 2,8,19.\n\n");
			}
			else{
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: ESCORPIO.\n\n");
				printf("SU PREDICCION PARA ESCORPIO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nEscorpio este 2021 deja a un lado tus miedos y perm�tete brillar como nunca. Eso s� ten cuidado de no ir m�s all� de los l�mites en tus relaciones amorosas o laborales. No olvides que tu talento y tu carisma no te servir�n de excusa siempre.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud ser� irregular, porque tus energ�as ser�n bajas y pasar�s �pocas de cansancio. Est� claro, que tu estado general es peor que el a�o anterior. Lo que tienes que procurar, es descansar y dormir tus horas, para no agotarte. Si te agotas, somatizar�s y enfermar�s. Tendr�s, que estar pendiente de tu salud, para no caer en un c�rculo vicioso.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEl amor ser� inestable este a�o. Si est�s en pareja, pasar�s por una crisis y tendr�s que llegar a acuerdos para resolverlo. Ser� un a�o duro y lleno de conversaciones y concesiones, para intentar salvar el matrimonio o la relaci�n. Algunos se separar�n y otros lograr�n reconciliarse y estabilizar su relaci�n sentimental. Si est�s soltero, saldr�s mucho a divertirte y tendr�s varias relaciones espor�dicas. Alg�n familiar podr�a presentarte a alguien de quien te enamores. Incluso podr�as enamorarte online.\n");
				printf("\n-COLOR DE LA SUERTE: ROJO.\n");
				printf("\n-NUMEROS DE LA SUERTE: 3,8,13.\n\n");
			}
		break;
		case 11:
			if(dia<23){
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: ESCORPIO.\n\n");
				printf("SU PREDICCION PARA ESCORPIO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nEscorpio este 2021 deja a un lado tus miedos y perm�tete brillar como nunca. Eso s� ten cuidado de no ir m�s all� de los l�mites en tus relaciones amorosas o laborales. No olvides que tu talento y tu carisma no te servir�n de excusa siempre.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud ser� irregular, porque tus energ�as ser�n bajas y pasar�s �pocas de cansancio. Est� claro, que tu estado general es peor que el a�o anterior. Lo que tienes que procurar, es descansar y dormir tus horas, para no agotarte. Si te agotas, somatizar�s y enfermar�s. Tendr�s, que estar pendiente de tu salud, para no caer en un c�rculo vicioso.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEl amor ser� inestable este a�o. Si est�s en pareja, pasar�s por una crisis y tendr�s que llegar a acuerdos para resolverlo. Ser� un a�o duro y lleno de conversaciones y concesiones, para intentar salvar el matrimonio o la relaci�n. Algunos se separar�n y otros lograr�n reconciliarse y estabilizar su relaci�n sentimental. Si est�s soltero, saldr�s mucho a divertirte y tendr�s varias relaciones espor�dicas. Alg�n familiar podr�a presentarte a alguien de quien te enamores. Incluso podr�as enamorarte online.\n");
				printf("\n-COLOR DE LA SUERTE: ROJO.\n");
				printf("\n-NUMEROS DE LA SUERTE: 3,8,13.\n\n");
			}
			else{
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: SAGITARIO.\n\n");
				printf("SU PREDICCION PARA SAGITARIO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nEl 2021 se presenta cargado de sorpresas para los nacidos bajo este signo zodiacal, por lo que ser� necesario que abras tu mente para dar lo mejor de ti. Adem�s, tu vida social ser� m�s activa y tendr�s mucho m�s �nimo que el a�o anterior.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nDebido a la actividad f�sica que practicas tu salud se ver� favorecida, pues con la eliminaci�n de toxinas est�s contribuyendo a reforzar la resistencia de tu organismo. Sin embargo, debes cuidar tu presi�n, adem�s de evitar comida chatarra y condimentos; as� que depender� de ti que no tengas molestias en el est�mago.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nA lo largo de este a�o, los Sagitario experimentar�n el amor al m�ximo y pasar�n gratos momentos con amistades y seres queridos. Tendr�n aciertos a trav�s de la intuici�n e iniciativas que ser�n apoyadas por terceras personas. Asimismo, podr�an surgir propuestas amorosas que deber�n analizar bien si les convienen o no.\n");
				printf("\n-COLOR DE LA SUERTE: MORADO/VIOLETA.\n");
				printf("\n-NUMEROS DE LA SUERTE: 3,8,13.\n\n");
			}
		break;
		case 12:
			if(dia<22){
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: SAGITARIO.\n\n");
				printf("SU PREDICCION PARA SAGITARIO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nEl 2021 se presenta cargado de sorpresas para los nacidos bajo este signo zodiacal, por lo que ser� necesario que abras tu mente para dar lo mejor de ti. Adem�s, tu vida social ser� m�s activa y tendr�s mucho m�s �nimo que el a�o anterior.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nDebido a la actividad f�sica que practicas tu salud se ver� favorecida, pues con la eliminaci�n de toxinas est�s contribuyendo a reforzar la resistencia de tu organismo. Sin embargo, debes cuidar tu presi�n, adem�s de evitar comida chatarra y condimentos; as� que depender� de ti que no tengas molestias en el est�mago.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nA lo largo de este a�o, los Sagitario experimentar�n el amor al m�ximo y pasar�n gratos momentos con amistades y seres queridos. Tendr�n aciertos a trav�s de la intuici�n e iniciativas que ser�n apoyadas por terceras personas. Asimismo, podr�an surgir propuestas amorosas que deber�n analizar bien si les convienen o no.\n");
				printf("\n-COLOR DE LA SUERTE: MORADO/VIOLETA.\n");
				printf("\n-NUMEROS DE LA SUERTE: 3,8,13.\n\n");
			}
			else{
				system("cls");
				printf("\nSu nombre es: %s.\n", nombre);
				printf("\nSu genero es: %s.\n", genero);
				printf("\nSu signo zodiacal es: CAPRICORNIO.\n\n");
				printf("SU PREDICCION PARA CAPRICORNIO EN ESTE 2021 ES: \n");
				printf("\n-PARA EL FUTURO: \n");
				printf("\nA�o pr�spero y feliz. Salud buena. Gran poder comunicador. Los amigos muy importantes, un gran apoyo. El amor estable. Trabajo m�s creativo. La familia rebelde, pero divertida. El dinero muy bien. Estudios muy bien.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nSer� un a�o con buena salud general y de bienestar para los nativos de este signo. Algunos peque�os problemas menores podr�an llegar a presentarse pero no ser�n situaciones que pongan en riesgo la vida normal de Capricornio. Los buenos h�bitos de alimentaci�n deber�n de ser incluidos en este a�o para lograr permanecer saludables y en forma. El ejercicio es una muy buena opci�n para el signo durante este per�odo de su vida.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEste a�o que inicia puede ser muy bueno en el campo sentimental y del amor, las relaciones estables puede iniciarse y la vida marital ser� muy satisfactoria. La comprensi�n y la lealtad estar�n presentes para ayudarte a fortalecer tus v�nculos sentimentales. Tendr�s que tener un cuidado especial con tus palabras pues podr�an herir a quienes te rodean incluyendo a la persona que tiene un significado especial en tu vida.\n");
				printf("\n-COLOR DE LA SUERTE: NEGRO.\n");
				printf("\n-NUMEROS DE LA SUERTE: 3,6,16.\n\n");		
			}
		break;	
		
		default: printf("\nHA INTRODUCIDO UN DATO ERRONEO\n\n");			
	}
		
	getch();
	
	system("pause");
	return 0; 
}
