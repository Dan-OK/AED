/* EjemploTipos.cpp
 * Ejemplos de Valores y Operaciones de Tipos de Datos
 * Carlos
 * 20220429
 */

#include <iostream>
#include <cassert>
#include <string>
using namespace std::string_literals;

int main()
{
    // bool
    assert( true and true );
    assert( true or false );
    assert( not false );
    assert( true and true == true );
    assert( false or false != true );
    
    // char
    assert( 'a' + 1 == 'b' );
    assert( 'z' - 10 != 1 );
    assert( 38 * 2 == 'L' );
    assert( 216 / 2 == 'l' );
    assert( 'F' - '@' + '=' == 'C' );
    
    // unsigned
    assert( 50 + 1 > 50 );
    assert( 100 / 2 == 50 );
    assert( 23 * 2 + 54 == 100 );
    assert( 1000 % 2 != 1 );
    assert( 1111 - 999 <= 123 );
    
    // int
    assert( 123 == 100 + 20 + 3 );
    assert( -100 / 2 != 0 );
    assert( 123 != 1 + 2 + 3 );
    assert( 1 + 1 > 1 );
    assert( 100 < 1000 / 2 );
    
    // double
    assert( 0.23 > -1.0 );
    assert( 3E2 == 3e2 );
    assert( 3E2 == 3 * 10* 10 );
    assert( 3E2 == 300.0 );
    assert( 3E6 == 3000000.0 );
    assert( 1.0 );
    
    // string
    assert( "abcd"s == "ab"s + "cd"s );
    assert( "Hola"s == "H"s + "o"s + "l"s + "a"s );
    
    return 0;
}
