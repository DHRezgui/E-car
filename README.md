# DH-car

## Introduction:
DH-Car est une application cmd ouverte de location des voitures écrite en langage C.

Elle permet de:

  * Entrer une voiture à louer
  
  * Afficher la description d'une voiture à la choix

  * Modifier la description et l'état d'une voiture existante

  * Supprimer touts les voitures en pannes

  * Restaurer une voiture supprimée

  * Louer une voiture

  * Afficher l'historique des locations

  * Retour d'une voiture en cas de réclamation

  * Changer le mot de passe

  * Quitter l'application

## Description:
Les deux premières pages sont deux pages introductives.

A la première,tu trouve le bienvenue et en cliquant sur '>' tu passe à la deuxième où tu trouve le service donné et une ouverture

Une autre fois il faut cliquer sur '>' pour avancer

### -Phase d'inscription ou d'identification
> Rq: Puisque c'est ton première fois dans l'application il faut s'identifier d'abbord

Deux choix sont possibles: 

I->Inscrire

C->Connecter

_ Si t'as choisis 'C' avant 'I' vous allez entrer dans la phase "Login" et puisque vous n'avez pas inscris une message d'erreur sera affichée pendant 3 essais si non tu vas rentré à la phase "Identification".

_ Tu dois entré ton: prénom,nom,date de naissance,adresse,numéro de téléphone,adresse mail et mot de passe.

_ Phase d'identification: 

Tu dois entré ton adresse mail et ton mot de passe et il faut qu'ils sont correctes.

> Maintenant vous-êtes dans l'accueil où tu trouve une liste de choix

En entrant le numéro du choix vous pouvez accéder à cette option

> Rq: un numéro inexistant du choix affiche une message d'erreur

### 1) Entrer une voiture:   Page "Entrer une voiture"
_ Remplir les données demandées tq: id,disponibilité,prix par jour,la marque,le modéle,ext.
> Si vous avez terminé,tu vas rentré automatiquement à la page d'acceuil quelque soit le choix

### 2) Affichage:  Page "AFF Discreption"
_ Pour afficher la déscription d'une voiture, il faut uniquement entrer la réference de la voiture

### 3) Modification:  Page"Modification"
_ Une liste de choix sera affiché et çelon ton choix tu peut modifié la description d'une telle voiture

> Le choix doit être existant si non une message d'erreur sera affichée

_ Il faut entrer la réference du voiture

> La réference doit être existant si non une message d'erreur sera affichée

### 4) Suppression:
* Page "Suppression"
  
  -Entrer la réference de la voiture à supprimer

  > Une affichage va apparaitre si la voiture a étè supprimée ou non

* Page "Suppression des voitures en pannes"

  - Affichage: "Aucunne voiture en panne" ou "Toutes les voitures en pannes ont été supprimés avec succés"

### 5) Restauration: Page "Restauration"
_ Il faut entrer la réference de la voiture à restaurer

> Une message sera affichée si la voiture a étè restaurée ou non

### 6) Location: Page "Louer une voiture"
_ Entrer la réfernce

> Le système va vérifié si cette voiture est disponible ou non

_ Si elle est disponible vous continuez les démarches si non une message sera affichée

### 7) Affichage Historique: Page "Historique des Locations"
-> Toutes l'historique des locations sera affiché

### 8) Reclamation: Page "Reclamation"
_ Il faut entrer le numéro de location,la réference de la voiture,ton réclamation et l'adresse de retour

> Une message d'erreur sera affichéé si le numéro de location ou la réference sont incorrectes

### 9) Modification d'information personnelle: Page "Changement de MDP"
_ Entrer ton adresse mail

> Le système va vérifié si l'adresse est correcte ou non

_ Si il est correcte -> Entrer ton nouvelle mot de passe

> Affichage

### 10) Quitter :
Affichage: "Au revoir !!"

> Cliquer sur une button pour quitter

