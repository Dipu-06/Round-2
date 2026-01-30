// 1️⃣ Largest of Three Numbers
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;

    if (a > b || a > c)
        cout << a;
    else if (b > a || b > c)
        cout << b;
    else
        cout << c;

    return 0;
}
// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;

    if (a > b && a > c)
        cout << a;
    else if (b > a && b > c)
        cout << b;
    else
        cout << c;

    return 0;
}


// 2️⃣ Leap Year
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int year = 1900;

    if (year % 4 == 0)
        cout << "Leap Year";
    else
        cout << "Not Leap Year";

    return 0;
}
// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int year = 1900;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << "Leap Year";
    else
        cout << "Not Leap Year";

    return 0;
}

// 3️⃣ Even Numbers (1 to 50)
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 1)
            cout << i << " ";
    }
    return 0;
}
// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }
    return 0;
}

// 4️⃣ Factorial
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int num = 5, fact = 1;

    for (int i = 0; i <= num; i++)
        fact *= i;

    cout << fact;
    return 0;
}
// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int num = 5, fact = 1;

    for (int i = 1; i <= num; i++)
        fact *= i;

    cout << fact;
    return 0;
}

// 5️⃣ Prime Number
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int num = 9;

    for (int i = 2; i < num; i++) {
        if (num % i != 0) {
            cout << "Prime";
            break;
        }
    }
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int num = 9;
    bool isPrime = true;

    if (num <= 1)
        isPrime = false;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}

// 6️⃣ Count Digits
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int num = 0, count = 0;

    while (num > 0) {
        count++;
        num /= 10;
    }

    cout << count;
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int num = 0, count = 0;

    if (num == 0)
        count = 1;
    else {
        while (num > 0) {
            count++;
            num /= 10;
        }
    }

    cout << count;
    return 0;
}

// 7️⃣ Sum of Digits
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int num = 456, sum;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << sum;
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int num = 456, sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << sum;
    return 0;
}

// 8️⃣ Reverse a Number
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int num = 123, rev;

    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    cout << rev;
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int num = 123, rev = 0;

    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    cout << rev;
    return 0;
}

// 9️⃣ Palindrome Number
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int num = 121, rev = 0;

    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    if (num == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int num = 121, temp = num, rev = 0;

    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (num == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

// 🔟 Fibonacci Series
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c;

    for (int i = 1; i <= 5; i++) {
        c = a + b;
        cout << c << " ";
        a = b + c;
        b = c;
    }

    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c;

    for (int i = 1; i <= 5; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}