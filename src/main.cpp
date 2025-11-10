#include"geometry/point.h"
#include"geometry/vector.h"
#include"geometry/utils.h"
#include<iostream>
#include<stdlib.h>


int main(){
    bool running = true;
    int option = 0, option_menu = 0;
    Point2f point, point2, pointA, pointB;
    Vector2f vector, vectorA, vectorB ,vect;
    int x = 0, y = 0, dx = 0, dy = 0;
    float angle = 0.0f, scalar = 0.0f, norme = 0.0f, t = 0.0f, determinant = 0.0f;

    while (running)
    {
        std::cout << "=====================TRANSFORMATION DANS LE PLAN====================";
        std::cout << "|                          [1] -  POINT                            |";
        std::cout << "|                          [2] -  VECTEUR                          |";
        std::cout << "====================================================================";
        std::cout << "choissisez une option : ";
        std::cin >> option;
        system("cls");
        

        switch (option)
        {
        case 1:
            {
                std::cout << "=============TRANSFORMATION DANS LE PLAN SUR UN POINT==============";
                std::cout << "|                          [1] -  CREER UN POINT                   |";
                std::cout << "|                          [2] -  CREER UN POINT NUL               |";
                std::cout << "|                          [3] -  TRANSLATION                      |";
                std::cout << "|                      [4] -  TRANSLATION PAR RAPPORT A UN VECTEUR |";
                std::cout << "|                         [5] -  HOMOTHETIE                        |";
                std::cout << "|                      [6] -  HOMOTHETIE PAR RAPPORT A UN VECTEUR  |";
                std::cout << "|                          [7] -  ROTATION                         |";
                std::cout << "===================================================================";
                std::cout << "choissisez une option : ";
                std::cin >> option_menu;
                system("cls");


                switch (option_menu)
                {
                case 1:
                {
                    std::cout << "Entrez les coordonnees de ce point : \n";
                    std::cout << "Abscisse : ";
                    std::cin >> x;
                    std::cout << "Ordonnee : ";
                    std::cin >> y;
                    point = MakeP2f(x, y);

                    std::cout << "le point a pour coordonnees : \nX ="<<point.x << "\nY = "<<point.y;
                    running = false;
                    
                }

                case 2:
                {
                    point = MakeNullPoint();

                    std::cout << "le point a pour coordonnees : \nX ="<<point.x << "\nY = "<<point.y;
                    
                    running = false;

                }

                case 3:
                {
                    std::cout << "Entrez les coordonnees du centre de la translation : \n";
                    std::cout << "Abscisse : ";
                    std::cin >> point2.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> point2.y;

                    std::cout << "Entrez les coefficients de la translation \n";
                    std::cout << "en X : ";
                    std::cin >> dx;
                    std::cout << "en Y : ";
                    std::cin >> dy;

                   point = Translate(point2, dx, dy);

                    std::cout << "le point a pour coordonnees : \nX ="<<point.x << "\nY = "<<point.y;
                    
                    running = false;

                }

                case 4:
                {
                    std::cout << "Entrez les coordonnees du centre de la translation : \n";
                    std::cout << "Abscisse : ";
                    std::cin >> point2.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> point2.y;

                    std::cout << "Entrez les coordonnee du vecteur de translation \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vect.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vect.y;

                   point = Translate(point2, vect);

                    std::cout << "le point a pour coordonnees : \nX ="<<point.x << "\nY = "<<point.y;
                    
                    running = false;

                }

                case 5:
                {
                    std::cout << "Entrez les coordonnees du centre de l homothetie: \n";
                    std::cout << "Abscisse : ";
                    std::cin >> point2.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> point2.y;

                    std::cout << "Entrez les coefficients de l homothetie \n";
                    std::cout << "en X : ";
                    std::cin >> dx;
                    std::cout << "en Y : ";
                    std::cin >> dy;

                   point = Scale(point2, dx, dy);

                    std::cout << "le point a pour coordonnees : \nX ="<<point.x << "\nY = "<<point.y;
                    
                    running = false;

                }

                case 6:
                {
                    std::cout << "Entrez les coordonnees du centre de l homothetie: \n";
                    std::cout << "Abscisse : ";
                    std::cin >> point2.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> point2.y;

                    std::cout << "Entrez les coordonnee du vecteur de l homothetie \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vect.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vect.y;

                   point = Scale(point2, vect);

                    std::cout << "le point a pour coordonnees : \nX ="<<point.x << "\nY = "<<point.y;
                    
                    running = false;

                }

                case 7:
                {
                    std::cout << "Entrez les coordonnees du centre de la rotation: \n";
                    std::cout << "Abscisse : ";
                    std::cin >> point2.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> point2.y;

                    std::cout << "Entrez l angle de rotation : ";
                    std::cin >> angle;

                   point = Rotate(point2, angle);

                    std::cout << "le point a pour coordonnees : \nX ="<<point.x << "\nY = "<<point.y;
                    
                    running = false;

                }
                default:
                    break;
                }
                break;
            }
        
        case 2:
            {
                std::cout << "============TRANSFORMATION DANS LE PLAN SUR UN VECTEUR==============";
                std::cout << "|                          [1] -  CREER UN VECTEUR                 |";
                std::cout << "|                          [2] -  CREER UN VECTEUR NUL             |";
                std::cout << "|                      [3] -  CREER UN VECTEUR GRACE A DEUX POINTS |";
                std::cout << "|                          [4] -  ADDITION                         |";
                std::cout << "|                          [5] -  SOUSTRACTION                     |";
                std::cout << "|                          [6] -  PRODUIT SCALAIRE                 |";
                std::cout << "|                          [7] - HOMOTHETIE                        |";
                std::cout << "|                          [8] - NORME                             |";
                std::cout << "|                          [9] - NORMALISATION                     |";
                std::cout << "|                         [10] - INTERPOLATION                     |";
                std::cout << "|                         [11] - DETERMINANT                       |";
                std::cout << "===================================================================";
                std::cout << "choissisez une option : ";
                std::cin >> option_menu;
                system("cls");


                switch (option_menu)
                {
                case 1:
                {
                    std::cout << "Entrez les coordonnees de ce vecteur : \n";
                    std::cout << "Abscisse : ";
                    std::cin >> x;
                    std::cout << "Ordonnee : ";
                    std::cin >> y;

                    vector = MakeV2f(x,y);

                    std::cout << "le vecteur a pour coordonnees : \nX ="<<vector.x << "\nY = "<<vector.y;
                    running = false;
                }   
                
                case 2:
                {

                    vector = MakeNullVector();
                    
                    std::cout << "le vecteur a pour coordonnees : \nX ="<<vector.x << "\nY = "<<vector.y;
                    running = false;
                }   

                case 3:
                {
                    std::cout << "Entrez les coordonnees du point A: \n";
                    std::cout << "Abscisse : ";
                    std::cin >> pointA.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> pointA.y;

                    std::cout << "Entrez les coordonnees du point B: \n";
                    std::cout << "Abscisse : ";
                    std::cin >> pointB.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> pointB.y;

                    vector = MakeV2f(pointA, pointB);

                    std::cout << "le vecteur a pour coordonnees : \nX ="<<vector.x << "\nY = "<<vector.y;
                    running = false;
                } 

                case 4:
                {
                    std::cout << "Entrez les coordonnees du vector A: \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorA.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorA.y;

                    std::cout << "Entrez les coordonnees du vector B: \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorB.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorB.y;

                    vector = Add(vectorA, vectorB);

                    std::cout << "le vecteur a pour coordonnees : \nX ="<<vector.x << "\nY = "<<vector.y;
                    running = false;
                } 

                case 5:
                {
                    std::cout << "Entrez les coordonnees du vector A: \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorA.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorA.y;

                    std::cout << "Entrez les coordonnees du vector B: \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorB.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorB.y;

                    vector = Sub(vectorA, vectorB);

                    std::cout << "le vecteur a pour coordonnees : \nX ="<<vector.x << "\nY = "<<vector.y;
                    running = false;
                } 
                
                case 6:
                {
                    std::cout << "Entrez les coordonnees du vector A: \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorA.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorA.y;

                    std::cout << "Entrez les coordonnees du vector B: \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorB.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorB.y;

                    vector = Dot(vectorA, vectorB);

                    std::cout << "le vecteur a pour coordonnees : \nX ="<<vector.x << "\nY = "<<vector.y;
                    running = false;
                } 
                
                case 7:
                {
                    std::cout << "Entrez les coordonnees du vector de l homothetie: \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorA.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorA.y;

                    std::cout << "Entrez le coefficient de l homotetie\n";
                    std::cin >> scalar;

                    vector = Scale(vectorA, scalar);

                    std::cout << "le vecteur a pour coordonnees : \nX ="<<vector.x << "\nY = "<<vector.y;
                    running = false;
                } 
                
                case 8:
                {
                    std::cout << "Entrez les coordonnees du vector : \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorA.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorA.y;

                    norme = Length(vectorA);

                    std::cout << "la norme est  : "<<norme;
                    running = false;
                } 

                case 9:
                {
                    std::cout << "Entrez les coordonnees du vector : \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorA.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorA.y;

                    vector = Normalize(vectorA);

                    std::cout << "le vecteur a pour coordonnees : \nX ="<<vector.x << "\nY = "<<vector.y;
                    running = false;
                } 

                case 10:
                {
                    std::cout << "Entrez les coordonnees du vectorA : \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorA.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorA.y;

                    std::cout << "Entrez les coordonnees du vectorB : \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorB.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorB.y;

                    std::cout << "Entrez le coefficient de  l interpolation : ";
                    std::cin >> t;

                    vector = Lerp(vectorA, vectorB, t);

                    std::cout << "le vecteur a pour coordonnees : \nX ="<<vector.x << "\nY = "<<vector.y;
                    running = false;
                } 

                case 11:
                {
                    std::cout << "Entrez les coordonnees du vectorA : \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorA.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorA.y;

                    std::cout << "Entrez les coordonnees du vectorB : \n";
                    std::cout << "Abscisse : ";
                    std::cin >> vectorB.x;
                    std::cout << "Ordonnee : ";
                    std::cin >> vectorB.y;

                    determinant = Determinant(vectorA, vectorB);

                    std::cout << "le determinant est : "<< determinant;
                    running = false;
                } 
                default:
                    break;
                }
                break;

            }
        default:
            break;
        }
    }
    return 0;
}

