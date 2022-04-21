//librerias
#include<string>
#include<iostream>

//C++
#ifndef CLSPACIENTES_H
#define CLSPACIENTES_H

using std::string;

class ClsPacientes
{
    public:
        //constructor
        ClsPacientes(string = "", string = "", string = "", string = "", int = 0, int = 0, int = 0 );

        //Funciones
        void mestablecerNombreP( string );
        string mobtenerNombreP() const;

        void mestablecerApellidoP( string );
        string mobtenerApellidoP() const;

        void mestablecerSexoP( string );
        string mobtenerSexoP() const;

        void mestablecerDireccionP( string );
        string mobtenerDireccionP() const;

        void mestablecerTelefonoP(int);
        int mobtenerTelefonoP()const;

        void mestablecerFechaNacimientoP(int);
        int mobtenerFechaNacimientoP()const;

        void mestablecerEdadP(int);
        int mobtenerEdadP()const;

        virtual ~ClsPacientes();

    protected:

    private:
        //Atributos
        char m_snombrePaciente[20];
        char m_sapellidoPaciente[20];
        char m_sexoPaciente[10];
        char m_sdireccionPaciente[ 20 ];
        int m_stelefonoPaciente;
        int m_ifechaNacimientoPaciente;
        int m_iedadPaciente;
};

#endif // CLSPACIENTES_H
