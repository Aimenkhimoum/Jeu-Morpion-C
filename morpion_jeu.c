#include <stdio.h>
#include <stdlib.h>
#include "morpion.h"
   int main()
{
/*affichage de bienvenue avec des couleurs */
   printf("\033[1;32m %c \033[0m  ----- BIENVENUE DANS LE JEU MORPION ----- \033[1;31m %c \033[0m\n",'X' , 'O');
    int score_x=0,score_o=0; /*initialiser score de X et O a 0 */
int c; /*une variable entiere qui sert d'un choix de l'utilisateur qu'on l'utilise pour choisir dans switch */
int winner; /*variable booleene qui devient 1 si le joueur gagne , 0 si non */
while(c!=3){ /*une condition pour afficher le menu est rester dans le jeu tant que l'utilisateur ne veut pas quitter (option 3 du menu )*/
     menu(); /*appel a la fonction menu pour l'affichage du menu */
     scanf("%d",&c);

     switch (c){
     /*boucle switch qui choisit une action selon le choix de l'utilisateur */

     case 1 :
   /*premier choix c'est commencer une nouvelle partie */
   winner=0; /*winner initalise a 0 car y'a pas encore de gagnant */
    char tab[3][3]; /*declarer une matrice tab 3x3 qui nous sert d'une grille */
    initialiser_grille(tab); /*appel a la fonction initialiser_grille pour que toutes les cases de la grille deviennent vide , autrement dit remplace par espace ' ' */
    afficherGrille(tab); /*appel a la fonction afficherGrille pour l'affichage de la grille */

     while((grille_pleine(tab)==0) && (winner==0)){
     /*le jeu commence et les joueurs commencent a jouer a tour de role jusqu'a ce que y'aura un gagnant ou y'aura une egalite ca veut dire la grillee est pleine */ 
    player_choix(tab,'X'); /*appel a la fonction player_choix pour le joueur X pour choisir la case qui ecrire dedans */
    afficherGrille(tab); /*affiche le changement apres avoir fait son choix le joueur X */
    if (verif_win(tab,'X')==1) {printf("BRAVOO le joueur \033[1;32m X \033[0m a gagner \n"); /*appel a la fonction verif_win pour verifier si le joueur X a gagner apres avoir effectue son choix */
    winner=1; /*si il a gagne winner devient 1 pour sortir de la boucle du jeu */
    score_x=score_x+2; /*son socre augmente de 2 si il gagne*/
    break; /*quitter la boucel avec break pour ne pas demander a l'utilisateur O de faire son choix car la partie est deja fini */}
    if((grille_pleine(tab)==1)){printf("le match est nul , vous etes tres forts tous les deux !"); /*si ya une egalite on affiche ce message*/
    score_o++; /*le score du joueur o augmente de 1 */
    score_x++; /*le score du joueur X augmente de 1 */
    break; /*sortir de la boucle de la partie car la partie est fini avec egalite*/
    }
    player_choix(tab,'O'); /*appel a la fonction player_choix pour demander au joueur O de choisir une case */
    afficherGrille(tab); /*affichage du changement de la grille apres le choix du joueur O */
    if (verif_win(tab,'O')==1){printf("BRAVOO le joueur \033[1;31m O \033[0m a gagner \n"); /*si le joueur O gagne on affiche ce message */
    winner=1; /*winner devient 1 pour quttier la boucle */
    score_o=score_o+2; /*le socre de O augmente de 2 */}
}
 break ; 
 case 2 : /*choix de l'affichage du score */
 if(score_o ==0 && score_x ==0){
  /*si les deux score sont a 0 ca veut dire que ils ont pas encore jouer */ 
                  printf("vous devez jouer au moins une partie \n");
                  }else {
                      printf("\n");
                      /*affichage du score avec les couleurs */
                      printf("***** \033[1;36m LE SCORE \033[0m *****\n");
                  printf("le score du joueur \033[1;32m %c \033[0m est : %d\n",'X',score_x);
                  printf("le score du joueur \033[1;31m %c \033[0m est : %d\n",'O',score_o);
                  }
  break ;

  case 3 : 
  /*si le joueur choisit de quitter le jeu on affiche au revoir */
  printf("Au revoir !\n") ;
  break ;
  default : printf("veuillez choisir l'un des choix proposés");
  /*si l'utilisateur choisit un autre choix que 1 ou 2 ou 3 , on lui demande d'entrer seulement un choix proposé */
  break;

}
}
}

   
