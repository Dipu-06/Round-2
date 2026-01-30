// 1️⃣ Binary Search Implementation
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;
    int key = 7;
    int low = 0, high = n - 1;

    while (low < high) {                 // ❌ wrong condition
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Element Found";
        }
    }
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;
    int key = 7;
    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = true;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found)
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}

// 2️⃣ Linear Search Implementation
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 6, 8, 10};
    int key = 8;

    for (int i = 0; i < 4; i++) {
        if (arr[i] != key)
            cout << "Not Found";     // ❌ prints multiple times
    }
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 6, 8, 10};
    int n = 4;
    int key = 8;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}

// 3️⃣ Check if Two Arrays Are Equal
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3};
    int b[] = {1, 2, 3};

    if (a == b)                  // ❌ compares addresses
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3};
    int b[] = {1, 2, 3};
    int n = 3;
    bool equal = true;

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            equal = false;
            break;
        }
    }

    if (equal)
        cout << "Arrays are Equal";
    else
        cout << "Arrays are Not Equal";

    return 0;
}

// 4️⃣ Find Longest Word in a Sentence
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    string s = "I love programming very much";
    cout << s;            // ❌ no logic
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    string s = "I love programming very much";
    string current = "", longest = "";
    int maxLen = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            current += s[i];
        } else {
            if (current.length() > maxLen) {
                maxLen = current.length();
                longest = current;
            }
            current = "";
        }
    }

    cout << "Longest word: " << longest;
    return 0;
}

// 5️⃣ Longest Common Prefix
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    string a = "flower";
    string b = "flow";
    cout << a;         // ❌ incorrect
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    string a = "flower";
    string b = "flow";
    string prefix = "";

    int len = min(a.length(), b.length());

    for (int i = 0; i < len; i++) {
        if (a[i] == b[i])
            prefix += a[i];
        else
            break;
    }

    cout << "Longest Common Prefix: " << prefix;
    return 0;
}

// 6️⃣ Maximum Occurring Character
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    string s = "sample text";
    cout << s[0];      // ❌ no frequency logic
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    string s = "sample text";
    int freq[256] = {0};
    char result;
    int maxCount = 0;

    for (int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i]] > maxCount) {
            maxCount = freq[s[i]];
            result = s[i];
        }
    }

    cout << "Maximum occurring character: " << result;
    return 0;
}

// 7️⃣ Bubble Sort Implementation
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 1, 4, 2};
    int n = 4;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (arr[i] < arr[j])
                swap(arr[i], arr[j]);

    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 1, 4, 2};
    int n = 4;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// 8️⃣ Check String Contains Only Digits
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    string s = "123a";
    if (s.length() > 0)
        cout << "Digits";
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    string s = "12345";
    bool onlyDigits = true;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] < '0' || s[i] > '9') {
            onlyDigits = false;
            break;
        }
    }

    if (onlyDigits)
        cout << "String contains only digits";
    else
        cout << "String contains non-digit characters";

    return 0;
}

// 9️⃣ Decimal to Binary Conversion
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    cout << n;      // ❌ no conversion
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int binary[32];
    int i = 0;

    while (n > 0) {
        binary[i++] = n % 2;
        n = n / 2;
    }

    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--)
        cout << binary[j];

    return 0;
}

// 🔟 First Repeated Element in Array
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4};
    cout << arr[0];        // ❌ incorrect assumption
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4};
    int n = 5;
    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << "First repeated element: " << arr[i];
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        cout << "No repeated elements";

    return 0;
}