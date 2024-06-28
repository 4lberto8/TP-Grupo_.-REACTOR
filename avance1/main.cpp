//SINOPSIS:
// EN PROCESO:
// FALTA:

#include "iostream"
#include "conio.h"

#include "pantalla_presentacion.h"

//AL TERMINAR EL PROYECTO BORRAR LOS "#INCLUDE"s DE ABAJO, DEBIDO A QUE 
//ESTOS SON LLAMADOS AQUI SOLO PARA COMPROBAR SI SE DIBUJARON CORRECTAMENTE
//#include "pantalla_titulo.h"
//#include "pantalla_gameover.h"
//#include "pantalla_youwin.h"
//#include "nivel.h"

int main()
{
    //80 PIXELES ANCHO, 80 PIXELES ALTO
    wS(80, 40);

    //LLAMADO PRINCIPAL
    inicio_proy* opresentacion;
    opresentacion = new inicio_proy();

    titulo* otitulo;
    otitulo = new titulo();
    nivel* onivel;
    onivel = new nivel();
    ganar* oganar;
    oganar = new ganar();
    perder* operder;
    operder = new perder();

    //opresentacion->TEST_KNIGHTSX_15(2, 1);

    //otitulo->TITULO_MENU_116_v1(0, 23);
    //otitulo->TITULO_MENU_252_v1(0, 26);
    //otitulo->MENU();
    //otitulo->INSTRUCCIONES();
    //otitulo->CREDITOS();

    //operder->TEST_FONT59X_390(2, 1);
    //oganar->TITULO_GANAR_v2();

    //onivel->nivel_TEST();
    //onivel->nivel1_2();
    //onivel->nivel2_2_1();
    //onivel->nivel3_3();

    //COMMANDO PRINCIPAL
    opresentacion->PRESENTACION();

    system("pause>0");
    return 0;
}

//VIDEO:
// El video mostrara todo el juego desde ganar hasta perder (excepto todas las preguntas)
// Tiene que ser descrito oralmente por los 3 integrantes