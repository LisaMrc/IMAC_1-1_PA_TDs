#include <iostream>

/*Note : on peut placer des paramètres dans la fonction directement en l'appelant (ex : HelloWorld(Steeve))*/

/* ________________ QUESTION 1 : Utiliser des paramètres par copie et le prototype ________________ 

int sum (int a, int b);

int main()
{
    int a { 4 };
    int b { 6 };

    std::cout << "La somme de " << a << " et " << b << " vaut " << sum(a, b) << std::endl;
}

int sum (int a, int b)
{
    return a + b;
} */

/* ________________ QUESTION 2 : Utiliser des paramètres constants pour les arguments de la fonction ________________ 

int sum2 (int const a, int const b)
{
    return a + b;
}

int main()
{
    int a { 4 };
    int b { 6 };

    std::cout << "La somme de " << a << " et " << b << " vaut " << sum2(a, b) << std::endl;
} */

/* ________________ QUESTION 3 : Utiliser des références pour les arguments de la fonction ________________ 

int sum3 (int & a, int & b)
{
    return a + b;
}

int main()
{
    int a { 4 };
    int b { 6 };
    std::cout << "La somme de " << a << " et " << b << " vaut " << sum3(a, b) << std::endl;
} */

/* ________________ QUESTION 4 : Vérifier que cela fonctionne aussi bien avec des variables que des littéraux dans le cas des références ________________ */

int sum4 (int const  & a, int const  & b)
{
    return a + b;
}

int main()
{
    std::cout << "La somme vaut " << sum4(4, 6) << std::endl;
}