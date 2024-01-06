#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Structure pour représenter une question
struct Question {
    char Qst[100];        // Texte de la question
    char Rep[4][500];     // Options de réponse
    int Correct;          // Option correcte
};
// Prototypes des fonctions
void LanguageC(int* score);
void LanguageCS(int* score);
void LanguagePython(int* score);
void LanguageJS(int* score);
int poserQuestion(struct Question q);
void enregistrerScore(char* langue, int score);
void lireAnciensScores();

int main() {
    // Initialiser les scores pour chaque langage
    int scoreC = 0, scoreCS = 0, scorePython = 0, scoreJS = 0;
    int choix;


    // Afficher l'en-tête du programme
    printf("###############################################################################\n"
           "###############################################################################\n"
           "#############################-- Je suis PROGRAMMEUR --#########################\n"
           "###############################################################################\n"
           "###############################################################################\n");

    // Lire les anciens scores au début du programme
    lireAnciensScores();

    printf("##--- C'est parti ---##\n");

    while (1) {
        // Afficher le menu des options de langage
        printf("##--> Choisir une langue :\n"
               "##--> 1]-> C\n"
               "##--> 2]-> Python\n"
               "##--> 3]-> C#\n"
               "##--> 4]-> JavaScript\n"
               "##--> 5]-> Quitter...\n");

        // Obtenir le choix de l'utilisateur
        printf("##-- Votre Choix : ");
        scanf("%d", &choix);

        // Traiter le choix de l'utilisateur
        switch (choix) {
            case 1:
                LanguageC(&scoreC);
                enregistrerScore("C", scoreC);
                break;
            case 2:
                LanguagePython(&scorePython);
                enregistrerScore("Python", scorePython);
                break;
            case 3:
                LanguageCS(&scoreCS);
                enregistrerScore("C#", scoreCS);
                break;
            case 4:
                LanguageJS(&scoreJS);
                enregistrerScore("JavaScript", scoreJS);
                break;
            case 5:
                printf("Au revoir !!\n");
                exit(0);
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }
    }

    return 0;
}

