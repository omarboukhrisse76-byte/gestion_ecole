#include <stdio.h>
#include "etudiant.h"
#include "stats.h"

void afficher_etudiant(const Etudiant *e)
{
    double moyenne = calculer_moyenne(e->notes, NB_NOTES_MAX);

    printf("Matricule : %d\n", e->id);
    printf("Nom       : %s\n", e->nom);
    printf("Moyenne   : %.2f\n", moyenne);
    printf("Mention   : %s\n\n", determiner_mention(moyenne));
}
