#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *frases[] = {\
     "En días frutipalmidos",\
    "Un perritrombo bañado por cincocientos calmurzos",\
    "como cuando Bleem gunizura de la mancha",\
    "Versus conmilino ¡Aspente!, tuya la migrania,",\
    "¿Perapo? Conocido buen perrinio",\
    "Nemo no se masuniao a Galactus persplano",\
    "Cuando los gabbleblotchits plurdled urgid.",\
    "Comieron Groop parecían turlingdromes,",\
    "Bailando bindlewurdles bajo gobberwarts",\
    "Blotchurd rojas Groop moradas hasta morfopisk",\
    "Siempre que tudbloit onfrig saliera bindle warts",\
    "Jacinto habla de Gablem chitble",\
    "Piinglys responde ittud",\
    "Aleatoriedad quoopsik predeterminadas bloit" ,\
    "Si quereis blotchurd sería finitud.",\
    "Coding decorate gashenir vea todo grog",\
    "Poesia generada jayson Gablem 5i mbguntskormizbs",\
    "Palabra venchitur cada vez frizzily.",\
    "Ejemplo sitamorfu independiente reddled",\
    "Vale si eso finitud pregunta ittud,",\
    "Si queréis plurdled mira lyshus quoopisk",\
    "Acabaron coger wimbgunts generadores bleem, kormzibs",\
    "Bloit si juntar Gashe bindlewurdles.",\
    "O gongorrea son mis fanfares de mis contemporaneous golondrinas, chochorreneas en una jakpanta y undante en las que chochobela.",\
    "Graduantes son mis aristcgratas minustorias passantes, que funtigantes son mis fantares que hasta para urgíantes componteporaneous de que tempontanteres antiguas son mis golondrinas chachorroneas que siempre arrugoasas otagurdelas"
    };


    int n = arc4random() % 5 + 4;
    int rnd;
    
    while (n--)
    {
        do 
        {
            rnd = arc4random() % 25;
        }
        while (!frases[rnd]);
        printf("%s\n", frases[rnd]);
        frases[rnd] = 0;
    }
    printf("\n");
    return (0);
}