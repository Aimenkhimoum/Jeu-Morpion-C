# Morpion : le jeu du Tic-Tac-Toe

**Programmeur :** KHIMOUM Aimen Mohamed  
**Date :** 10/12/2024

---

## Description du jeu
Le jeu **Morpion**, également connu sous le nom de **Tic-Tac-Toe**, est un jeu de société classique où deux joueurs s'affrontent sur une grille de **3x3 cases**. 

L'objectif est d'aligner trois symboles identiques horizontalement, verticalement ou en diagonale. 
- Le premier joueur utilise le symbole **'X'**.
- Le second joueur utilise le symbole **'O'**.
- Si la grille est remplie sans vainqueur, la partie se termine par une égalité.

## Installation
Le projet est conçu pour les systèmes **Linux/Unix**.

1. **Extraction :** Décompressez l'archive du jeu (cela créera un répertoire nommé `mini_projet`).
2. **Compilation :** Ouvrez un terminal dans le répertoire du jeu et compilez le programme avec la commande suivante :
   ```bash
   make
   ```

## Comment jouer   
   ```bash
   ./morpion_jeu
   ```
## Menu Principal

Au lancement, un menu interactif vous propose les options suivantes :

Commencer une nouvelle partie : Affiche une grille vide et lance le tour par tour.

Afficher les scores : Affiche les statistiques cumulées (victoires, défaites, égalités).

Quitter le jeu : Ferme le programme.

## Déroulement d'une partie
Les joueurs indiquent leur coup en saisissant le numéro de la ligne et de la colonne où ils souhaitent placer leur symbole. Le programme vérifie automatiquement si la case est libre et si un joueur a gagné.

## Règles du jeu
Départ : Le joueur 'X' commence toujours la partie.

Validité : Les joueurs doivent impérativement choisir une case vide.

Fin de partie : Le jeu s'arrête dès qu'un alignement de 3 est détecté ou que la grille est pleine.

## Système de points :

Victoire : 2 points pour le gagnant.

Égalité : 1 point pour chaque joueur.

## Notes sur le développement
Ce projet m'a permis de consolider mes bases en langage C à travers un cas pratique amusant. Les points clés abordés sont :

La gestion des entrées/sorties utilisateur.

L'implémentation d'algorithmes de vérification de victoire (lignes, colonnes, diagonales).

La conception d'une interface en ligne de commande claire et d'un système de score persistant.
