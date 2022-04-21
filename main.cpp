//Librerias
#include<conio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdlib>

//Clases
#include "ClsPacientes.h"

using namespace std;

//paciente

void crearArchivoPaciente();
void nuevoPaciente( fstream& );

int main()
{
    //Variables
    int imenuPrincipal;



   //Menu principal
	do
    {
	system("cls");

	cout<<"----------------------------------------"<<endl;
	cout<<"|-----BIENVENIDO AL SISTEMA MEDICO-----|"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"1. CATALOGOS"<<endl;
	cout<<"2. PROCESOS"<<endl;
	cout<<"3. INFORMES"<<endl;
	cout<<"0. EXIT"<<endl;

	cout<<"-------------------------------"<<endl;
	cout<<"OPCIONES A ESCOGER :     [1/2/3/0]"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"INGRESA TU OPCION : ";
    cin>>imenuPrincipal;

    switch(imenuPrincipal)
    {
    case 1:
        {
            int choice2;
            do
            {
                system("cls");
                //Menu segundo nivel
                cout<<"-------------------------------"<<endl;
                cout<<" |     SISTEMA DE CATALOGOS  |"<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"1. CRUD empleados"<<endl;
                cout<<"2. CRUD pacientes"<<endl;
                cout<<"3. CRUD examenes"<<endl;
                cout<<"4. CRUD bancos"<<endl;
                cout<<"0. Volver al menu principal"<<endl;

                cout<<"-------------------------------"<<endl;
                cout<<"Opcion a escoger:[1/2/3/4/0]"<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"Ingresa tu Opcion: ";
                cin>>choice2;
                //Menu segundo nivel
                switch(choice2)
                 {
                case 1:

                    break;

                case 2:
                    {
                         int iSeleccionMenuPacientes;
                        do
                        {
                            system("cls");
                            //archivoempresa
                            // abrir el archivo en modo de lectura y escritura
                            fstream archivoPacientes("registropacientes.dat", ios::in | ios::out | ios::binary);

                            // salir del programa si fstream no puede abrir el archivo
                            if ( !archivoPacientes ) {
                                cerr << "No se pudo abrir el archivo." << endl;
                                crearArchivoPaciente();
                                cout <<  "Archivo creado satisfactoriamente, pruebe de nuevo";
                                exit ( 1 );
                                exit( EXIT_FAILURE );
                            }

                            cout<<"-------------------------------"<<endl;
                            cout<<" |  SISTEMA GESTION PACIENTES |"<<endl;
                            cout<<"-------------------------------"<<endl;
                            cout<<"1. Ingreso paciente"<<endl;
                            cout<<"2. Despliegue paciente"<<endl;
                            cout<<"3. Modifica paciente"<<endl;
                            cout<<"4. Imprimir Registro de paciente"<<endl;
                            cout<<"5. Borra paciente"<<endl;
                            cout<<"6. Buscar paciente"<<endl;
                            cout<<"0. Volver al menu superior"<<endl;

                            cout<<"-------------------------------"<<endl;
                            cout<<"Opcion a escoger:[1/2/3/4/5/6/0]"<<endl;
                            cout<<"------------------------------"<<endl;
                            cout<<"Ingresa tu Opcion: ";
                            cin>>iSeleccionMenuPacientes;

                            switch(iSeleccionMenuPacientes)
                            {
                                case 1:
                                    {
                                        //agregando paciente
                                        system("cls");
                                        nuevoPaciente(archivoPacientes);
                                    }

                                    break;

    case 2:

		break;
	case 3:

	    break;

	case 0:

	    break;

    default:
		cout<<"CARACTER NO VALIDO, INGRESE OTRA OPCION";
		getch();
        break;
	}


	}while(imenuPrincipal!= 0);


	// crear e insertar registro paciente
void nuevoPaciente( fstream &insertarEnArchivoPaciente)
{
   // obtener nombre del paciente a crear
   int m_sNombrePaciente= obtenerPaciente( "Escriba el nombre del paciente");

   // desplazar el apuntador de posición del archivo hasta el registro correcto en el archivo
   insertarEnArchivoPaciente.seekg(
      ( m_sNombrePaciente- 1 ) * sizeof( ClsPacientes) );


  // leer el registro del archivo
   ClsPacientes pacientes;
   insertarEnArchivoPacientes.read( reinterpret_cast< char * >( &pacientes),
      sizeof( ClsPacientes) );

   // crear el registro, si éste no existe ya
   if ( empresa.mobtenerNumeroEmpresa() == 0 ) {

        char m_snombrePaciente[20];
        char m_sapellidoPaciente[20];
        char m_sexoPaciente[10];
        char m_sdireccionPaciente[ 20 ];
        int m_itelefonoPaciente;
        int m_ifechaNacimientoPaciente;
        int m_iedadPaciente;

      // el usuario introduce
      cout << "Escriba el nombre del paciente:" << endl;
      cin >> setw( 20 ) >> m_snombrePaciente;
      cout << "Escriba el apellido del paciente:" << endl;
      cin >> setw( 20 ) >> m_sapellidoPaciente;
      cout << "Escriba el sexo del pacienete:" << endl;
      cin >> setw( 10 ) >> m_sexoPaciente;
      cout << "Escriba direccion del paciente:" << endl;
      cin >> setw( 20 ) >>m_sdireccionPaciente ;
      cout << "Ecribir telefono del paciente:" << endl;
      cin >> setw( 9 ) >>m_itelefonoPaciente;
      cout << "Escriba la fecha de nacimiento del paciente:" << endl;
      cin >> setw( 15 ) >>m_ifechaNacimientoPaciente;
      cout << "Escriba la edad del paciente:" << endl;
      cin >> setw( 3 ) >>m_iedadPaciente;

      pacientes.mestablecerNombreP(m_snombrePacienteombre);
      pacientes.mestablecerApellidoP(m_sapellidoPaciente);
      pacientes.mestablecerSexoP(m_sexoPaciente);
      pacientes.mestablecerDireccionP(m_sdireccionPaciente);
      pacientes.mestablecerTelefonoP(m_itelefonoPaciente);
      pacientes.mestablecerFechaNacimientoP(m_ifechaNacimientoPaciente);
      pacientes.mestablecerEdadP(m_iedadPaciente);
   }
}

   return 0;
}





