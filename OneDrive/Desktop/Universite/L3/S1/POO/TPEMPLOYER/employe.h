#ifndef EMPLOYE_H
#define EMPLOYE_H

#include<string>
#include<iostream>

class employe {
public:
  employe(const std::string& nom, int indice);
  std::string nom() const;
  int indice() const;
  double salaireMensuel() const;
  void affiche(std::ostream& ost) const;
private:
  std::string d_nom;
  int d_indice;
};

#endif // EMPLOYE_H
