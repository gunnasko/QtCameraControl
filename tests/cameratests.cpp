#include <QtTest/QTest>
#include <QFile>
#include "../abstractcamera.h"

class CameraTests : public QObject
{
    Q_OBJECT
private slots:
    void getNewFileName_data();
    void getNewFileName();
};

void CameraTests::getNewFileName_data()
{
    //Remove all exisiting files in test dir
    auto testDir = QDir(QDir::currentPath());
    testDir.setNameFilters(QStringList() << ".jpg");
    testDir.setFilter(QDir::Files);
    foreach(auto dirFile, testDir.entryList())
    {
        testDir.remove(dirFile);
    }
    auto dirString = testDir.absolutePath();

    //Create test files
    QFile testFile1("IMG1.jpg");
    testFile1.open(QFile::WriteOnly);
    testFile1.close();

    QFile testFile2("IMAGE500.jpg");
    testFile2.open(QFile::WriteOnly);
    testFile2.close();


    QTest::addColumn<QString>("prefix");
    QTest::addColumn<QString>("path");
    QTest::addColumn<QString>("result");

    QTest::newRow("First picture") << "img" << dirString << dirString + "/img1";
    QTest::newRow("Test against file") << "IMG" << dirString << dirString + "/IMG2";
    QTest::newRow("Test against file large number") << "IMAGE" << dirString << dirString + "/IMAGE501";
    QTest::newRow("Number in prefix") << "img04" << dirString << dirString + "/img041";
}

void CameraTests::getNewFileName()
{

    QFETCH(QString, prefix);
    QFETCH(QString, path);
    QFETCH(QString, result);
    QCOMPARE(AbstractCamera::getNewFileName(prefix, QDir(path)), result);
}

QTEST_MAIN(CameraTests)
#include "cameratests.moc"
