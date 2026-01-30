// 1️⃣ Star Pattern – Right Angle Triangle
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {   // ❌ wrong condition
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {   // ✅ correct
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// 2️⃣ Star Pyramid Pattern
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";   // ❌ no spaces handling
        }
        cout << endl;
    }
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }
        for (int star = 1; star <= (2 * i - 1); star++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// 3️⃣ Find Missing Number in Array
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        sum = sum + arr[i];
    }

    cout << "Missing number is: " << sum; // ❌ wrong logic
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < 4; i++) {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;
    cout << "Missing number is: " << missing;
    return 0;
}

// 4️⃣ Find Duplicate Elements in Array
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3};
    int n = 4;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";   // ❌ prints all elements
    }
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3};
    int n = 4;

    cout << "Duplicate elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    return 0;
}

// 5️⃣ Check Anagram Strings
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    string s1 = "listen";
    string s2 = "silent";

    if (s1.length() == s2.length())
        cout << "Anagram";   // ❌ only length checked

    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    string s1 = "listen";
    string s2 = "silent";
    int count[256] = {0};

    if (s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    for (int i = 0; i < s1.length(); i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";
    return 0;
}

// 6️⃣ First Non-Repeating Character
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    string s = "aabbc";
    cout << s[0];   // ❌ incorrect assumption
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    string s = "aabbc";
    int freq[256] = {0};

    for (int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i]] == 1) {
            cout << "First non-repeating character: " << s[i];
            break;
        }
    }
    return 0;
}

// 7️⃣ Rotate Array Left by K Positions
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int k = 2;

    for (int i = k; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5, k = 2;
    int temp[5];

    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + k) % n];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
        cout << arr[i] << " ";
    }
    return 0;
}

// 8️⃣ Intersection of Two Arrays
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {1,2,3};
    int b[] = {2,3,4};

    for(int i=0;i<3;i++)
        cout<<a[i]<<" ";   // ❌ not intersection

    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    int n = 3, m = 3;

    cout << "Intersection: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }
    return 0;
}

// 9️⃣ Check Armstrong Number
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int n = 153;
    int sum = 0;

    if (sum == n)
        cout << "Armstrong";

    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int n = 153, temp = n, sum = 0;

    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == n)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}

// 🔟 Generate All Substrings of a String
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    string s = "abc";
    cout << s;   // ❌ prints only string
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    string s = "abc";

    for (int i = 0; i < s.length(); i++) {
        for (int len = 1; len <= s.length() - i; len++) {
            cout << s.substr(i, len) << endl;
        }
    }
    return 0;
}