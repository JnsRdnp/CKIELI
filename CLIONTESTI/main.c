#include <stdio.h>
#include <stdbool.h>

/*Tee C-kielinen ohjelma, joka kysyy käyttäjältä viikonpäivän numeron (1-7).
Numeron antamisen mukaan ohjelma tulostaa viikonpäivän. Jos käyttäjä antaamuun
numeron kuin 1-7, tulostuu käyttäjälle teksti ”Annoit sellaisen numeron, jolle
ei ole viikonpäivää” */

int main()
{
    int week;
    char * vp[]={"mon","tue","wed","thu","fri","sat","sun"};

    printf("Kerro viikonpaiva numerona(1-7)\n");
    scanf("%d",&week);

    if (week > 0 && week < 8)
    {
        printf("%s",vp[week-1]);
    }
    else
    {
        printf("Vaaranlainen input. Anna numero valilta 1-7\n");
    }

    return 0;
}
