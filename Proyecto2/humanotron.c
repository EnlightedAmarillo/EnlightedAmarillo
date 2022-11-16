#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *poemas[] = {\
     "Alta noche\n\
de vértices quemados\n\
de subsueño de cauces de preausencia de huracanados rostrosque trasmigran\n\
de complejos de niebla de gris sangre\n\
de soterráneas ráfagas de ratas de trasfiebre invadida\n\
con su animal doliente cabellera de líbido\n\
su satélite angora\n\
y sus ramos de sombras y su aliento que entrecorre las algas del pulsode lo inmóvil\n\
desde otra arena oscura y otro ahora en los huesos\n\
mientras las piedras comen su moho de anestesia y los dedos se apagany arrojan su ceniza\n\
desde otra orilla prófuga y otras costas refluye a otro silencio\n\
a otras huecas arterias\n\
a otra grisura\n\
refluye\n\
y se desqueja",\
\
"A veces tengo ganas de ser cursi\n\
para decir: La amo a usted con locura.\n\
A veces tengo ganas de ser tonto\n\
para gritar: ¡La quiero tanto!\n\
\n\
A veces tengo ganas de ser niño\n\
para llorar acurrucado en su seno.\n\
\n\
A veces tengo ganas de estar muerto\n\
para sentir,\n\
bajo la tierra húmeda de mis jugos,\n\
que me crece una flor\n\
rompiéndome el pecho,\n\
una flor, y decir:\n\
Esta flor, para usted.\n",
\
"¿Mi tierra?\n\
Mi tierra eres tú.\n\
\n\
¿Mi gente?\n\
Mi gente eres tú.\n\
\n\
El destierro y la muerte\n\
para mi están adonde\n\
no estés tú.\n\
\n\
¿Y mi vida?\n\
Dime, mi vida,\n\
¿qué es, si no eres tú?\n",\
\
"Yo persigo una forma que no encuentra mi estilo,\n\
botón de pensamiento que busca ser la rosa;\n\
se anuncia con un beso que en mis labios se posa\n\
el abrazo imposible de la Venus de Milo.\n\
\n\
Adornan verdes palmas el blanco peristilo;\n\
los astros me han predicho la visión de la Diosa;\n\
y en mi alma reposa la luz como reposa\n\
el ave de la luna sobre un lago tranquilo.\n\
\n\
Y no hallo sino la palabra que huye,\n\
la iniciación melódica que de la flauta fluye\n\
y la barca del sueño que en el espacio boga;\n\
\n\
y bajo la ventana de mi Bella-Durmiente,\n\
el sollozo continuo del chorro de la fuente\n\
y el cuello del gran cisne blanco que me interroga.\n",\
\
"Amar es este tímido silencio\n\
cerca de ti, sin que lo sepas,\n\
y recordar tu voz cuando te marchas\n\
y sentir el calor de tu saludo.\n\
\n\
Amar es aguardarte\n\
como si fueras parte del ocaso,\n\
ni antes ni después, para que estemos solos\n\
entre los juegos y los cuentos\n\
sobre la tierra seca.",\
\
"Mi corazón me han robado;\n\
y Amor, viendo mis enojos,\n\
me dijo: Fuéte llevado\n\
por los más hermosos ojos\n\
que desque vivo he mirado.\n\
\n\
Gracias sobrenaturales\n\
te lo tienen en prisión.\n\
Y si Amor tiene razón,\n\
Señora, por las señales,\n\
vos tenéis mi corazón.\n",\
\
"Podrá nublarse el sol eternamente;\n\
Podrá secarse en un instante el mar;\n\
Podrá romperse el eje de la Tierra\n\
Como un débil cristal.\n\
¡Todo sucederá! Podrá la muerte\n\
Cubrirme con su fúnebre crespón;\n\
Pero jamás en mí podrá apagarse\n\
La llama de tu amor.\n",\
\
"Habré de levantar la vasta vida \n\
que aún ahora es tu espejo: \n\
cada mañana habré de reconstruirla. \n\
Desde que te alejaste, \n\
cuántos lugares se han tornado vanos \n\
y sin sentido, iguales \n\
a luces en el día. \n\
Tardes que fueron nicho de tu imagen, \n\
músicas en que siempre me aguardabas, \n\
palabras de aquel tiempo, \n\
yo tendré que quebrarlas con mis manos. \n\
¿En qué hondonada esconderé mi alma \n\
para que no vea tu ausencia \n\
que como un sol terrible, sin ocaso, \n\
brilla definitiva y despiadada? \n\
Tu ausencia me rodea \n\
como la cuerda a la garganta, \n\
el mar al que se hunde.\n"
    };

    int rnd;
    rnd = arc4random() % 8;
    printf("%s\n", poemas[rnd]);
    return (0);
}