// Fonction pour Initialiser les questions de language C
void LanguageC(int* score)
{

   struct Question question[5];
   //Question 1
    strcpy(question[0].Qst,"A. Quelle est la fonction principale utilisée pour l'exécution d'un programme C?");
    strcpy(question[0].Rep[0],"main()");
    strcpy(question[0].Rep[1],"struct()");
    strcpy(question[0].Rep[2],"void()");
    strcpy(question[0].Rep[3],"printf()");
    question[0].Correct=1;
    //Question 2
    strcpy(question[1].Qst,"B. Comment déclarez-vous une variable en langage C?");
    strcpy(question[1].Rep[0],"variable x;");
    strcpy(question[1].Rep[1],"x = int;");
    strcpy(question[1].Rep[2],"int x;");
    strcpy(question[1].Rep[3],"var x;");
    question[1].Correct=3;
    //Question 3
    strcpy(question[2].Qst,"C. Quelle est la différence entre '=' et '==' en langage C?");
    strcpy(question[2].Rep[0],"Addition et soustraction");
    strcpy(question[2].Rep[1],"Affectation et comparaison");
    strcpy(question[2].Rep[2],"Division et multiplication");
    strcpy(question[2].Rep[3],"ET logique et OU logique");
    question[2].Correct=2;
    //Question 4
    strcpy(question[3].Qst, "D. Quel opérateur est utilisé pour accéder à l'adresse d'une variable en langage C?");
    strcpy(question[3].Rep[0],"%");
    strcpy(question[3].Rep[1],"*");
    strcpy(question[3].Rep[2],"#");
    strcpy(question[3].Rep[3],"&");
    question[3].Correct=4;
    //Question 5
    strcpy(question[4].Qst,"E. Comment déclarez-vous une chaîne de caractères en langage C?");
    strcpy(question[4].Rep[0]," str = \"Hello\"");
    strcpy(question[4].Rep[1],"chaîne str[50]");
    strcpy(question[4].Rep[2],"char str[50]");
    strcpy(question[4].Rep[3],"string str");
    question[4].Correct=3;
    // Poser chaque question et vérifier la réponse dans la fonction
    for (int i = 0; i < 5; i++) {
        *score += poserQuestion(question[i]);

        printf("\n");
    }

    // Afficher le score final
    printf("Votre score final en C est : %d/5\n", *score);

}
// Fonction pour Initialiser les questions de language C#
void LanguageCS(int* score)
{

    struct Question question[5];
    //Question 1
    strcpy(question[0].Qst,"A. Comment demandez-vous à l'utilisateur de saisir une valeur en C#?");
    strcpy(question[0].Rep[0],"printf()");
    strcpy(question[0].Rep[1],"Console.ReadLine()");
    strcpy(question[0].Rep[2],"input()");
    strcpy(question[0].Rep[3],"read()");
    question[0].Correct=2;
    //Question 2
    strcpy(question[1].Qst,"B. Quelle est la syntaxe correcte pour une boucle for en C# qui s'exécute 5 fois?");
    strcpy(question[1].Rep[0],"'for (i = 1; i < 5; i++)'");
    strcpy(question[1].Rep[1],"'for (i = 1; i <= 5; i++)'");
    strcpy(question[1].Rep[2],"'for (i = 0; i <= 5; i++)'");
    strcpy(question[1].Rep[3],"'for (i = 2; i <= 5; i++)'");
    question[1].Correct=2;
    //Question 3
    strcpy(question[2].Qst,"C.  Comment déclarez-vous une fonction en C#?");
    strcpy(question[2].Rep[0],"method void MaFonction() {}");
    strcpy(question[2].Rep[1],"function MaFonction() {}");
    strcpy(question[2].Rep[2],"void MaFonction() {}");
    strcpy(question[2].Rep[3],"def MaFonction() {}");
    question[2].Correct=3;
    //Question 4
    strcpy(question[3].Qst, "D. Quel est le rôle du mot-clé using en C#?");
    strcpy(question[3].Rep[0]," Pour utiliser une bibliothèque");
    strcpy(question[3].Rep[1]," Pour déclarer une variable");
    strcpy(question[3].Rep[2],"Pour inclure un fichier externe");
    strcpy(question[3].Rep[3],"Pour fermer un programme");
    question[3].Correct=1;
    //Question 5
    strcpy(question[4].Qst,"E. Comment utilisez-vous une déclaration if-else en C#?");
    strcpy(question[4].Rep[0],"'if (condition) {} else {}'");
    strcpy(question[4].Rep[1],"'if (condition) {} otherwise {}'");
    strcpy(question[4].Rep[2],"'condition ? {} : {}'");
    strcpy(question[4].Rep[3],"'if {} else {} (condition)'");
    question[4].Correct=1;
    // Poser chaque question et vérifier la réponse dans la fonction
    for (int i = 0; i < 5; i++) {
        *score += poserQuestion(question[i]);
        printf("\n");
    }

    // Afficher le score final
    printf("Votre score final en C# est : %d/5\n", *score);
}
// Fonction pour Initialiser les questions de language Python
void LanguagePython(int* score)
{
    // Initialiser les questions
    struct Question question[5];

    // Question 1
    strcpy(question[0].Qst, "A. Comment demandez-vous à l'utilisateur de saisir une valeur en Python?");
    strcpy(question[0].Rep[0], "print()");
    strcpy(question[0].Rep[1], "input()");
    strcpy(question[0].Rep[2], "read()");
    strcpy(question[0].Rep[3], "console.readline()");
    question[0].Correct = 2;

    // Question 2
    strcpy(question[1].Qst, "B. Quelle est la syntaxe correcte pour une boucle for en Python qui s'exécute 5 fois?");
    strcpy(question[1].Rep[0], "for i in range(1, 5):");
    strcpy(question[1].Rep[1], "for i in range(1, 6):");
    strcpy(question[1].Rep[2], "for i in range(0, 5):");
    strcpy(question[1].Rep[3], "for i in range(2, 6):");
    question[1].Correct = 2;

    // Question 3
    strcpy(question[2].Qst, "C. Comment déclarez-vous une fonction en Python?");
    strcpy(question[2].Rep[0], "function MaFonction():");
    strcpy(question[2].Rep[1], "void MaFonction():");
    strcpy(question[2].Rep[2], "def MaFonction():");
    strcpy(question[2].Rep[3], "method MaFonction():");
    question[2].Correct = 2;

    // Question 4
    strcpy(question[3].Qst, "D. Quel est le rôle du mot-clé 'import' en Python?");
    strcpy(question[3].Rep[0], "Pour utiliser une bibliothèque");
    strcpy(question[3].Rep[1], "Pour déclarer une variable");
    strcpy(question[3].Rep[2], "Pour inclure un fichier externe");
    strcpy(question[3].Rep[3], "Pour fermer un programme");
    question[3].Correct = 1;

    // Question 5
    strcpy(question[4].Qst, "E. Comment utilisez-vous une déclaration if-else en Python?");
    strcpy(question[4].Rep[0], "if condition: \n    # Code si vrai \nelse: \n    # Code sinon");
    strcpy(question[4].Rep[1], "if condition: \n    # Code si vrai \notherwise: \n    # Code sinon");
    strcpy(question[4].Rep[2], "condition ? # Code si vrai : # Code sinon");
    strcpy(question[4].Rep[3], "if: \n    # Code si vrai \nelse: \n    # Code sinon");
    question[4].Correct = 1;

    // Poser chaque question et vérifier la réponse dans la fonction
    for (int i = 0; i < 5; i++) {
        *score += poserQuestion(question[i]);
        printf("\n");
    }

    // Afficher le score final
    printf("Votre score final en Python est : %d/5\n", *score);
}
// Fonction pour Initialiser les questions de language JS
void LanguageJS(int* score)
{
    // Initialiser les questions
    struct Question question[5];

    // Question 1
    strcpy(question[0].Qst, "A. Comment demandez-vous à l'utilisateur de saisir une valeur en JavaScript?");
    strcpy(question[0].Rep[0], "console.print()");
    strcpy(question[0].Rep[1], "prompt()");
    strcpy(question[0].Rep[2], "read()");
    strcpy(question[0].Rep[3], "input()");
    question[0].Correct = 2;

    // Question 2
    strcpy(question[1].Qst, "B. Quelle est la syntaxe correcte pour une boucle for en JavaScript qui s'exécute 5 fois?");
    strcpy(question[1].Rep[0], "for (let i = 1; i < 5; i++)");
    strcpy(question[1].Rep[1], "for (let i = 1; i <= 5; i++)");
    strcpy(question[1].Rep[2], "for (let i = 0; i <= 5; i++)");
    strcpy(question[1].Rep[3], "for (let i = 2; i <= 5; i++)");
    question[1].Correct = 2;

    // Question 3
    strcpy(question[2].Qst, "C. Comment déclarez-vous une fonction en JavaScript?");
    strcpy(question[2].Rep[0], "function MaFonction() {}");
    strcpy(question[2].Rep[1], "void MaFonction() {}");
    strcpy(question[2].Rep[2], "def MaFonction() {}");
    strcpy(question[2].Rep[3], "method MaFonction() {}");
    question[2].Correct = 1;

    // Question 4
    strcpy(question[3].Qst, "D. Quel est le rôle du mot-clé 'console.log' en JavaScript?");
    strcpy(question[3].Rep[0], "Afficher un message dans la console");
    strcpy(question[3].Rep[1], "Déclarer une variable");
    strcpy(question[3].Rep[2], "Inclure un fichier externe");
    strcpy(question[3].Rep[3], "Fermer un programme");
    question[3].Correct = 1;

    // Question 5
    strcpy(question[4].Qst, "E. Comment utilisez-vous une déclaration if-else en JavaScript?");
    strcpy(question[4].Rep[0], "if (condition) {} else {}");
    strcpy(question[4].Rep[1], "if (condition) {} otherwise {}");
    strcpy(question[4].Rep[2], "condition ? {} : {}");
    strcpy(question[4].Rep[3], "if {} else {} (condition)");
    question[4].Correct = 1;
    // Poser chaque question et vérifier la réponse dans la fonction
    for (int i = 0; i < 5; i++) {
        *score += poserQuestion(question[i]);
        printf("\n");
    }

    // Afficher le score final
    printf("Votre score final en JavaScript est : %d/5\n", *score);

}
// Fonction pour poser une question et vérifier la réponse de l'utilisateur
int poserQuestion(struct Question q) {
    printf("%s\n", q.Qst);

    for (int i = 0; i < 4; i++) {
        printf("    %d. %s\n", i + 1, q.Rep[i]);
    }

    int reponseUtilisateur;
    printf("Votre réponse : ");
    scanf("%d", &reponseUtilisateur);

    if (reponseUtilisateur == q.Correct) {
        printf("Bonne réponse!\n");
        return 1;  // La réponse est correcte
    } else {
        printf("Mauvaise réponse. La réponse correcte est l'option %d\n", q.Correct);
        return 0;  // La réponse est incorrecte
    }
}
// Fonction pour enregistrer les scores dans un fichier
void enregistrerScore(char* langue, int score) {
    FILE* fichier = fopen("scores.txt", "a");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        exit(1);
    }

    fprintf(fichier, "Langue: %s, Score: %d\n", langue, score);

    fclose(fichier);
}
// Fonction pour lire les anciens scores depuis un fichier
void lireAnciensScores() {
    FILE* fichier = fopen("scores.txt", "r");

    if (fichier == NULL) {
        // Le fichier n'existe pas encore, pas besoin de lire les anciens scores
        return;
    }

    printf("Anciens Scores :\n");

    char ligne[100];
    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        printf("%s", ligne);
    }

    fclose(fichier);

    // Effacer le contenu du fichier
    fichier = fopen("scores.txt", "w");
    if (fichier == NULL) {
        printf("Erreur lors de l'effacement du fichier.\n");
        exit(1);
    }
    fclose(fichier);
}

