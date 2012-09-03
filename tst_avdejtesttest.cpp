#include <QtCore/QString>
#include <QtTest/QtTest>
#include <QtCore/QCoreApplication>
#include <QtGui>
#include "../textedit.h"

class AvdejTestTest : public QObject
{
    Q_OBJECT

public:
    AvdejTestTest();

private Q_SLOTS:
    void testCase1();
    void testCase2();
    void testCase3();
    void testCase4();
    void testCase5();
    void testCase6();
    void testCase7();
};

AvdejTestTest::AvdejTestTest()
{
}

void AvdejTestTest::testCase1()
{
    QLineEdit lineEdit;
    QTest::keyClicks(&lineEdit, "hello world");
    QCOMPARE(lineEdit.text(), QString("hello world"));
}
void AvdejTestTest::testCase2()
{
    TextEdit txt;
    QString result =txt.textSize("12");
    bool success;
    if (result=="12")
        success=true;
    else success=false;
    QCOMPARE(true,success);
}
void AvdejTestTest::testCase3()
{
    TextEdit txt;
    QTextEdit mytxt;
    QTest::keyClicks(&mytxt, "bla bla bla");
    QCOMPARE(mytxt.toPlainText(), QString("bla bla bla"));
}
void AvdejTestTest::testCase4()
{
    TextEdit txt;
    bool p;
    p=txt.textBold();
    QCOMPARE(true,p);
}
void AvdejTestTest::testCase5()
{
    TextEdit txt;
    bool success;
    int result =txt.textStyle(0);
    if (result==0)
        success=true;
    else success=false;
    QCOMPARE(true,success);
}
void AvdejTestTest::testCase6()
{
    TextEdit txt;
    bool p;
    p=txt.textItalic();
    QCOMPARE(true,p);
}
void AvdejTestTest::testCase7()
{
    TextEdit txt;
    bool OK;
    QString SRTING = "qwerty";
    OK = txt.ForSaveWord(SRTING);
    QCOMPARE(OK,true);
}

QTEST_MAIN(AvdejTestTest);

#include "tst_avdejtesttest.moc"
