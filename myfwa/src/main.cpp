#include <QCoreApplication>
#include <QSettings>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QSettings* listenerSettings = new QSettings("../MyFirstWebApp/etc/webapp1.ini",QSettings::IniFormat,&app);
    qDebug("config file loaded");

    return app.exec();
}
