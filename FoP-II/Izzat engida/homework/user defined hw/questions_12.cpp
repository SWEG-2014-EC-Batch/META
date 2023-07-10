#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class HugeInteger {
public:
    int digits[40] = {0};

    void parse(string s) {
        for (int i = 0; i < s.size(); i++) {
            digits[40 - s.size() + i] = s[i] - '0';
        }
    }

    string toString() {
        string s = "";
        bool leadingZero = true;
        for (int i = 0; i < 40; i++) {
            if (digits[i] != 0) leadingZero = false;
            if (!leadingZero) s += to_string(digits[i]);
        }
        if (s == "") s = "0";
        return s;
    }

    HugeInteger add(HugeInteger h) {
        HugeInteger result;
        int carry = 0;
        for (int i = 39; i >= 0; i--) {
            int sum = digits[i] + h.digits[i] + carry;
            result.digits[i] = sum % 10;
            carry = sum / 10;
        }
        return result;
    }

    HugeInteger subtract(HugeInteger h) {
        HugeInteger result;
        int borrow = 0;
        for (int i = 39; i >= 0; i--) {
            int diff = digits[i] - h.digits[i] - borrow;
            if (diff < 0) {
                diff += 10;
                borrow = 1;
            } else {
                borrow = 0;
            }
            result.digits[i] = diff;
        }
        return result;
    }

    bool isEqualTo(HugeInteger h) {
        for (int i = 0; i < 40; i++) {
            if (digits[i] != h.digits[i]) return false;
        }
        return true;
    }

    bool isNotEqualTo(HugeInteger h) {
        return !isEqualTo(h);
    }

    bool isGreaterThan(HugeInteger h) {
        for (int i = 0; i < 40; i++) {
            if (digits[i] > h.digits[i]) return true;
            if (digits[i] < h.digits[i]) return false;
        }
        return false;
    }

    bool isLessThan(HugeInteger h) {
        return !isGreaterThan(h) && !isEqualTo(h);
    }

    bool isGreaterThanOrEqualTo(HugeInteger h) {
        return isGreaterThan(h) || isEqualTo(h);
    }

    bool isLessThanOrEqualTo(HugeInteger h) {
        return isLessThan(h) || isEqualTo(h);
    }

    bool isZero() {
        for (int i = 0; i < 40; i++) {
            if (digits[i] != 0) return false;
        }
        return true;
    }
};

int main() {
    HugeInteger a, b, c;

    a.parse("1234567890123456789012345678901234567890");
    b.parse("9999999999999999999999999999999999999999");

    c = a.add(b);
    cout << c.toString() << endl;

    c = a.subtract(b);
    cout << c.toString() << endl;

    cout << a.isEqualTo(b) << endl;
    cout << a.isNotEqualTo(b) << endl;
    cout << a.isGreaterThan(b) << endl;
    cout << a.isLessThan(b) << endl;
    cout << a.isGreaterThanOrEqualTo(b) << endl;
    cout << a.isLessThanOrEqualTo(b) << endl;

    cout << a.isZero() << endl;

    return 0;
}