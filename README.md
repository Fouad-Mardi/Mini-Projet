Bonjour,
Ce programme a été écrit par Mardi Fouad et Mohammed Oalid Moumni.

Explications :

1-Structure Question :
Une structure Question est définie pour stocker une question, ses options de réponse et la réponse correcte.
    
2-Fonctions :
    Des fonctions sont définies pour chaque langage ('LanguageC', 'LanguageCS', 'LanguagePython', 'LanguageJS') pour poser des questions spécifiques à chaque langage.
'poserQuestion' est une fonction qui affiche une question, les options de réponse et vérifie la réponse de l'utilisateur.
'enregistrerScore' enregistre le score dans un fichier.
'lireAnciensScores' lit les anciens scores à partir d'un fichier.

3-Main :
Le programme principal utilise une boucle infinie pour permettre à l'utilisateur de choisir un langage.
L'utilisateur peut choisir entre les langages C, Python, C#, JavaScript ou quitter le programme.
Les scores sont mis à jour et enregistrés après chaque session de quiz.

4-Affichage :
L'en-tête du programme est affiché au début.
Les anciens scores sont affichés au démarrage.
Un menu de choix de langage est affiché à chaque itération de la boucle.
Le programme se termine lorsque l'utilisateur choisit de quitter.

--> C'est un programme de quiz basique qui interagit avec l'utilisateur et enregistre les scores dans un fichier. 
Chaque fonction spécifique à un langage initialise les questions pour ce langage et les pose à l'utilisateur.
