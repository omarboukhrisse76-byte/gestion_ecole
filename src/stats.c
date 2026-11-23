#include "stats.h"

double calculer_moyenne(const double *notes, int n)
{
    double somme = 0.0;
    int i;

    for (i = 0; i < n; i++)
        somme += notes[i];

    return somme / n;
}

const char* determiner_mention(double moyenne)
{
    if (moyenne >= 16.0) return "Tres Bien";
    if (moyenne >= 14.0) return "Bien";
    if (moyenne >= 12.0) return "Assez Bien";
    if (moyenne >= 10.0) return "Passable";
    return "Ajourne";
}
