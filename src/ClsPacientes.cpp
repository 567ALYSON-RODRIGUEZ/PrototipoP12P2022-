//clase
#include "ClsPacientes.h"

//librerias
#include<conio.h>
#include<iomanip>
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cstring>

using namespace std;

//constructor
ClsPacientes::ClsPacientes(string svalorNombreP, string svalorApellidoP, string svalorSexoP, string svalorDireccionP, int ivalorTelefonoP, int ivalorNacimientoP, int ivalorEdadP)
{
    mestablecerNombreP(svalorNombreP);
    mestablecerApellidoP(svalorApellidoP);
    mestablecerSexoP(svalorSexoP);
    mestablecerDireccionP(svalorDireccionP);
    mestablecerTelefonoP(ivalorTelefonoP);
    mestablecerDireccionP(svalorDireccionP);
    mestablecerTelefonoP(ivalorTelefonoP);
    mestablecerFechaNacimientoP(ivalorNacimientoP);
    mestablecerEdadP(ivalorEdadP);
}

//Funciones del nombre del Paciente
string ClsPacientes::mobtenerNombreP() const
{
    return m_snombrePaciente;
}

void ClsPacientes::mestablecerNombreP( string sNombreP )
{
   // copiar a lo más 20 caracteres de la cadena en nombre
   const char *svalorNombreP = sNombreP.data();
   int ilongitud = strlen( svalorNombreP );
   ilongitud = ( ilongitud < 20 ? ilongitud : 19 );
   strncpy( m_snombrePaciente, svalorNombreP, ilongitud );

   // anexar caracter nulo al final del nombre
   m_snombrePaciente[ ilongitud ] = '\0';

}

//Funciones del apellido del paciente
string ClsPacientes::mobtenerApellidoP() const
{
    return m_sapellidoPaciente;
}

void ClsPacientes::mestablecerApellidoP( string sApellidoP )
{
    // copiar a lo más 20 caracteres de la cadena del telefono
   const char *svalorApellidoP = sApellidoP.data();
   int ilongitud = strlen( svalorApellidoP );
   ilongitud = ( ilongitud< 20 ? ilongitud : 19 );
   strncpy( m_sapellidoPaciente, svalorApellidoP, ilongitud );

   // anexar caracter nulo al final de la cadena de la direccion
   m_sapellidoPaciente[ ilongitud ] = '\0';
}


//Funciones del sexo del paciente
string ClsPacientes:: mobtenerSexoP() const
{
    return m_sexoPaciente;
}

void ClsPacientes::mestablecerSexoP( string sSexoP )
{
   // copiar a lo más 20 caracteres de la cadena en nombree
   const char *svalorSexoP = sSexoP.data();
   int ilongitud = strlen( svalorSexoP );
   ilongitud = ( ilongitud < 20 ? ilongitud : 19 );
   strncpy(m_sexoPaciente, svalorSexoP, ilongitud );

   // anexar caracter nulo al final del nombre
   m_sexoPaciente[ ilongitud ] = '\0';

}

//Funciones direccion del paciente
string ClsPacientes::mobtenerDireccionP() const
{
    return m_sdireccionPaciente;
}

void ClsPacientes::mestablecerDireccionP( string sDireccionP )
{
   // copiar a lo más 20 caracteres de la cadena en nombree
   const char *svalorDireccionP = sDireccionP.data();
   int ilongitud = strlen( svalorDireccionP);
   ilongitud = ( ilongitud < 20 ? ilongitud : 19 );
   strncpy( m_sdireccionPaciente, svalorDireccionP, ilongitud );.

   // anexar caracter nulo al final del nombre
   m_sdireccionPaciente[ ilongitud ] = '\0';

}

//Funciones telefono del paciente
int ClsPacientes::mobtenerTelefonoP() const
{
    return m_stelefonoPaciente;
}

void ClsPacientes::mestablecerTelefonoP(int ivalorTelefonoP)
{
    m_stelefonoPaciente =  ivalorTelefonoP;
}


//Funciones naciento del paciente
int ClsPacientes::mobtenerFechaNacimientoP() const
{
    return m_ifechaNacimientoPaciente;
}

void ClsPacientes::mestablecerFechaNacimientoP (int ivalorFechaNacimientoP)
{
    m_ifechaNacimientoPaciente = ivalorFechaNacimientoP;
}


//Funciones edad del paciente
int ClsPacientes::mobtenerEdadP() const
{
    return  m_iedadPaciente;
}

void ClsPacientes::mestablecerEdadP(int ivalorEdadP)
{
     m_iedadPaciente = ivalorEdadP;
}

/*ClsPacientes::~ClsPacientes()
{
    //dtor
}
*/
