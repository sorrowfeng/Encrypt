#include "encryptionalgorithm.h"

// 加密
QByteArray encrypt = EncryptionAlgorithm::toEncryption(QByteArray input);
// 解密
QByteArray decrypt = EncryptionAlgorithm::toDecryption(QByteArray input);