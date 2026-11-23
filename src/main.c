#include "etudiant.h"

int main(void)
{
    Etudiant e1 = {1, "Amina Benali",  {16.5, 17.0, 15.5, 18.0}};
    Etudiant e2 = {2, "Youssef Alami", { 9.0, 11.5,  8.0, 10.0}};

    afficher_etudiant(&e1);
    afficher_etudiant(&e2);

    return 0;
}
