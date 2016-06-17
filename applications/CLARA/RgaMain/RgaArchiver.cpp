#include "RgaArchiver.h"
#include <stdio.h>
#include <QMap>
#include <QVariant>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>



/*
 * This class is used to communicate with the archiver appliance
 */

RgaArchiver::RgaArchiver()
{}


void RgaArchiver::SetRange()
{

}

void RgaArchiver::SetURL(QString &url)
{
    UserURL = url;
    UserURL = UserURL + "retrieval/data/getData.json?";
}

void RgaArchiver::GetData()
{
//    QMap<QString, QVariant> params;
//    params["pv"] = "rga1:BAR:M1";
//    foreach(QString param, params.keys())
//    {
 //       UserURL << param << "=" < params.keys;
//    }
//    QNetworkRequest request;
//    request.setUrl(url);
//    QUrl url(UserURL);
//    url.setPath(QString("%1%2").arg(url.path()).arg(method));
//    netReply = networkManager.get(request);  // GET
}
