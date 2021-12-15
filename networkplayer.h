#ifndef NETWORKPLAYER_H
#define NETWORKPLAYER_H

#include <QWidget>
#include <QObject>
#include <QtWidgets>
#include <QGraphicsScene>
#include <QPainter>
#include <QGraphicsItem>
#include <QStyleOption>
#include <QtWidgets>
#include <QtNetwork>
#include <QGraphicsPixmapItem>
#include <QString>

class NetworkPlayer : public QObject, public QGraphicsPixmapItem
{


Q_OBJECT
public:
    QString ID;
    NetworkPlayer(QGraphicsItem * parent=0);
    virtual ~NetworkPlayer();


private:
   // QString ID;
    QUdpSocket *udpSocket;

public slots:
    void parsePackets();


};

#endif // NETWORKPLAYER_H
