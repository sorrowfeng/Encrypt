#include "encryptionalgorithm.h"
#include "simplecrypt.h"

QString EncryptionAlgorithm::toUpperAndLower(QString src)
{
    for(int i = 0; i < src.count(); i++) {
        QChar curC = src.at(i);
        if(curC.isUpper()) {
            curC = curC.toLower();
        } else if(curC.isLower()){
            curC = curC.toUpper();
        }
        src[i] = curC;
    }
    return src;
}

QString EncryptionAlgorithm::toXOREncryptUncrypt(QString src, const QChar key)
{
    for(int i = 0; i < src.count(); i++) {
        src[i] = src.at(i).toLatin1() ^ key.toLatin1();
    }
    return src;
}
// 加密
QByteArray EncryptionAlgorithm::toEncryption(QByteArray input)
{
    SimpleCrypt crypto(Q_UINT64_C(0x01F13CE7F7EFB85A));
    return crypto.encryptToByteArray(input);
}
// 解密
QByteArray EncryptionAlgorithm::toDecryption(QByteArray input)
{
    SimpleCrypt crypto(Q_UINT64_C(0x01F13CE7F7EFB85A));
    return crypto.decryptToByteArray(input);
}
