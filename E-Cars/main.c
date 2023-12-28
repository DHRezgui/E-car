/***********
            app cmd <E-Cars> made by Dhia Rezgui
                    named "DH-Cars"
                                                 ***********/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>
#include <windows.h>
char Retour='<';
int pos=0;
int posV=0;
int posL=0;
int posR=0;
int posS=0;
typedef long long ll;
typedef struct date
{
  int day;
  int month;
  int year;
}date;
typedef struct Time
{
  int minute;
  int heure;
}Time;
typedef struct User
{
    char Prenom[50];
    char Nom[50];
    date Naissance;
    char Adresse[100];
    int Num;
    char AdMail[100];
    char Password[100];

}User;
typedef struct InfoGen
{
    char Disponibility[50];
    int Prix;
    char Marque[100];
    char Modele[100];
    char Energie[100];
    char Etat[100];
    int Kilometrage;
    char Exterieur[100];
    char Interieur [100];
}InfoGen;
typedef struct Dimension
{
    char Carrosserie[100];
    int Nbr_portes;
    int Nbr_places;
    int Longueur;
    int Largeur;
    int Hauteur;
    int Poids;
    int Vol_Coffre;
}Dimension;
typedef struct Moteur
{
    int Puiss_Totale;
    int Couple_Totale;
    int Nbr_Cylindres;
    char Architecture[100];
    char Position_Moteur[100];
}Moteur;
typedef struct Transmission
{
   char Boite_de_vitesse[100];
   int Nbr_Vitesse;
}Transmission;
typedef struct Performance
{
    int Vitesse_Max;
    float Acceleration_0_100;
}Performance;
typedef struct Options
{
    char Abs[100];
    char Direction[100];
    char Frein_avant[100];
    char Frein_arriere[100];
}Options;

typedef struct FichTech
{
   int carId;
   InfoGen I;
   Dimension D;
   Moteur M;
   Transmission T;
   Performance P;
   Options O;


}FichTech;
typedef struct Location
{
    int numL;
    char nom[100];
    char prenom[100];
    int num;
    char Ma[100];
    char Mo[100];
    int Ref;
    date Begin;
    Time Tbegin;
    date End;
    Time Tend;
    int prix;
}Location;
typedef struct reclam
{
    int numL;
    int RefV;
    char reclam[100000];
    char ad[100];

}reclam;

reclam REC[10000];
User Compte[100000];
FichTech Voiture[10000];
FichTech VoitureS[10000];
Location VoitureL[1000];
void Color(int j,int u);
void Entrer(User *k,char p[50],char n[50],date d,char a[100],int nu,char AdM[100],char Pass[100]);
void Inscrire(User a);
int Check(char admail[100],char Modp[100]);
void RempInfo(InfoGen *I);
void RempDim(Dimension *D);
void RempMot(Moteur *M);
void RempTrans(Transmission *T);
void RempPerf(Performance *P);
void RempOp(Options *O);
void RempID(FichTech *F);
void RempFichTech(FichTech *F);
void Registre(FichTech F);
void Affichage(FichTech F);
void Supprimer(int r);
void SupprimerV(int r);
void ChangerMdp(char admail[100]);
int Calcule(date t,date T,int p);
void RegistreL(Location L);
void Louer();
void AffichDate(date d);
void AffichTime(Time t);
void AffichLocation(Location L);
void RegistreR(reclam r);
void Reclamation();
void AFFICHOP();
void Modifier();
void RegistreS(FichTech F);
void Restaurer();

