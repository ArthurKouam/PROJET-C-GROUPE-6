#include "etudiant.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Vérifie si un matricule existe
int matriculeExiste(Etudiant *etudiants[], int nombre, char *matricule) {
    for (int i = 0; i < nombre; i++) {
        if (strcmp(etudiants[i]->matricule, matricule) == 0) 
        return 1;
    }
    return 0;
}

// Retourne l'année actuelle (2026)
int anneeActuelle() {
    return 2026; // Année fixe comme demandé
}

// Retourne l'année actuelle (2026)
int anneeActuelle() {
    return 2026; // Année fixe comme demandé
}

// Charge les étudiants depuis fichier
void chargerEtudiants(Etudiant *etudiants[], int *nombre) {
    FILE *f = fopen("etudiants.txt", "r");
    if (!f) return;
    
    *nombre = 0;
    while (*nombre < MAX_ETUDIANTS) {
        Etudiant *e = malloc(sizeof(Etudiant));
        if (!e) break;
        
        if (fscanf(f, "%14[^;];%49[^;];%49[^;];%d;%d;%d;%49[^;];%49[^;];%49[^\n]\n",
                  e->matricule, e->nom, e->prenom, &e->jour, &e->mois, &e->annee,
                  e->departement, e->region, e->filiere) != 9) {
            free(e);
            break;
        }
        
        etudiants[*nombre] = e;
        (*nombre)++;
    }
    fclose(f);
}