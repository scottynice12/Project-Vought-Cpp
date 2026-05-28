#include <string>

// Pure logical validation class - no terminal input/output required
class VoughtValidator {
public:
    static bool validateSubject(std::string name, int strength, int durability, int speed) {
        if (name.empty() || name.length() > 10) return false;
        if (strength < 1 || strength > 4) return false;
        if (durability < 1 || durability > 4) return false;
        if (speed < 1 || speed > 4) return false;
        return (strength + durability + speed) == 7;
    }
};
