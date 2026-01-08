# PROJET-C-GROUPE-6
# Système de Gestion des Étudiants - ENSPMETU

# Description
Ce programme est un système de gestion des étudiants développé en langage C. Il permet de gérer efficacement les informations des étudiants de l'ENSPM(École Nationale Supérieure Polytechnique ).

# Fonctionnalités

# 1. Gestion des Étudiants
- **Enregistrement** : Ajouter de nouveaux étudiants avec génération automatique de matricule (format: 26ENSPMETU001)
- **Modification** : Modifier les informations d'un étudiant existant
- **Recherche** : Rechercher un étudiant par nom
- **Suppression** : Supprimer un étudiant de la base de données

# 2. Tris et Recherches
- **Tri alphabétique** : Trier les étudiants par nom et afficher le résultat
- **Tri par filière** : Trier les étudiants par filière d'étude
- **Recherche dichotomique** : Recherche rapide d'un étudiant dans une liste triée

# 3. Calculs et Informations
- **Calcul d'âge** : Calculer l'âge d'un étudiant spécifique
- **Affichage complet** : Afficher tous les étudiants dans un tableau formaté
- **Statistiques** : Afficher des statistiques détaillées sur la population étudiante

# 4. Statistiques Avancées (NOUVEAU)
Le programme génère désormais des statistiques complètes :
- **Répartition par âge** : Pourcentage d'étudiants par tranche d'âge
- **Répartition par région** : Distribution géographique des étudiants
- **Répartition par filière** : Pourcentage d'étudiants dans chaque spécialité
- **Top 5 des départements** : Les départements les plus représentés

# Structure des Données
# Format du Matricule
- Nouvel étudiant : `26ENSPMETU001` (26 = année, 001 = numéro séquentiel)
- Ancien étudiant : Format personnalisé (ex: `25ENSPMETU001`)

# Informations Stockées
- Matricule (14 caractères max)
- Nom (49 caractères max)
- Prénom (49 caractères max)
- Date de naissance (jour, mois, année)
- Département (49 caractères max)
- Région (49 caractères max)
- Filière (49 caractères max)

# Filières Disponibles
1. Réseau et Télécommunication
2. Sécurité et Cryptographie
3. Génie Logiciel
4. Robotique et Système Embarqué
5. Data Science

# Fonctionnement

# Installation
1. Compiler le programme avec un compilateur C (gcc recommandé) :
