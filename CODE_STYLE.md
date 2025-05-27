# 📝 Code Style Guidelines

<div align="center">
  <img src="https://media.giphy.com/media/ko7twHhomhk8E/giphy.gif" alt="Clean Code" width="300" />
  <h3>"Clean code always looks like it was written by someone who cares."<br>― Robert C. Martin</h3>
</div>

To maintain consistency and readability throughout this repository, please follow these guidelines. Well-structured code not only makes collaboration easier but also enhances learning.

## 🖥️ C Code Style

1. **Naming Convention**:
   - Functions: snake_case (e.g., `bubble_sort`)
   - Variables: snake_case (e.g., `int array_size`)
   - Constants: UPPERCASE with underscores (e.g., `MAX_SIZE`)
   - Typedefs: PascalCase (e.g., `typedef struct Node Node`)

2. **Indentation**: Use 4 spaces for indentation (no tabs)

3. **Braces**:
   - Opening brace on the same line as control statements
   - Closing brace on its own line
   ```c
   if (condition) {
       // code
   }
   ```

4. **Comments**:
   - Use `//` for single-line comments
   - Use `/* */` for multi-line comments

5. **Function Documentation**:
   ```c
   /**
    * Function description
    * @param parameter_name Description of parameter
    * @return Description of return value
    */
   ```

## 🧬 C++ Code Style

<div align="center">
  <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="C++ Code" width="200" />
</div>

1. **Naming Convention**:
   - Classes/Structs: PascalCase (e.g., `LinkedList`)
   - Functions/Methods: camelCase (e.g., `insertNode`)
   - Variables: camelCase (e.g., `int nodeCount`)
   - Constants: UPPERCASE with underscores (e.g., `MAX_SIZE`)
   - Private members: prefixed with m_ (e.g., `m_size`)

2. **Indentation**: Use 4 spaces for indentation (no tabs)

3. **Braces**:
   - Opening brace on the same line as control statements or class/function declarations
   - Closing brace on its own line
   ```cpp
   class Example {
   public:
       void method() {
           // code
       }
   };
   ```

4. **Comments**:
   - Use `//` for single-line comments
   - Use `/* */` for multi-line comments

5. **Function Documentation**:
   ```cpp
   /**
    * Method description
    * @param parameter_name Description of parameter
    * @return Description of return value
    */
   ```

## General Guidelines

1. **File Organization**:
   - One class per file (for C++)
   - Related functions in one file (for C)
   - Include guards in header files

2. **Error Handling**:
   - Use appropriate error handling mechanisms
   - Check return values of functions that can fail
   - Use assertions for debugging

3. **Memory Management**:
   - Free allocated memory properly
   - Check for memory leaks
   - Use smart pointers in C++ when appropriate

4. **Code Readability**:
   - Write clear, self-documenting code
   - Avoid deep nesting

## 📚 Example Implementations

### 🧩 C Example: Binary Search

```c
/**
 * @brief Binary search implementation
 * @param arr Sorted array to search in
 * @param left Left boundary index
 * @param right Right boundary index
 * @param value Value to search for
 * @return Index of found element or -1 if not found
 */
int binary_search(const int arr[], int left, int right, int value) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Check if value is present at mid
        if (arr[mid] == value) {
            return mid;
        }
        
        // If value greater, ignore left half
        if (arr[mid] < value) {
            left = mid + 1;
        } else {
            // If value is smaller, ignore right half
            right = mid - 1;
        }
    }
    
    // Element not present
    return -1;
}
```

### 🧩 C++ Example: Vector Manipulation

```cpp
/**
 * @brief Find and remove all occurrences of a value in a vector
 * @param vec Vector to modify
 * @param value Value to remove
 * @return Number of elements removed
 */
template <typename T>
size_t removeAll(std::vector<T>& vec, const T& value) {
    size_t originalSize = vec.size();
    
    // Use STL algorithms for clean implementation
    vec.erase(
        std::remove(vec.begin(), vec.end(), value),
        vec.end()
    );
    
    return originalSize - vec.size();
}
```

<div align="center">
  <img src="https://media.giphy.com/media/xT9IgzoKnwFNmISR8I/giphy.gif" alt="Code" width="200" />
  <p><i>Clean code is not written by following a set of rules. It is written by skilled professionals who understand that clarity is king.</i></p>
</div>
   - Keep functions small and focused
   - Use meaningful variable and function names
