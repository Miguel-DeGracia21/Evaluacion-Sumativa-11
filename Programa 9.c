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
				printf("\nAño próspero y feliz. Salud buena. Gran poder comunicador. Los amigos muy importantes, un gran apoyo. El amor estable. Trabajo más creativo. La familia rebelde, pero divertida. El dinero muy bien. Estudios muy bien.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nSerá un año con buena salud general y de bienestar para los nativos de este signo. Algunos pequeños problemas menores podrían llegar a presentarse pero no serán situaciones que pongan en riesgo la vida normal de Capricornio. Los buenos hábitos de alimentación deberán de ser incluidos en este año para lograr permanecer saludables y en forma. El ejercicio es una muy buena opción para el signo durante este período de su vida.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEste año que inicia puede ser muy bueno en el campo sentimental y del amor, las relaciones estables puede iniciarse y la vida marital será muy satisfactoria. La comprensión y la lealtad estarán presentes para ayudarte a fortalecer tus vínculos sentimentales. Tendrás que tener un cuidado especial con tus palabras pues podrían herir a quienes te rodean incluyendo a la persona que tiene un significado especial en tu vida.\n");
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
				printf("\nPesimista y preocupado por la situación mundial. Año próspero. Muy bien en negocio o trabajo. Vida espiritual muy evolucionada. La familia movida y cambiante. Buscas la alegría y la diversión. Cambio de imagen. Cuidate más. Ayudas a los amigos y a quien puedes.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud será inestable. El principal problema, que puedes tener, es que no te cuides lo suficiente. Pensarás demasiado en los demás y poco en ti mismo. Tienes, que estar atento a tu cuerpo y ver lo que te pide. No te excedas con el trabajo y con el deporte. Cuando estés cansado, descansa, duerme y recupera energías. \n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEn el amor todo seguirá igual. Tendrás estabilidad, pero sin cambios. Si estás casado o en pareja, seguirás con tu vida cotidiana sin problema. Si tienes novio/a, seguirás con la relación.\n");
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
				printf("\nPesimista y preocupado por la situación mundial. Año próspero. Muy bien en negocio o trabajo. Vida espiritual muy evolucionada. La familia movida y cambiante. Buscas la alegría y la diversión. Cambio de imagen. Cuidate más. Ayudas a los amigos y a quien puedes.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud será inestable. El principal problema, que puedes tener, es que no te cuides lo suficiente. Pensarás demasiado en los demás y poco en ti mismo. Tienes, que estar atento a tu cuerpo y ver lo que te pide. No te excedas con el trabajo y con el deporte. Cuando estés cansado, descansa, duerme y recupera energías. \n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEn el amor todo seguirá igual. Tendrás estabilidad, pero sin cambios. Si estás casado o en pareja, seguirás con tu vida cotidiana sin problema. Si tienes novio/a, seguirás con la relación.\n");
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
				printf("\nEl 2021 será un año un poco embarazoso donde tendrás que ajustarte a nuevas condiciones. Neptuno, tu planeta regente, permanecerá en tu signo todo el 2021, y podrás seguir fortaleciendo tu intuición, imaginación, compasión y empatía. Tu creatividad y habilidades artísticas pueden elevarse, y estarás más carismático. Aquellos pececitos nacidos del 8 al 17 de marzo pueden recibir un impacto directo de Neptuno en el 2021, y sentir esta energía más fuerte.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nPresta mucha atención a tu salud emocional, piensa positivo y siempre observa el lado bonito de las cosas. Presta más atención a tus problemas que a los ajenos. Trata de cuidar tu sistema digestivo. Si tienes algún padecimiento busca siempre una segunda opinión médica.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEl amor es el cimiento de tu vida. Anhelas encontrar a la persona perfecta para vivir con ella un amor apasionado, y este año tu sueño se consumará. Los pececitos solteros disfrutarán del beneficio de conocer a su alma gemela, una persona que constituirá parte de su vida y no querrá trasformar nada de ti, ya que te considerará como la persona ideal para compartir este sorprendente sendero de la vida. Participa en las fiestas o eventos que seas convidado, porque será en un entorno de festividad y diversión donde conocerás a esta persona.\n");
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
				printf("\nEl 2021 será un año un poco embarazoso donde tendrás que ajustarte a nuevas condiciones. Neptuno, tu planeta regente, permanecerá en tu signo todo el 2021, y podrás seguir fortaleciendo tu intuición, imaginación, compasión y empatía. Tu creatividad y habilidades artísticas pueden elevarse, y estarás más carismático. Aquellos pececitos nacidos del 8 al 17 de marzo pueden recibir un impacto directo de Neptuno en el 2021, y sentir esta energía más fuerte.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nPresta mucha atención a tu salud emocional, piensa positivo y siempre observa el lado bonito de las cosas. Presta más atención a tus problemas que a los ajenos. Trata de cuidar tu sistema digestivo. Si tienes algún padecimiento busca siempre una segunda opinión médica.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEl amor es el cimiento de tu vida. Anhelas encontrar a la persona perfecta para vivir con ella un amor apasionado, y este año tu sueño se consumará. Los pececitos solteros disfrutarán del beneficio de conocer a su alma gemela, una persona que constituirá parte de su vida y no querrá trasformar nada de ti, ya que te considerará como la persona ideal para compartir este sorprendente sendero de la vida. Participa en las fiestas o eventos que seas convidado, porque será en un entorno de festividad y diversión donde conocerás a esta persona.\n");
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
				printf("\nCierras el año mirando las cosas desde una perspectiva diferente. Tendrás al frente nuevas opciones, ahora todo lo planificarás detenidamente. Es posible que manejes actividades paralelas. A lo largo del año cultiva la paciencia, apresurarte podría traerte problemas. Debes ser desconfiado antes de establecer alguna sociedad, se acercarán personas poco transparentes y es fundamental que sepas identificarlas.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nDebes tener cuidado de no descuidar tu salud, sobre todo si haces a un lado tus problemas sentimentales para concentrarte más en lo laboral desde fines de marzo.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nSoledad en la primera etapa de año, te alejarás de todo aquello que pueda ser inestable e intrascendente. Cierras el año con posibilidades más interesantes. Si tienes una relación, es importante que no enfríes pasiones.\n");
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
				printf("\nCierras el año mirando las cosas desde una perspectiva diferente. Tendrás al frente nuevas opciones, ahora todo lo planificarás detenidamente. Es posible que manejes actividades paralelas. A lo largo del año cultiva la paciencia, apresurarte podría traerte problemas. Debes ser desconfiado antes de establecer alguna sociedad, se acercarán personas poco transparentes y es fundamental que sepas identificarlas.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nDebes tener cuidado de no descuidar tu salud, sobre todo si haces a un lado tus problemas sentimentales para concentrarte más en lo laboral desde fines de marzo.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nSoledad en la primera etapa de año, te alejarás de todo aquello que pueda ser inestable e intrascendente. Cierras el año con posibilidades más interesantes. Si tienes una relación, es importante que no enfríes pasiones.\n");
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
				printf("\nEl año 2021 promete ser un gran año para Tauro, ¡sé feliz! Sin embargo, no será un año tranquilo en todas las áreas de tu vida. Por una vez, estos cambios no te asustarán porque tú los habrás decidido.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud será buena. Quizás tus energías podrían ser más altas, pero estarás bien y podrás afrontar tu vida sin cansarte. De todas formas, tienes que ser tu mejor médico. Escucha a tu cuerpo y si está cansado, descansa y duerme más. Si te duele algo, ves al médico y cuidate. Así de simple. Si haces esto, ninguna enfermedad irá a más y estarás bien.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEl amor te irá bien sin más. Este año te apetece más estar solo. Si tienes novio/a, no es un año para casarte, si no más bien, para consolidar la relación o si hace poco, que sales con ella, necesitas más tiempo para conocerla.\n");
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
				printf("\nEl año 2021 promete ser un gran año para Tauro, ¡sé feliz! Sin embargo, no será un año tranquilo en todas las áreas de tu vida. Por una vez, estos cambios no te asustarán porque tú los habrás decidido.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud será buena. Quizás tus energías podrían ser más altas, pero estarás bien y podrás afrontar tu vida sin cansarte. De todas formas, tienes que ser tu mejor médico. Escucha a tu cuerpo y si está cansado, descansa y duerme más. Si te duele algo, ves al médico y cuidate. Así de simple. Si haces esto, ninguna enfermedad irá a más y estarás bien.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEl amor te irá bien sin más. Este año te apetece más estar solo. Si tienes novio/a, no es un año para casarte, si no más bien, para consolidar la relación o si hace poco, que sales con ella, necesitas más tiempo para conocerla.\n");
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
				printf("\nLo mejor trabajo y profesión: exitos, reconomientos. Enorme espiritualidad y sabiduría, reinvención. Los amigos muy importantes, un gran apoyo. El amor mucho mejor y sexo. Viajes al extranjero. La familia fantástica. Salud perfecta y mejorarás tu imagen.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nDebes hacer ejercicio diario, para sentirte equilibrado y con fondo, pero si no lo estás haciendo, sería aconsejable para tu salud. Otro tema importante para ti será tu imagen. Querrás cambiar de imagen y te lo tomarás en serio. Las cosas te van muy bien y querrás dar una imagen impecable.\n");
				printf("\n-PARA LAS RELACIONES: \n");	
				printf("\nTu vida amorosa te va a ir muy bien y estará llena de cambios, especialmente si estás soltero y solo. Si es así, te vas a dedicar a viajar y a conocer gente nueva. Te atrae la gente adinerada, de buena posición, intelectual, deportista, inquieta y divertida. Necesitas, que tenga tu misma escala de valores. Te sentirás atraído por personas extranjeras, profesores o gurús, empresarios y personas adineradas. No confundas el interes con el amor.\n");
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
				printf("\nLo mejor trabajo y profesión: exitos, reconomientos. Enorme espiritualidad y sabiduría, reinvención. Los amigos muy importantes, un gran apoyo. El amor mucho mejor y sexo. Viajes al extranjero. La familia fantástica. Salud perfecta y mejorarás tu imagen.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nDebes hacer ejercicio diario, para sentirte equilibrado y con fondo, pero si no lo estás haciendo, sería aconsejable para tu salud. Otro tema importante para ti será tu imagen. Querrás cambiar de imagen y te lo tomarás en serio. Las cosas te van muy bien y querrás dar una imagen impecable.\n");
				printf("\n-PARA LAS RELACIONES: \n");	
				printf("\nTu vida amorosa te va a ir muy bien y estará llena de cambios, especialmente si estás soltero y solo. Si es así, te vas a dedicar a viajar y a conocer gente nueva. Te atrae la gente adinerada, de buena posición, intelectual, deportista, inquieta y divertida. Necesitas, que tenga tu misma escala de valores. Te sentirás atraído por personas extranjeras, profesores o gurús, empresarios y personas adineradas. No confundas el interes con el amor.\n");
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
				printf("\nSerá un año de altas y bajas para las personas del signo Cáncer y a pesar de esto, contarás con las energías suficientes para lograr todos tus objetivos. Este nuevo año tendrás la oportunidad de empezar de nuevo, conseguir una mayor independencia y ser mucho más feliz.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nTendrás molestias y dificultades físicas que te restaran tiempo. Deberás hacer deporte y comer más sano.\n");
				printf("\n-PARA LAS RELACIONES: \n");	
				printf("\nLas parejas se sentirán absorbidas por las diferentes obligaciones en lo laboral y tendrán que hacer un alto para fortalecer la relación. No aceptes que otros te quiten lo que consideras tuyo. Los solteros tendrán un nuevo amor, pero depende de cómo vayan las cosas será pasajero o con planes de futuro. Nuevas fuerzas para hacer y lograr lo que quieres.\n");
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
				printf("\nSerá un año de altas y bajas para las personas del signo Cáncer y a pesar de esto, contarás con las energías suficientes para lograr todos tus objetivos. Este nuevo año tendrás la oportunidad de empezar de nuevo, conseguir una mayor independencia y ser mucho más feliz.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nTendrás molestias y dificultades físicas que te restaran tiempo. Deberás hacer deporte y comer más sano.n");
				printf("\n-PARA LAS RELACIONES: \n");	
				printf("\nLas parejas se sentirán absorbidas por las diferentes obligaciones en lo laboral y tendrán que hacer un alto para fortalecer la relación. No aceptes que otros te quiten lo que consideras tuyo. Los solteros tendrán un nuevo amor, pero depende de cómo vayan las cosas será pasajero o con planes de futuro. Nuevas fuerzas para hacer y lograr lo que quieres.\n");
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
				printf("\nEste año verás las cosas de manera diferente y considerarás hacer un cambio radical, ya sea en tus relaciones o en tus planes profesionales.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nContinúa amando la vida como lo haces ahora, pero evita fumar sin parar y consumir cantidades excesivas de alcohol. Recuerda calentar bien antes de hacer deporte y ten cuidado de moverte de repente para no tirar de ningún músculo.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nDeberás compartir y disfrutar del amor, así como darle prioridad a las personas que te aman. En el ámbito familiar, vivirás momentos tensos, sin embargo, podrás resolver algunos asuntos importantes en casa. Eso te da tranquilidad.\n");
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
				printf("\nEste año verás las cosas de manera diferente y considerarás hacer un cambio radical, ya sea en tus relaciones o en tus planes profesionales.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nContinúa amando la vida como lo haces ahora, pero evita fumar sin parar y consumir cantidades excesivas de alcohol. Recuerda calentar bien antes de hacer deporte y ten cuidado de moverte de repente para no tirar de ningún músculo.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nDeberás compartir y disfrutar del amor, así como darle prioridad a las personas que te aman. En el ámbito familiar, vivirás momentos tensos, sin embargo, podrás resolver algunos asuntos importantes en casa. Eso te da tranquilidad.\n");
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
				printf("\nAño feliz y dinámico. Fijación con la salud y cambio de estilo de vida. Vida social súper activa. Amor muy importante. El trabajo complicado, pero excelente. La familia preocupación. Los estudiantes cambios importantes. Evolución espiritual. Dinero inestable.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud va a ser muy importante este año para ti. Cambiarás de estilo de vida, porque querrás llevar una vida más sana que nunca. Tú lo harás y querrás, que tu familia lo comparta. Te esforzarás en ingerir productos ecológicos, con una dieta sana y equilibrada, ejercicio diario, más tiempo al aire libre... ¡Cuidado! Corres el riesgo de obsesionarte y hacer una montaña de un grano de arena. El asunto de la Covid-19 te ha preocupado en demasía y puedes llegar a obsesionarte con la salud.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nSi estás soltero, va a ser un año lleno de emociones y varias relaciones esporádicas. A ti te gusta más una relación romantica y seria, pero este año 2021 será distinto. Necesitas encontrar a una persona espiritual, que comparta tu vida y tu escala de valores. Pero este año va a ser mucho mas movido. Saldrás más que nunca y conocerás a mucha gente nueva. Si tienes novia, el 2021 será el año de tu boda.\n");
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
				printf("\nAño feliz y dinámico. Fijación con la salud y cambio de estilo de vida. Vida social súper activa. Amor muy importante. El trabajo complicado, pero excelente. La familia preocupación. Los estudiantes cambios importantes. Evolución espiritual. Dinero inestable.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud va a ser muy importante este año para ti. Cambiarás de estilo de vida, porque querrás llevar una vida más sana que nunca. Tú lo harás y querrás, que tu familia lo comparta. Te esforzarás en ingerir productos ecológicos, con una dieta sana y equilibrada, ejercicio diario, más tiempo al aire libre... ¡Cuidado! Corres el riesgo de obsesionarte y hacer una montaña de un grano de arena. El asunto de la Covid-19 te ha preocupado en demasía y puedes llegar a obsesionarte con la salud.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nSi estás soltero, va a ser un año lleno de emociones y varias relaciones esporádicas. A ti te gusta más una relación romantica y seria, pero este año 2021 será distinto. Necesitas encontrar a una persona espiritual, que comparta tu vida y tu escala de valores. Pero este año va a ser mucho mas movido. Saldrás más que nunca y conocerás a mucha gente nueva. Si tienes novia, el 2021 será el año de tu boda.\n");
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
				printf("\nEste año realmente tienes que agarrarte fuerte porque nada te tendrá. Sobresaldrás en todas las actividades que te propongas. La amistad estará a la orden del día y ¡será lo más importante para ti!\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud es muy importante este año. Mejoras con respecto a los años anteriores. Tendrás mucha energía y fuerzas, para afrontar el año con mucho ánimo, para todo. En momentos de estrés y de fatiga, un masaje en los pies y te quedarás nuevo. Evita la ansiedad bajo ningún concepto, porque te desequilibra y somatizas tu estado nervioso en tu salud. Lo mejor sería, que hicieras una Meditación diaria o Yoga o Taichi. Tu naturaleza respondería muy bien a cualquiera de estas técnicas de relajación.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEn la vida sentimental tenderás a la estabilidad. No habrá cambios, tanto si estás casado como soltero, sentirás, que debes continuar igual que estabas al empezar el año. Lo que está claro, es que será un año en el que, tu vida sexual será muy activa. Si estás casado o en pareja, te apetecerá probar cosas nuevas y experimentar. Ecolucionarás al respecto. Si estás sotero, lo mismo. Aunque no tengas pareja, tendrás más relaciones esporádicas, siempre en busca del sexo y la admiración del sexo opuesto y lo vas a pasar bien con el juego de la seducción.\n");
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
				printf("\nEste año realmente tienes que agarrarte fuerte porque nada te tendrá. Sobresaldrás en todas las actividades que te propongas. La amistad estará a la orden del día y ¡será lo más importante para ti!\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud es muy importante este año. Mejoras con respecto a los años anteriores. Tendrás mucha energía y fuerzas, para afrontar el año con mucho ánimo, para todo. En momentos de estrés y de fatiga, un masaje en los pies y te quedarás nuevo. Evita la ansiedad bajo ningún concepto, porque te desequilibra y somatizas tu estado nervioso en tu salud. Lo mejor sería, que hicieras una Meditación diaria o Yoga o Taichi. Tu naturaleza respondería muy bien a cualquiera de estas técnicas de relajación.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEn la vida sentimental tenderás a la estabilidad. No habrá cambios, tanto si estás casado como soltero, sentirás, que debes continuar igual que estabas al empezar el año. Lo que está claro, es que será un año en el que, tu vida sexual será muy activa. Si estás casado o en pareja, te apetecerá probar cosas nuevas y experimentar. Ecolucionarás al respecto. Si estás sotero, lo mismo. Aunque no tengas pareja, tendrás más relaciones esporádicas, siempre en busca del sexo y la admiración del sexo opuesto y lo vas a pasar bien con el juego de la seducción.\n");
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
				printf("\nEscorpio este 2021 deja a un lado tus miedos y permítete brillar como nunca. Eso sí ten cuidado de no ir más allá de los límites en tus relaciones amorosas o laborales. No olvides que tu talento y tu carisma no te servirán de excusa siempre.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud será irregular, porque tus energías serán bajas y pasarás épocas de cansancio. Está claro, que tu estado general es peor que el año anterior. Lo que tienes que procurar, es descansar y dormir tus horas, para no agotarte. Si te agotas, somatizarás y enfermarás. Tendrás, que estar pendiente de tu salud, para no caer en un círculo vicioso.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEl amor será inestable este año. Si estás en pareja, pasarás por una crisis y tendrás que llegar a acuerdos para resolverlo. Será un año duro y lleno de conversaciones y concesiones, para intentar salvar el matrimonio o la relación. Algunos se separarán y otros lograrán reconciliarse y estabilizar su relación sentimental. Si estás soltero, saldrás mucho a divertirte y tendrás varias relaciones esporádicas. Algún familiar podría presentarte a alguien de quien te enamores. Incluso podrías enamorarte online.\n");
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
				printf("\nEscorpio este 2021 deja a un lado tus miedos y permítete brillar como nunca. Eso sí ten cuidado de no ir más allá de los límites en tus relaciones amorosas o laborales. No olvides que tu talento y tu carisma no te servirán de excusa siempre.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nLa salud será irregular, porque tus energías serán bajas y pasarás épocas de cansancio. Está claro, que tu estado general es peor que el año anterior. Lo que tienes que procurar, es descansar y dormir tus horas, para no agotarte. Si te agotas, somatizarás y enfermarás. Tendrás, que estar pendiente de tu salud, para no caer en un círculo vicioso.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEl amor será inestable este año. Si estás en pareja, pasarás por una crisis y tendrás que llegar a acuerdos para resolverlo. Será un año duro y lleno de conversaciones y concesiones, para intentar salvar el matrimonio o la relación. Algunos se separarán y otros lograrán reconciliarse y estabilizar su relación sentimental. Si estás soltero, saldrás mucho a divertirte y tendrás varias relaciones esporádicas. Algún familiar podría presentarte a alguien de quien te enamores. Incluso podrías enamorarte online.\n");
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
				printf("\nEl 2021 se presenta cargado de sorpresas para los nacidos bajo este signo zodiacal, por lo que será necesario que abras tu mente para dar lo mejor de ti. Además, tu vida social será más activa y tendrás mucho más ánimo que el año anterior.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nDebido a la actividad física que practicas tu salud se verá favorecida, pues con la eliminación de toxinas estás contribuyendo a reforzar la resistencia de tu organismo. Sin embargo, debes cuidar tu presión, además de evitar comida chatarra y condimentos; así que dependerá de ti que no tengas molestias en el estómago.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nA lo largo de este año, los Sagitario experimentarán el amor al máximo y pasarán gratos momentos con amistades y seres queridos. Tendrán aciertos a través de la intuición e iniciativas que serán apoyadas por terceras personas. Asimismo, podrían surgir propuestas amorosas que deberán analizar bien si les convienen o no.\n");
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
				printf("\nEl 2021 se presenta cargado de sorpresas para los nacidos bajo este signo zodiacal, por lo que será necesario que abras tu mente para dar lo mejor de ti. Además, tu vida social será más activa y tendrás mucho más ánimo que el año anterior.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nDebido a la actividad física que practicas tu salud se verá favorecida, pues con la eliminación de toxinas estás contribuyendo a reforzar la resistencia de tu organismo. Sin embargo, debes cuidar tu presión, además de evitar comida chatarra y condimentos; así que dependerá de ti que no tengas molestias en el estómago.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nA lo largo de este año, los Sagitario experimentarán el amor al máximo y pasarán gratos momentos con amistades y seres queridos. Tendrán aciertos a través de la intuición e iniciativas que serán apoyadas por terceras personas. Asimismo, podrían surgir propuestas amorosas que deberán analizar bien si les convienen o no.\n");
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
				printf("\nAño próspero y feliz. Salud buena. Gran poder comunicador. Los amigos muy importantes, un gran apoyo. El amor estable. Trabajo más creativo. La familia rebelde, pero divertida. El dinero muy bien. Estudios muy bien.\n");
				printf("\n-PARA LA SALUD: \n");
				printf("\nSerá un año con buena salud general y de bienestar para los nativos de este signo. Algunos pequeños problemas menores podrían llegar a presentarse pero no serán situaciones que pongan en riesgo la vida normal de Capricornio. Los buenos hábitos de alimentación deberán de ser incluidos en este año para lograr permanecer saludables y en forma. El ejercicio es una muy buena opción para el signo durante este período de su vida.\n");
				printf("\n-PARA LAS RELACIONES: \n");
				printf("\nEste año que inicia puede ser muy bueno en el campo sentimental y del amor, las relaciones estables puede iniciarse y la vida marital será muy satisfactoria. La comprensión y la lealtad estarán presentes para ayudarte a fortalecer tus vínculos sentimentales. Tendrás que tener un cuidado especial con tus palabras pues podrían herir a quienes te rodean incluyendo a la persona que tiene un significado especial en tu vida.\n");
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
