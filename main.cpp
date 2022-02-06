#include "principal.h"

#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLocale::system().language();
   QTranslator traduccion;


//    // Solicitando al usuario que seleccione un idioma
//    QStringList idiomas;
//    idiomas << "Ingles"<< "Español";
//    QString idiomaSeleccionado = QInputDialog::getItem(NULL,
//                                                       "Idioma",
//                                                       "Seleccione un idioma",
//                                                       idiomas);
//    // Dependiendo del idioma seleccionado, carga el archivo de rtaducción}
    if (QLocale::system().language() == QLocale::English){
        traduccion.load(":/MiPaint_en.qm");
        a.installTranslator(&traduccion);
    }

//    // Si es diferente de español, se instala la traducción en TODA la aplicación
//    if (idiomaSeleccionado != "Español"){}
    Principal w;
    w.show();
    return a.exec();
}
