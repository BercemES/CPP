#include "ScalarConverter.hpp"
#include <iomanip> // BURADA (std::fixed ve setprecision için eklendi)

// Constructor ve Destructor'lar private olduğu için burada boş bırakıyoruz
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) { (void)other; }
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) { (void)other; return *this; } // BURADA (return eklendi)
ScalarConverter::~ScalarConverter() {}

void ScalarConverter::printAll(double d) 
{
    // CHAR KONTROLÜ
    std::cout << "char: ";
    if (std::isnan(d) || std::isinf(d) || d < 0 || d > 127)
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(static_cast<int>(d)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(d) << "'" << std::endl;

    // INT KONTROLÜ
    std::cout << "int: ";
    // BURADA (İnt sınırları için numeric_limits kullanımı ve nan/inf kontrolü eklendi)
    if (std::isnan(d) || std::isinf(d) || d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(d) << std::endl;

    // FLOAT & DOUBLE KONTROLÜ
    // BURADA (Özel durumlar nan/inf için ayrı bloklar oluşturuldu)
    if (std::isnan(d)) {
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    } else if (std::isinf(d)) {
        std::cout << "float: " << (d < 0 ? "-inff" : "+inff") << std::endl;
        std::cout << "double: " << (d < 0 ? "-inf" : "+inf") << std::endl;
    } else {
        // BURADA (Hassasiyet ayarı std::fixed ve setprecision(1) ile yapıldı)
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
    }
}

void ScalarConverter::convert(std::string value) {
    // BURADA (Daha temiz bir akış için return'ler düzenlendi)
    if (isChar(value))
        printAll(static_cast<double>(value[0]));
    else if (isInt(value))
        printAll(std::atof(value.c_str()));
    else if (isFloat(value))
        printAll(std::atof(value.c_str()));
    else if (isDouble(value))
        printAll(std::atof(value.c_str()));
    else {
        // BURADA (Bilinmeyen girişlerde tüm tipler için hata çıktısı eklendi)
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }