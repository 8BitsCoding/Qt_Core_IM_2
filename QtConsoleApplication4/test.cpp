#include "test.h"


test::test(QObject* parent) : QObject(parent)
{

};

void test::useWidget()
{
	// see if there is a pointer!

	if (!widget.data()) {
		qInfo() << "No pointer!!";
		return;
	}

	qInfo() << "Widget : " << widget.data();

	// Access the pointer
	widget.data()->setObjectName("used Widget!");
}
