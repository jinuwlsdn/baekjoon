# Copilot Instructions for Baekjoon Solutions

## Project Overview
This repository contains C++ solutions for Baekjoon Online Judge problems. Each problem is implemented as a standalone .cpp file that reads from stdin and writes to stdout.

## Architecture
- **Single-file structure**: One .cpp file per problem, compiled to a matching executable
- **No dependencies**: Relies solely on C++ Standard Library (STL)
- **Data flow**: Input via `cin`, output via `cout`, no file I/O unless specified

## Build and Run Workflow
- **Compile**: Use VS Code task "C/C++: g++ 활성 파일 빌드" or run `g++ -g main.cpp -o main` in terminal
- **Execute**: Run `./main` with input redirected, e.g., `./main < input.txt`
- **Debug**: Compile with `-g` flag, set breakpoints in VS Code

## Coding Conventions
- **Namespace**: `using namespace std;` for concise competitive coding style
- **Headers**: Include all STL headers at top (e.g., `<iostream>`, `<vector>`, `<algorithm>`)
- **Main structure**: `int main() { /* read input */ /* solve */ /* output */ return 0; }`
- **Problem ID**: Comment problem number at start of main, e.g., `//3986`
- **Variables**: Short names common (n, m, s, v), vectors for arrays
- **Fast I/O**: Add `ios::sync_with_stdio(false); cin.tie(NULL);` for large inputs

## Common Patterns
- **Stack problems** (e.g., 3986): Use `std::stack<char>` or `std::vector<char>` as stack
- **Graph traversal**: `std::vector<std::vector<int>>` for adjacency lists, BFS/DFS with `std::queue`
- **Sorting**: `std::sort` with lambdas for custom comparators
- **Sets/Maps**: `std::set`, `std::map` for unique elements and key-value pairs

## Key Files
- [main.cpp](main.cpp): Current problem implementation (3986 - 좋은 단어)

## Integration Points
- **Baekjoon submission**: Copy code to website, ensure no extra includes
- **Testing**: Use sample inputs from problem page, verify outputs match</content>
<parameter name="filePath">/workspaces/baekjoon/.github/copilot-instructions.md