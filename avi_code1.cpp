#include <iostream>
#include <cstring>

void xor_cipher(char* param_1, unsigned long param_2, char* param_3, unsigned long param_4)
{
    for (unsigned long i = 0; i < param_2; i++)
    {
        param_1[i] = param_1[i] ^ param_3[i % param_4];
    }
}

int main(int argc, const char** argv)
{
    const char* encryptedFlag = "38352E353A370B2D1E1B165157430715675B5749165206135C4D3C0F5D4E4A07524753103D5A004E4A18";
    const char* secretKey = "secret_key";
    unsigned long encryptedFlagLength = strlen(encryptedFlag);
    unsigned long secretKeyLength = strlen(secretKey);

    char* decryptedFlag = new char[encryptedFlagLength + 1];
    strcpy(decryptedFlag, encryptedFlag);

    // Call xor_cipher to decrypt the flag
    xor_cipher(decryptedFlag, encryptedFlagLength, const_cast<char*>(secretKey), secretKeyLength);

    // The decrypted flag will be available in the decryptedFlag variable
    std::cout << "Decrypted Flag: " << decryptedFlag << std::endl;

    delete[] decryptedFlag;

    return 0;
}
