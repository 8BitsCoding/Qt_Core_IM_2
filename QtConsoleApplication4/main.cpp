#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qpointer.h>

#include "test.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QObject* obj = new QObject(nullptr);
	obj->setObjectName("My Object");

	QPointer<QObject> p(obj);
	test t;
	t.widget = p;
	t.useWidget();
	// 이런식으로 할당하면 메모리 delete를 따로 안해줘도 될까?

	return a.exec();
}
