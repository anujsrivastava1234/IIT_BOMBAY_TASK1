#ifndef ABOUTME_H
#define ABOUTME_H

#include <QObject>

class aboutme : public QObject
{
    Q_OBJECT
public:
    explicit aboutme(QObject *parent = nullptr);

signals:

};

#endif // ABOUTME_H
