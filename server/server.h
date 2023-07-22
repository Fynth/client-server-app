#ifndef SERVER_H
#define SERVER_H
#include <QTcpSocket>
#include <QTcpServer>
#include <QVector>
#include <QtNetwork>
#include <QTime>

class Server : public QTcpServer
{
    Q_OBJECT
public:
    Server();
    QTcpSocket *socket;

private:
    QVector <QTcpSocket*> Sockets;
    void SendToClient(QString str);
    quint16 nextBlockSize;

public slots:
    void incomingConnection(qintptr socketDescriptor);
    void slotReadyRead();
};

#endif // SERVER_H
