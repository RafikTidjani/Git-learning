#include<iostream>
#include<string>
#include"gestionnaireemployes.h"

using std::cout;
using std::cin;

void gestionnaireEmployes::execute()
{
  auto choix = choixMenu();
  while (choix != 4)
  {
    switch (choix)
    {
      case 1 : ajouteEmploye(); break;
      case 2 : afficheEmployes(); break;
      case 3 : afficheChargeMensuelleEmployes(); break;
    }
    choix = choixMenu();
  }
}

int gestionnaireEmployes::choixMenu()
{
  int choix {-1};
  do
  {
    cout<<"Voulez-vous :\n";
    cout<<"(1) Ajouter un employe\n";
    cout<<"(2) Afficher les employes\n";
    cout<<"(3) Afficher la charge mensuelle des employes\n";
    cout<<"(4) Quitter le programme\n";
    cout<<"Votre choix : ";
    cin>>choix;
  }
  while (choix<0 || choix >4);
  return choix;
}

void gestionnaireEmployes::ajouteEmploye()
{
  //À COMPLETER
}

void gestionnaireEmployes::afficheEmployes() const
{
  //À COMPLETER
}

void gestionnaireEmployes::afficheChargeMensuelleEmployes() const
{
  cout<<"charge mensuelle des employes : "<<chargeMensuelleEmployes()<<'\n';
}

double gestionnaireEmployes::chargeMensuelleEmployes() const
{
  //À COMPLETER
  return 0;
}