int main()
{
    Color(4,0);
    printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
    printf("\n\n\t\t\t\t    >> Binevenue << \n\n");
    Color(0,15);
    printf("\t\t       Ici vous trouvez votre choix d automobile  \n\n\n\n");
    Color(15,0);
    char move1;
    printf("cliquer sur '>' pour avancer :");
    scanf("%c",&move1);
    if(move1=='>')
    {
        Color(4,0);
        printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
        printf("\n\n\t\t\t\t    >> Services << \n\n");
        Color(0,15);
        printf("\t\t       Location de voiture a des prix abordables \n");
        printf("\t\t\t\t Prets pour l aventure ?\n\n\n");
        Color(15,0);
    }
    printf("\n");
    char move2;
    printf("cliquer sur '>' pour avancer :");
    scanf(" %c",&move2);
    if(move2=='>')
    {
       char choix1;
       Color(4,0);
       printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
       printf("\n\n\t\t\t\t    >> Compte << \n\n\n\n");
       Color(15,0);
       int e=0;
       while (e == 0) {
       int o = 0;
       printf("Inscrivez-vous 'I' ou connectez-vous 'C':");
       scanf(" %c", &choix1);
       printf("\n\n");
       char AD[100];
       char Pa[100];

       if (choix1 == 'I' || choix1 == 'i')
        {
           User a;
           char P[50];
           char N[50];
           date Na;
           char A[100];
           int Nu;
           printf("Prenom:");
           scanf("%s", P);
           printf("Nom:");
           scanf("%s", N);
           printf("\t\t Date de Naissance:\n");
           printf("jour:");
           scanf("%d", &Na.day);
           printf("mois:");
           scanf("%d", &Na.month);
           printf("annee:");
           scanf("%d", &Na.year);
           printf("Adresse:");
           scanf("%s", A);
           printf("Numero de telephone:");
           scanf("%d", &Nu);
           printf("Adresse Mail:");
           scanf("%s", AD);
           printf("Mot de passe:");
           scanf("%s", Pa);
           Entrer(&a, P, N, Na, A, Nu, AD, Pa);
           Inscrire(a);
       }

       Color(4, 0);
       printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
       printf("\n\n\t\t\t\t    >> LOGIN << \n\n\n\n");
       Color(15, 0);

       int ex = 0;
       while (ex == 0 && o < 3)
        {
          printf("Adresse Mail:");
          scanf("%s", AD);
          printf("Mot de passe:");
          scanf("%s", Pa);
          ex = Check(AD, Pa);
          o++;
        }

        if (ex == 1)
        {
           e = 1;
           break;
        }
       }
       while(Retour='<'){
       Color(4,0);
       printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n");
       Color(14,0);
       printf("User Name\n\n\n");
       Color(4,0);
       printf("\t\t\t\t    >> ACCUEIL << \n\n\n\n");
       Color(15,0);
       printf("1-Entrer une voiture\n");
       printf("2-Afficher la description d une voiture\n");
       printf("3-Modifier la description et l etat d une voiture\n");
       printf("4-Supprimer une voiture a volonte\n");
       printf("5-Supprimer toutes les voiture en pannes\n");
       printf("6-Restaurer une voiture supprimee\n");
       printf("7-Louer une voiture\n");
       printf("8-Afficher l historique des locations\n");
       printf("9-Retour d une voiture en cas de reclamation\n");
       printf("10-Changer le mot de passe\n");
       printf("11-Quitter\n\n\n");
       int choix2;
       printf("\n\nChoisir un nombre pour acceder a l option:");
       scanf("%d",&choix2);
       printf("\n\n");
       switch(choix2)
        {
            case 1:
             {
                Color(4,0);
                printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
                printf("\n\t\t\t\t >> Entrer une voiture << \n\n\n\n");
                Color(15,0);
                FichTech F;
                RempFichTech(&F);
                Registre(F);
                printf("\n\n\n\n");
                break;
             }
            case 2:
             {
                Color(4,0);
                printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
                printf("\n\t\t\t\t >> AFF Discreption << \n\n\n\n");
                Color(15,0);
                int reference;
                printf("Donner la reference de voiture :");
                scanf("%d",&reference);
                printf("\n\n");
                int l=0;
                for(int k=0;k<posV;k++)
                {
                     if(reference==Voiture[k].carId)
                     {
                         Affichage(Voiture[k]);
                         l=1;
                     }
                }
                if(l==0)
                {
                   Color(4,15);
                   printf("\t\t\t\t\t Pas de voiture avec cette reference");
                   Color(15,0);
                }
                printf("\n\n\n\n");
                break;
             }
            case 3:
             {
                 Color(4,0);
                 printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
                 printf("\n\t\t\t\t >> Modification << \n\n\n\n");
                 Color(15,0);
                 AFFICHOP();
                 Modifier();
                 break;
             }
            case 4:
             {
                Color(4,0);
                printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
                printf("\n\t\t\t\t >> Suppression << \n\n\n\n");
                Color(15,0);
                int r;
                printf("Donner la refernce du voiture que tu veux supprimer:");
                scanf("%d",&r);
                Supprimer(r);
                break;
             }
            case 5:
               {
                   Color(4,0);
                   printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
                   printf("\n\t\t\t\t >> Suppression des voitures en panne << \n\n\n\n");
                   Color(15,0);
                   int n=0;
                   for(int k=0;k<=posV;k++)
                   {
                       if(strcmp(Voiture[k].I.Etat,"panne")==0 || strcmp(Voiture[k].I.Etat,"PANNE")==0 || strcmp(Voiture[k].I.Etat,"Panne")==0 || strcmp(Voiture[k].I.Etat,"En Panne")==0)
                       {
                           RegistreS(Voiture[k]);
                           SupprimerV(k);
                           n+=1;
                       }
                   }
                   Color(10,15);
                   if(n>0){
                       printf("\t\t\t\t Toutes les voitures en panne ont etes supprimer\n\n");
                       n=0;
                   }
                   else
                    {
                        printf("\t\t\t\t\t\t Aucunne voiture en panne\n\n");
                    }
                   Color(15,0);
                   break;
               }
            case 6:
             {
                    Color(4,0);
                    printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
                    printf("\n\t\t\t\t >> Restauration << \n\n\n\n");
                    Color(15,0);
                    Restaurer();
                    break;
             }
            case 7:
             {
                Color(4,0);
                printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
                printf("\n\t\t\t\t >> Louer une voiture << \n\n\n\n");
                Color(15,0);
                Louer();
                break;
             }
            case 8:
             {
                 Color(4,0);
                 printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
                 printf("\n\t\t\t\t >> Historique des Locations << \n\n\n\n");
                 Color(15,0);
                 int u=1;
                 for(int k=0;k<posL;k++)
                 {
                     if (u==15)
                        u=1;
                     Color(u,0);
                     printf("\n\t\t\t\t   Location %d :\n\n",k+1);
                     Color(15,0);
                     AffichLocation(VoitureL[k]);
                     u++;
                 }
                 break;
             }
            case 9:
             {
                 Color(4,0);
                 printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
                 printf("\n\t\t\t\t >> Reclamation << \n\n\n\n");
                 Color(15,0);
                 Reclamation();
                 break;
             }
            case 10:
               {
                  Color(4,0);
                  printf("\n\n\t\t\t\t**** || DH-Cars || ****\n\n\n\n");
                  printf("\n\t\t\t\t >> Changement de MDP << \n\n\n\n");
                  Color(15,0);
                  char admail[100];
                  printf("Entrer ton adresse mail: ");
                  scanf("%s",admail);
                  ChangerMdp(admail);
                  break;
               }
            case 11:
               {
                 Retour='q';
                 Color(4,15);
                 printf("\n\n\n\n\n\n\t\t\t\t\t>>\t\t Au revoir !!\t\t<<\t\t\n\n\n\n\n\n");
                 Color(15,0);
                 break;
               }
            default:
             {
                Color(4,15);
                printf("\t\t\t\t\t\t ****  Aucune entree valide a ce stade  ****\n\n");
                Color(15,0);
             }
        }
        if(Retour!='<')
            break;

      }

    }



    return 0;
}

