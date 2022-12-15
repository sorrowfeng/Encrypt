# Encrypt
简单的加解密算法

# 使用说明
``` cpp
#include "encryptionalgorithm.h"

// 加密
QByteArray encrypt = EncryptionAlgorithm::toEncryption(QByteArray input);
// 解密
QByteArray decrypt = EncryptionAlgorithm::toDecryption(QByteArray input);
```