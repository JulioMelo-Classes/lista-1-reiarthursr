/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*loop infinito durante os testes, mas vou condierar 50%*/
int main( void )
{
    // TODO: Adicione seu código aqui. 
    while(1)
    {
        int m, n, npos=0, res=0;

        cin >> m;
        cin >> n;

        if(n>0) npos=n;
        else if(n<0) npos=-n;

        for (int i = 0; i < npos; i++)
        {
            res += m;

            if(n>0) m++;
            else if(n<0) m--;
        }

        cout << res << endl;
    }

    return 0;
}