void Entrer(User *k,char p[50],char n[50],date d,char a[100],int nu,char AdM[100],char Pass[100])
{
    strcpy(k->Prenom,p);
    strcpy(k->Nom,n);
    k->Naissance=d;
    strcpy(k->Adresse,a);
    k->Num=nu;
    strcpy(k->AdMail,AdM);
    strcpy(k->Password,Pass);
}
void Inscrire(User a)
{
    Compte[pos]=a;
    pos=pos+1;
}
void RempInfo(InfoGen *I)
{
    printf("Disponibility (Oui/Non): ");
    scanf("%s",I->Disponibility);
    printf("Prix par jour: ");
    scanf("%d",&I->Prix);
    printf("Donner la Marque: ");
    scanf("%s",I->Marque);
    printf("Donner le Modele: ");
    scanf("%s",I->Modele);
    printf("Donner le type d Energie de fonctionnement: ");
    scanf("%s",I->Energie);
    printf("donner l Etat (Bonne/Panne): ");
    scanf("%s",I->Etat);
    printf("Donner le Kilometrage:");
    scanf("%d",&I->Kilometrage);
    printf("Donner la description de l Exterieur: ");
    scanf("%s",I->Exterieur);
    printf("Donner la description de l Interieur: ");
    scanf("%s",I->Interieur);
    printf("\n");
}
void RempDim(Dimension *D)
{
    printf("Donner le type de Carrosserie: ");
    scanf("%s",D->Carrosserie);
    printf("Donner le nbre de portes:");
    scanf("%d",&D->Nbr_portes);
    printf("Donner le nbre de places: ");
    scanf("%d",&D->Nbr_places);
    printf("Donner le longueur en 'mm' : ");
    scanf("%d",&D->Longueur);
    printf("Donner la largeur en 'mm' : ");
    scanf("%d",&D->Largeur);
    printf("Donner l hauteur en 'mm' : ");
    scanf("%d",&D->Hauteur);
    printf("Donner le Poids en 'kg' : ");
    scanf("%d",&D->Poids);
    printf("Donner le volume du coffre en 'l': ");
    scanf("%d",&D->Vol_Coffre);
    printf("\n");

}
void RempMot(Moteur *M)
{
    printf("Donner la puissance totale en 'CH': ");
    scanf("%d",&M->Puiss_Totale);
    printf("Donner le couple totlale en 'Nm' :");
    scanf("%d",&M->Couple_Totale);
    printf("Donner le nombre de cylindres: ");
    scanf("%d",&M->Nbr_Cylindres);
    printf("Donner la description de l architecture: ");
    scanf("%s",M->Architecture);
    printf("Donner la position du moteur: ");
    scanf("%s",M->Position_Moteur);
    printf("\n");

}
void RempTrans(Transmission *T)
{
    printf("Donner le type du boite de vitesse (Manuelle/Auto): ");
    scanf("%s",T->Boite_de_vitesse);
    printf("Donner le nombre de vitesse:");
    scanf("%d",&T->Nbr_Vitesse);
    printf("\n");

}
void RempPerf(Performance *P)
{
    printf("Donner la vitesse maximalle en 'km/h': ");
    scanf("%d",&P->Vitesse_Max);
    printf("Donner l acceleration de 0 a 100 en 'sec':");
    scanf("%f",&P->Acceleration_0_100);
    printf("\n");

}
void RempOp(Options *O)
{
    printf("Y a-t-il systeme ABS ? : ");
    scanf("%s",O->Abs);
    printf("Y a-t-il systeme de Direction:");
    scanf("%s",O->Direction);
    printf("Donner le type du frein avant: ");
    scanf("%s",O->Frein_avant);
    printf("Donner le type du frein arriere: ");
    scanf("%s",O->Frein_arriere);
    printf("\n");
}
void RempID(FichTech *F)
{
    printf("Donner la reference du voiture: ");
    scanf("%d",F->carId);
}
void RempFichTech(FichTech *F)
{
     Color(5,0);
     printf("\t\t\t\t\t **ID** \n\n");
     Color(15,0);
     RempID(&F);
     Color(5,0);
     printf("\t\t\t\t   **Info Generales** \n\n");
     Color(15,0);
     RempInfo(&F->I);
     Color(5,0);
     printf("\t\t\t\t   **Dimensions** \n\n");
     Color(15,0);
     RempDim(&F->D);
     Color(5,0);
     printf("\t\t\t\t   **Moteur** \n\n");
     Color(15,0);
     RempMot(&F->M);
     Color(5,0);
     printf("\t\t\t\t   **Transmission** \n\n");
     Color(15,0);
     RempTrans(&F->T);
     Color(5,0);
     printf("\t\t\t\t   **Performance** \n\n");
     Color(15,0);
     RempPerf(&F->P);
     Color(5,0);
     printf("\t\t\t\t   **Options** \n\n");
     Color(15,0);
     RempOp(&F->O);
}
void Registre(FichTech F){
    Voiture[posV]=F;
    posV=posV + 1;
}
void Affichage(FichTech F)
{
     Color(1,0);
     printf("\t\t\t\t   **Info Generales** \n\n");
     Color(15,0);
     printf("Reference: %d\n",F.carId);
     printf("Disponibility: %s\n",F.I.Disponibility);
     printf("Prix par jour: %d\n",F.I.Prix);
     printf("Marque: %s\n",F.I.Marque);
     printf("Modele: %s\n",F.I.Modele);
     printf("Energie: %s\n",F.I.Energie);
     printf("Etat: %s\n",F.I.Etat);
     printf("Kilometrage: %d\n",F.I.Kilometrage);
     printf("Exterieur: %s\n",F.I.Exterieur);
     printf("Interieur: %s\n\n",F.I.Interieur);
     Color(1,0);
     printf("\t\t\t\t   **Dimensions** \n\n");
     Color(15,0);
     printf("Carrosserie: %s\n",F.D.Carrosserie);
     printf("Nbr_portes: %d\n",F.D.Nbr_portes);
     printf("Nbr_places: %d\n",F.D.Nbr_places);
     printf("Longueur: %d mm\n",F.D.Longueur);
     printf("Largeur: %d mm\n",F.D.Largeur);
     printf("Hauteur: %d mm\n",F.D.Hauteur);
     printf("Poids: %d kg\n",F.D.Poids);
     printf("Vol_Coffre: %d kg\n\n",F.D.Vol_Coffre);
     Color(1,0);
     printf("\t\t\t\t   **Moteur** \n\n");
     Color(15,0);
     printf("Puissance Totale: %d CH\n",F.M.Puiss_Totale);
     printf("Couple Totale: %d Nm\n",F.M.Couple_Totale);
     printf("Nombres de cylindres: %d\n",F.M.Nbr_Cylindres);
     printf("Architecture: %s\n",F.M.Architecture);
     printf("Position moteur: %s\n\n",F.M.Position_Moteur);
     Color(1,0);
     printf("\t\t\t\t   **Transmission** \n\n");
     Color(15,0);
     printf("Boite de vitesse: %s\n",F.T.Boite_de_vitesse);
     printf("Nombre de vitesses: %d\n\n",F.T.Nbr_Vitesse);
     Color(1,0);
     printf("\t\t\t\t   **Performance** \n\n");
     Color(15,0);
     printf("Vitesse maximale: %d\n",F.P.Vitesse_Max);
     printf("Acceleration 0_100 km/h: %f sec\n\n",F.P.Acceleration_0_100);
     Color(1,0);
     printf("\t\t\t\t   **Options** \n\n");
     Color(15,0);
     printf("ABS: %s\n",F.O.Abs);
     printf("Systeme de Direction: %s\n",F.O.Direction);
     printf("Frein avant: %s\n",F.O.Frein_avant);
     printf("Frein arriere: %s\n\n",F.O.Frein_arriere);
}
void Color(int j,int u)
{
    HANDLE Z=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(Z,u*16+j);
}
void Supprimer(int r)
{
    int k=0;
    for(int i=0;i<posV;i++ )
    {
     if(r==Voiture[i].carId)
      {
          RegistreS(Voiture[i]);
          for(int c=i;c<=posV;c++)
          {
              Voiture[c]=Voiture[c+1];
          }
          k=1;
          printf("\n\n");
          Color(10,15);
          printf("\t\t\t\t la voiture a ete supprimer avec succes\n\n");
          Color(15,0);
          break;
      }
    }
    if(k==0)
    {
       printf("\n\n");
       Color(4,15);
       printf("\t\t\t\t Pas de voiture avec cette reference");
       Color(15,0);
       printf("\n\n");
    }
}
void SupprimerV(int r)
{
      for(int i=r;i<=posV;i++)
      {
         Voiture[i]=Voiture[i+1];
      }
}
void ChangerMdp(char admail[100])
{
    char mdp[100];
    printf("Donner le nouveau mot de passe:");
    scanf("%s",mdp);
    printf("\n\n");
    int e=0;
    for(int i=0;i<pos;i++)
    {
        if(strcmp(Compte[i].AdMail,admail)==0)
          {
            strcpy(Compte[i].Password,mdp);
            Color(10,15);
            printf("\t\t\t\t\t\t Le mot de passe a ete changer avec succes");
            Color(15,0);
            e=1;
          }
    }
    if(e==0)
    {
        Color(4,15);
        printf("\n\t\t\t\t\t Adresse incorrecte !! ");
        Color(15,0);
    }
    printf("\n\n\n\n");
}
int Check(char admail[100],char Modp[100])
{
      int j=0;
      int existe=0;
      for(int i=0;i<=pos;i++)
      {
        if(strcmp(Compte[i].AdMail,admail)==0)
        {
            if (strcmp(Compte[i].Password,Modp)==0)
            {
                existe=1;
                break;
            }
            else
            {
                existe=2;
                Color(4,15);
                printf("\n\n\t\t\t Mot de passe incorrecte");
                Color(15,0);
                printf("\n\n");
                break;
            }
        }
      }
      if(existe==0)
      {
        j++;
        Color(4,15);
        printf("\n\n\t\t\t Il n existe pas un compte avec cette adresse mail ");
        Color(15,0);
        printf("\n\n");
        if(j==2)
         {
            Color(6,0);
            printf("Si vous n avez pas creer un compte creer un !");
            Color(15,0);

         }
        printf("\n\n");
      }
      return(existe);
}
void Louer()
{
    int ID;
    int x=0;
    Location  L;
    printf("Donner le reference du voiture que tu veux louer:");
    scanf("%d",&ID);
    printf("\n\n");
    for(int i=0;i<posV;i++ )
    {
        if(ID==Voiture[i].carId)
        {
            x=1;
            if(strcmp(Voiture[i].I.Disponibility,"oui")==0 || strcmp(Voiture[i].I.Disponibility,"OUI")==0 || strcmp(Voiture[i].I.Disponibility,"Oui")==0 )
            {
               int n;
               char N[100];
               char P[100];
               date t;
               date T;
               Time h1;
               Time h2;
               int p;
               Color(3,0);
               printf("\t\t\t\t        **Info** \n\n");
               Color(15,0);
               printf("Nom:");
               scanf("%s",N);
               printf("Prenom:");
               scanf("%s",P);
               printf("Numero de telephone:");
               scanf("%d",&n);
               Color(11,0);
               printf("\t\t\t\t   **Date de Location** \n\n");
               Color(15,0);
               printf("Jour:");
               scanf("%d",&t.day);
               printf("Mois:");
               scanf("%d",&t.month);
               printf("Annee:");
               scanf("%d",&t.year);
               Color(11,0);
               printf("\t\t\t\t   **Heure de Location** \n\n");
               Color(15,0);
               printf("Heure:");
               scanf("%d",&h1.heure);
               printf("Minute:");
               scanf("%d",&h1.minute);
               Color(5,0);
               printf("\t\t\t\t   **Date de Retour** \n\n");
               Color(15,0);
               printf("Jour:");
               scanf("%d",&T.day);
               printf("Mois:");
               scanf("%d",&T.month);
               printf("Annee:");
               scanf("%d",&T.year);
               Color(5,0);
               printf("\t\t\t\t   **Heure de Retour** \n\n");
               Color(15,0);
               printf("Heure:");
               scanf("%d",&h2.heure);
               printf("Minute:");
               scanf("%d",&h2.minute);
               Color(10,0);
               printf("\t\t\t\t        **Prix** \n\n");
               Color(15,0);
               p=Calcule(t,T,Voiture[i].I.Prix);
               printf("Prix par jour: %d d/j\n",Voiture[i].I.Prix);
               printf("Prix total:");
               Color(10,0);
               printf("%d d\n",p);
               Color(15,0);
               char move4;
               printf("\n\nCliquer sur '>' si vous etes d accord:");
               scanf(" %c",&move4);
               if(move4=='>')
               {
                   L.numL=posL+1;
                   strcpy(L.nom,N);
                   strcpy(L.prenom,P);
                   L.num=n;
                   L.Ref=Voiture[i].carId;
                   strcpy(L.Ma,Voiture[i].I.Marque);
                   strcpy(L.Mo,Voiture[i].I.Modele);
                   L.Begin=t;
                   L.End=T;
                   L.Tbegin=h1;
                   L.Tend=h2;
                   L.prix=p;
                   RegistreL(L);
                   strcpy(Voiture[i].I.Disponibility,"Non");
                   Color(10,15);
                   printf("\t Votre location est effectue avec succes le reste des demarches sera complete lors de la reception de la voiture !!");
                   Color(13,15);
                   printf("\n\t\t\t\t\t\ Votre numero de location est : %d",L.numL);
                   Color(15,0);
                   printf("\n");
               }
            }
            else
             {
                Color(4,15);
                printf("\t\t\t\t\t Cette voiture n est pas disponible pour le moment\n");
                printf("\t\t\t\t\t Voir une autre voiture si vous voulez !\n");
                Color(15,0);
             }
             break;
        }
    }
    if(x==0)
    {
        Color(4,15);
        printf("\t\t\t\t\t\t Pas de voiture avec cette reference\n\n");
        Color(15,0);
    }

}

