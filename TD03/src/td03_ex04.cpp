/*notes de débug - 01.10.23

- Copier coller le reste du pgrm 
- si saisie en lettres de la carte, arrêt du programme avec l'âge ?*/

#include <iostream>

enum class Article { Alimentation, Vetements, Chaussures, Autre };

std::istream& operator>>(std::istream& is, Article& article)
{
    std::string articleAsString;
    is >> articleAsString;

    if (articleAsString == "Alimentation") {
        article = Article::Alimentation;
    } else if (articleAsString == "Vetements") {
        article = Article::Vetements;
    } else if (articleAsString == "Chaussures") {
        article = Article::Chaussures;
    } else if (articleAsString == "Autre") {
        article = Article::Autre;
    } else {
        is.setstate(std::ios::failbit);
    }

    return is;
}

int main() {

    Article article;
    std::cin >> article; /*saisie type Article*/
       
    if (std::cin.fail()) { /*verification Article*/
        std::cout << "Erreur de saisie, il faut saisir un type d'article valide (\"Alimentation\", \"Vetements\", \"Chaussures\" ou \"Autre\")" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
        return 1; 
    
    } else if (article == Article::Alimentation) {
           
        double prix; 
        std::cout << "Vous avez saisi un article de type Alimentation. Veuillez saisir le prix :" << std::endl;
        std::cin >> prix; /*saisie du prix*/

        if (std::cin.fail() || prix < 0) { /*verification prix*/
            std::cout << "Erreur de saisie" << std::endl;
            std::cin.clear();
            std::cin.ignore(255, '\n');
            return 1; 
        
        } else {

            bool carte;
            std::cout << "Avez vous la carte de fidélité (saisissez 0 pour non, 1 pour oui) ?" << std::endl;
            std::cin >> carte; /*saisie carte*/

            if (std::cin.fail()) { /*verification prix*/
                std::cout << "Erreur de saisie" << std::endl;
                std::cin.clear();
                std::cin.ignore(255, '\n');
                return 1; 
            
            } else if (carte == true) {
                prix*=.92;

                int age;
                std::cout << "Veuillez saisir votre age :" << std::endl;
                std::cin >> age; /*saisie age*/   

                if (age < 0 || std::cin.fail() ) { /*verification age*/
                    std::cout << "Erreur de saisie" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(255, '\n');
                    return 1; 
                
                } else if (age < 26) {
                    prix*=.9;
                    double bon {};
                    bon = prix*.1;

                    if (bon <= 30) {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) :" << bon << std::endl;
                    } else {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                    }
                        
                } else {
                    double bon {};
                    bon = prix*.1;

                    if (bon <= 30) {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                    } else {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                    }
                }
            
            } else if (carte == false) {
                
                prix*=.95;
                unsigned int age;
                std::cout << "Veuillez saisir votre age :" << std::endl;
                std::cin >> age; /*saisie age*/   

                if (std::cin.fail()) { /*verification age*/
                    std::cout << "Erreur de saisie, age negatif !" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(255, '\n');
                    return 1; 
                
                } else if (age < 26) {
                    prix*=.9;
                    double bon {};
                    bon = prix*.1;

                    if (bon <= 30) {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                    
                    } else {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                    }
                        
                } else {
                    double bon {};
                    bon = prix*.1;

                    if (bon <= 30) {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                    
                    } else {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                    }

                }

            } else { /*verification carte*/
               
                std::cout << "Erreur de saisie" << std::endl;
                std::cin.clear();
                std::cin.ignore(255, '\n');
                return 1;
            }  
        }

    } else if (article == Article::Vetements) {
                   
        double prix; 
        std::cout << "Vous avez saisi un article de type Vetement. Veuillez saisir le prix :" << std::endl;
        std::cin >> prix; /*saisie du prix*/

        if (std::cin.fail() || prix < 0) { /*verification prix*/
            std::cout << "Erreur de saisie" << std::endl;
            std::cin.clear();
            std::cin.ignore(255, '\n');
            return 1; 
        
        } else {

            bool carte;
            std::cout << "Avez vous la carte de fidélité (saisissez 0 pour non, 1 pour oui) ?" << std::endl;
            std::cin >> carte; /*saisie carte*/

            if (std::cin.fail()) { /*verification prix*/
                std::cout << "Erreur de saisie" << std::endl;
                std::cin.clear();
                std::cin.ignore(255, '\n');
                return 1; 
            
            } else if (carte == true) {
                prix*=.85;

                int age;
                std::cout << "Veuillez saisir votre age :" << std::endl;
                std::cin >> age; /*saisie age*/   

                if (age < 0 || std::cin.fail() ) { /*verification age*/
                    std::cout << "Erreur de saisie" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(255, '\n');
                    return 1; 
                
                } else if (age < 26) {
                    prix*=.9;
                    double bon {};
                    bon = prix*.1;

                    if (bon <= 30) {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                    } else {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                    }
                        
                } else {
                    double bon {};
                    bon = prix*.1;

                    if (bon <= 30) {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                    } else {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                    }
                }
            
            } else if (carte == false) {
                
                prix*=.9;
                unsigned int age;
                std::cout << "Veuillez saisir votre age :" << std::endl;
                std::cin >> age; /*saisie age*/   

                if (std::cin.fail()) { /*verification age*/
                    std::cout << "Erreur de saisie, age negatif !" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(255, '\n');
                    return 1; 
                
                } else if (age < 26) {
                    prix*=.9;
                    double bon {};
                    bon = prix*.1;

                    if (bon <= 30) {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                    
                    } else {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros " << std::endl;
                    }
                        
                } else {
                    double bon {};
                    bon = prix*.1;

                    if (bon <= 30) {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                    
                    } else {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                    }

                }

            } else { /*verification carte*/
               
                std::cout << "Erreur de saisie" << std::endl;
                std::cin.clear();
                std::cin.ignore(255, '\n');
                return 1;
            }  
        }

    } else if (article == Article::Chaussures) {
        double prix; 
        std::cout << "Vous avez saisi un article de type Chaussures. Veuillez saisir le prix :" << std::endl;
        std::cin >> prix; /*saisie du prix*/

        if (std::cin.fail() || prix < 0) { /*verification prix*/
            std::cout << "Erreur de saisie" << std::endl;
            std::cin.clear();
            std::cin.ignore(255, '\n');
            return 1; 
        
        } else {

            bool carte;
            std::cout << "Avez vous la carte de fidélité (saisissez 0 pour non, 1 pour oui) ?" << std::endl;
            std::cin >> carte; /*saisie carte*/

            if (std::cin.fail()) { /*verification prix*/
                std::cout << "Erreur de saisie" << std::endl;
                std::cin.clear();
                std::cin.ignore(255, '\n');
                return 1; 
            
            } else if (carte == true) {
                prix*=.82;

                int age;
                std::cout << "Veuillez saisir votre age :" << std::endl;
                std::cin >> age; /*saisie age*/   

                if (age < 0 || std::cin.fail() ) { /*verification age*/
                    std::cout << "Erreur de saisie" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(255, '\n');
                    return 1; 
                
                } else if (age < 26) {
                    prix*=.9;
                    double bon {};
                    bon = prix*.1;

                    if (bon <= 30) {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                    } else {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                    }
                        
                } else {
                    double bon {};
                    bon = prix*.1;

                    if (bon <= 30) {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                    } else {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                    }
                }
            
            } else if (carte == false) {
                
                prix*=.88;
                unsigned int age;
                std::cout << "Veuillez saisir votre age :" << std::endl;
                std::cin >> age; /*saisie age*/   

                if (std::cin.fail()) { /*verification age*/
                    std::cout << "Erreur de saisie, age negatif !" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(255, '\n');
                    return 1; 
                
                } else if (age < 26) {
                    prix*=.9;
                    double bon {};
                    bon = prix*.1;

                    if (bon <= 30) {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                    
                    } else {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                    }
                        
                } else {
                    double bon {};
                    bon = prix*.1;

                    if (bon <= 30) {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                    
                    } else {
                        std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                    }

                }

            } else { /*verification carte*/
               
                std::cout << "Erreur de saisie" << std::endl;
                std::cin.clear();
                std::cin.ignore(255, '\n');
                return 1;
            }  
        }

    } else if (article == Article::Autre) {
        
        double prix; 
        std::cout << "Vous avez saisi un article de type Autre. Veuillez saisir le prix :" << std::endl;
        std::cin >> prix; /*saisie du prix*/

        if (std::cin.fail() || prix < 0) { /*verification prix*/
            std::cout << "Erreur de saisie" << std::endl;
            std::cin.clear();
            std::cin.ignore(255, '\n');
            return 1; 
        
        } else {

            int age;
            std::cout << "Veuillez saisir votre age :" << std::endl;
            std::cin >> age; /*saisie age*/   

            if (age < 0 || std::cin.fail() ) { /*verification age*/
                std::cout << "Erreur de saisie" << std::endl;
                std::cin.clear();
                std::cin.ignore(255, '\n');
                return 1; 
                
            } else if (age < 26) {
                prix*=.9;
                double bon {};
                bon = prix*.1;

                if (bon <= 30) {
                    std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                } else {
                    std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                }
                        
            } else {
                double bon {};
                bon = prix*.1;

                if (bon <= 30) {
                    std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : " << bon << std::endl;
                } else {
                    std::cout << "Prix total : " << prix << ", montant du bon de réduction (valable sur le prochain achat) : 30 euros" << std::endl;
                }
            }  
        }
    }

    return 0;
}