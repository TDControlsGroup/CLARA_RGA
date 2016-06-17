#ifndef RGAARCHIVER_H
#define RGAARCHIVER_H

#include <QObject>
#include <QString>


class RgaArchiver
{
//    QNetworkAccessManager networkManager;
    QString UserURL;
public:
    RgaArchiver();
    void GetData();
    void SetRange();
    void SetURL(QString &url);
};

#endif // RGAARCHIVER_H