int Calcule(date t,date T,int p)
{
   int joursParMois[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int estBissextile(int a)
    {
        return ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));
    }
    int joursDansAnnee(int a)
    {
        return estBissextile(a) ? 366 : 365;
    }
    int joursDansAnneeJusquA(date D)
    {
        int j=0;
        for (int m=1;m< D.month; ++m)
        {
            j+= joursParMois[m];
            if (m == 2) {
                j++;
            }
        }
        j+= D.day;
        return (j);
    }
    int j1 = joursDansAnneeJusquA(t);
    int j2 = joursDansAnneeJusquA(T);
    int joursTotal = 0;
    for (int a=t.year;a< T.year; ++a)
    {
        joursTotal += joursDansAnnee(a);
    }
    joursTotal += j2 - j1;
    return (joursTotal*p);
}
void RegistreL(Location L)
{
    VoitureL[posL]=L;
    posL=posL + 1;
}
void RegistreR(reclam r)
{
    REC[posR]=r;
    posR=posR + 1;
}
void AffichDate(date d)
{
    printf("%d/%d/%d\n",d.day,d.month,d.year);
}
void AffichTime(Time t)
{
    printf("%d:%d\n",t.heure,t.minute);
}
void AffichLocation(Location L)
{
   printf("Numero de location: %d\n",L.numL);
   printf("Nom: %s\n",L.nom);
   printf("Prenom: %s\n",L.prenom);
   printf("Numero de telephone: %d\n",L.num);
   printf("Marque: %s\n",L.Ma);
   printf("Modele: %s\n",L.Mo);
   printf("Reference: %d\n",L.Ref);
   printf("Date de location: ");
   AffichDate(L.Begin);
   printf("Heure de location: ");
   AffichTime(L.Tbegin);
   printf("Date de retour: ");
   AffichDate(L.End);
   printf("Heure de retour: ");
   AffichTime(L.Tend);
   printf("Prix total: %d\n",L.prix);
}
void Reclamation()
{
    reclam R;
    int n,r;
    int e=0;
    char d[1000000];
    char a[100];
    printf("Numero de location:");
    scanf(" %d",&n);
    printf("Reference de voiture:");
    scanf(" %d",&r);
    printf("Reclamation:");
    scanf(" %[^\n]",d);
    printf("Adresse de recuperation:");
    scanf(" %[^\n]",a);
    for(int k=0;k<posV;k++)
     {
         if(Voiture[k].carId==VoitureL[n-1].Ref && r==VoitureL[n-1].Ref)
          {
              strcpy(Voiture[k].I.Etat,"Panne");
              R.numL=n;
              R.RefV=r;
              strcpy(R.reclam,d);
              strcpy(R.ad,a);
              RegistreR(R);
              e=1;
              break;
          }
     }
    if(e==0)
    {
         Color(4,15);
         printf("\n\t\t\t\t\t\ Numero de location ou Reference incorrecte !! ");
         Color(15,0);
    }
    else
    {
        printf("\n\n");
        Color(6,15);
        printf("Mr/Madame %s ",VoitureL[n-1].prenom);
        Color(15,0);
        printf("nous avons bien pris note de votre reclamation et regrettons sincerement les desagrements rencontres lors de votre location de voiture avec notre agence.\n");
        Color(13,15);
        printf("Nous vous assurons que des mesures correctives seront prises.");
        Color(15,0);
        printf("\n\n\n");
    }
}
void AFFICHOP()
{
     Color(1,0);
     printf("\t\t\t\t  **Info Generales** \n\n");
     Color(15,0);
     printf("1-Modifier la Reference\n");
     printf("2-Modifier la Disponibility\n");
     printf("3-Modifier le Prix par jour\n");
     printf("4-Modifier la Marque\n");
     printf("5-Modifier le Modele\n");
     printf("6-Modifier le type d Energie\n");
     printf("7-Modifier l Etat\n");
     printf("8-Modifier le Kilometrage\n");
     printf("9-Modifier la description de l Exterieur\n");
     printf("10-Modifier la description de l Interieur\n\n");
     Color(1,0);
     printf("\t\t\t\t   **Dimensions** \n\n");
     Color(15,0);
     printf("11-Modifier le type Carrosserie\n");
     printf("12-Modifier le Nombre de portes\n");
     printf("13-Modifier le Nombre de places\n");
     printf("14-Modifier la Longueur\n");
     printf("15-Modifier la Largeur\n");
     printf("16-Modifier l Hauteur\n");
     printf("17-Modifier le Poids\n");
     printf("18-Modifier le Volume de Coffre\n\n");
     Color(1,0);
     printf("\t\t\t\t   **Moteur** \n\n");
     Color(15,0);
     printf("19-Modifier la Puissance Totale\n");
     printf("20-Modifier le Couple Totale\n");
     printf("21-Modifier le Nombre de cylindres\n");
     printf("22-Modifier l Architecture\n");
     printf("23-Modifier la Position moteur\n\n");
     Color(1,0);
     printf("\t\t\t\t   **Transmission** \n\n");
     Color(15,0);
     printf("24-Modifier le type de Boite de vitesse\n");
     printf("25-Modifier le Nombre de vitesses\n\n");
     Color(1,0);
     printf("\t\t\t\t   **Performance** \n\n");
     Color(15,0);
     printf("26-Modifier la Vitesse maximalle\n");
     printf("27-Modifier l Acceleration 0_100 km/h\n\n");
     Color(1,0);
     printf("\t\t\t\t   **Options** \n\n");
     Color(15,0);
     printf("28-Modifier la description sur l ABS\n");
     printf("29-Modifier la description sur le Systeme de Direction\n");
     printf("30-Modifier la description sur le Frein avant\n");
     printf("31-Modifier la description sur le Frein arriere\n\n");
}
void Modifier()
{
    int c,a,r;
    int q=0;
    char b[100];
    printf("\n\nChoisir un nombre pour acceder a l option:");
    scanf("%d",&c);
    if(c<=31 && c>=1){
    printf("Donner le reference du voiture:");
    scanf("%d",&r);
    printf("\n\n");
    for(int i=0;i<posV;i++ )
    {
        if(r==Voiture[i].carId)
         {
             if(c==1)
             {
                printf("Donner la nouvelle Reference:");
                scanf("%d",&a);
                Voiture[i].carId=a;
                q=1;
                break;
             }
             if(c==2)
             {
                printf("Donner la nouvelle Disponibility:");
                scanf("%s",b);
                strcpy(Voiture[i].I.Disponibility,b);
                q=1;
                break;
             }
             if(c==3)
             {
                printf("Donner le nouveau Prix par jour:");
                scanf("%d",&a);
                Voiture[i].I.Prix=a;
                q=1;
                break;
             }
             if(c==4)
             {
                printf("Donner la nouvelle Marque:");
                scanf("%s",b);
                strcpy(Voiture[i].I.Marque,b);
                q=1;
                break;
             }
             if(c==5)
             {
                printf("Donner le nouveau Modele:");
                scanf("%s",b);
                strcpy(Voiture[i].I.Modele,b);
                q=1;
                break;
             }
             if(c==6)
             {
                printf("Donner le nouveau type d Energie:");
                scanf("%s",b);
                strcpy(Voiture[i].I.Energie,b);
                q=1;
                break;
             }
             if(c==7)
             {
                printf("Donner la nouvelle Etat:");
                scanf("%s",b);
                strcpy(Voiture[i].I.Etat,b);
                q=1;
                break;
             }
             if(c==8)
             {
                printf("Donner le nouveau Kilometrage:");
                scanf("%d",&a);
                Voiture[i].I.Kilometrage=a;
                q=1;
                break;
             }
             if(c==9)
             {
                printf("Donner la nouvelle description de l Exterieur:");
                scanf("%s",b);
                strcpy(Voiture[i].I.Exterieur,b);
                q=1;
                break;
             }
             if(c==10)
             {
                printf("Donner la nouvelle description de l Interieur:");
                scanf("%s",b);
                strcpy(Voiture[i].I.Interieur,b);
                q=1;
                break;
             }
             if(c==11)
             {
                printf("Donner le nouveau type de Carrosserie:");
                scanf("%s",b);
                strcpy(Voiture[i].D.Carrosserie,b);
                q=1;
                break;
             }
             if(c==12)
             {
                printf("Donner le nouveau Nombre de portes:");
                scanf("%d",&a);
                Voiture[i].D.Nbr_portes=a;
                q=1;
                break;
             }
             if(c==13)
             {
                printf("Donner le nouveau Nombre de places:");
                scanf("%d",&a);
                Voiture[i].D.Nbr_places=a;
                q=1;
                break;
             }
             if(c==14)
             {
                printf("Donner la nouvelle Longueur:");
                scanf("%d",&a);
                Voiture[i].D.Longueur=a;
                q=1;
                break;
             }
             if(c==15)
             {
                printf("Donner la nouvelle Largeur:");
                scanf("%d",&a);
                Voiture[i].D.Largeur=a;
                q=1;
                break;
             }
             if(c==16)
             {
                printf("Donner le nouveau Hauteur:");
                scanf("%d",&a);
                Voiture[i].D.Hauteur=a;
                q=1;
                break;
             }
             if(c==17)
             {
                printf("Donner le nouveau Poids:");
                scanf("%d",&a);
                Voiture[i].D.Poids=a;
                q=1;
                break;
             }
             if(c==18)
             {
                printf("Donner le nouveau Volume de coffre:");
                scanf("%d",&a);
                Voiture[i].D.Vol_Coffre=a;
                q=1;
                break;
             }
             if(c==19)
             {
                printf("Donner la nouvelle Puissance Totale:");
                scanf("%d",&a);
                Voiture[i].M.Puiss_Totale=a;
                q=1;
                break;
             }
             if(c==20)
             {
                printf("Donner le nouveau Couple Totale:");
                scanf("%d",&a);
                Voiture[i].M.Couple_Totale=a;
                q=1;
                break;
             }
             if(c==21)
             {
                printf("Donner le nouveau Couple Totale:");
                scanf("%d",&a);
                Voiture[i].M.Nbr_Cylindres=a;
                q=1;
                break;
             }
             if(c==22)
             {
                printf("Donner la nouvelle description de l Architecture:");
                scanf("%s",b);
                strcpy(Voiture[i].M.Architecture,b);
                q=1;
                break;
             }
             if(c==23)
             {
                printf("Donner la nouvelle description du Position moteur:");
                scanf("%s",b);
                strcpy(Voiture[i].M.Position_Moteur,b);
                q=1;
                break;
             }
             if(c==24)
             {
                printf("Donner le nouveau Type de Boite de Vitesse:");
                scanf("%s",b);
                strcpy(Voiture[i].T.Boite_de_vitesse,b);
                q=1;
                break;
             }
             if(c==25)
             {
                printf("Donner le nouveau Nombre de vitesses:");
                scanf("%d",&a);
                Voiture[i].T.Nbr_Vitesse=a;
                q=1;
                break;
             }
             if(c==26)
             {
                printf("Donner la nouvelle Vitesse maximalle:");
                scanf("%d",&a);
                Voiture[i].P.Vitesse_Max=a;
                q=1;
                break;
             }
             if(c==27)
             {
                printf("Donner la nouvelle Acceleration de 0 a 100:");
                scanf("%d",&a);
                Voiture[i].P.Acceleration_0_100=a;
                q=1;
                break;
             }
             if(c==28)
             {
                printf("Donner la nouvelle description sur l ABS:");
                scanf("%s",b);
                strcpy(Voiture[i].O.Abs,b);
                q=1;
                break;
             }
             if(c==29)
             {
                printf("Donner la nouvelle description sur le Systeme de Direction:");
                scanf("%s",b);
                strcpy(Voiture[i].O.Direction,b);
                q=1;
                break;
             }
             if(c==30)
             {
                printf("Donner la nouvelle description sur le Frein avant:");
                scanf("%s",b);
                strcpy(Voiture[i].O.Frein_avant,b);
                q=1;
                break;
             }
             if(c==31)
             {
                printf("Donner la nouvelle description sur le Frein arriere:");
                scanf("%s",b);
                strcpy(Voiture[i].O.Frein_arriere,b);
                q=1;
                break;
             }

         }
    }
    printf("\n\n");
    if(q==0)
    {
        Color(4,15);
        printf("\n\t\t\t\t\t Pas de voiture avec cette Reference !! ");
        Color(15,0);
    }
    else
    {
        Color(10,15);
        printf("\t\t\t\t Le changement est effectue avec succes ");
        Color(15,0);
    }
    printf("\n");
  }
  else
  {
      printf("\n\n");
      Color(4,15);
      printf("\n\t\t\t\t\t\t Aucune entree valide a ce stade !! ");
      Color(15,0);
  }
}
void RegistreS(FichTech F){
    VoitureS[posS]=F;
    posS=posS + 1;
}
void Restaurer()
{
    int r;
    int k=0;
    printf("Donner le reference du voiture a restaurer:");
    scanf("%d",&r);
    for(int i=0;i<posS;i++ )
    {
        if(r==VoitureS[i].carId)
        {
            Registre(VoitureS[i]);
            printf("\n\n");
            Color(10,15);
            printf("\t\t\t\t La voiture a ete restaurer ");
            Color(15,0);
            printf("\n\n\n\n");
            k=1;
            break;
        }
    }
    if(k==0)
    {
        Color(4,15);
        printf("\n\t\t\t\t\t Pas de voiture avec cette Reference !! ");
        Color(15,0);
    }
}
