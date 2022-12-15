#ifndef ENCRYPTIONALGORITHM_H
#define ENCRYPTIONALGORITHM_H

#include <QString>


class EncryptionAlgorithm
{
public:
    static QByteArray toEncryption(QByteArray input);
    static QByteArray toDecryption(QByteArray input);

private:
    static QString toUpperAndLower(QString src); // 大小写
    static QString toXOREncryptUncrypt(QString src, const QChar key); // 异或加
};

#endif // ENCRYPTIONALGORITHM_H
