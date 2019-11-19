#pragma once
#include <qobject.h>
#include <qdebug.h>
#include <qpointer.h>

class test : public QObject
{
	Q_OBJECT

public:
	explicit test(QObject * parent = nullptr);

	QPointer<QObject> widget;

	void useWidget();

signals:

public slots:

};

