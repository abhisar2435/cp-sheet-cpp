# Copilot / AI agent instructions for this repo ✅

Short summary
- This repository is a small collection of single-file Competitive Programming solutions in C++ (C++17). Example files: `B_Strange_Machine.cpp`, `C_Prefix_Min_and_Suffix_Max.cpp`, `B_Tab_Closing.cpp`.

What an agent should know (big picture)
- Each solution is a standalone `.cpp` file that reads from stdin and writes to stdout.
- Typical flow: parse `t` (number of testcases) then process each testcase in `main()`.
- No central build system, CI, or test harness — most operations are edit/compile/run per file.

Project-specific conventions & patterns ⚙️
- File naming: `<Letter>_<Problem_Title>.cpp` (e.g., `B_Strange_Machine.cpp`). New solutions should follow this pattern.
- I/O: Fast-IO idiom is used commonly:

```cpp
ios::sync_with_stdio(false);
cin.tie(nullptr);
```

- Header / style: `#include <bits/stdc++.h>` and `using namespace std;` are used pervasively.
- Testcases: `int t; cin >> t; while (t--) { ... }` is the normal pattern — do not change input format.
- Language level: C++17 (see `.vscode/c_cpp_properties.json` -> `cppStandard: c++17`).
- Dependencies: standard library only; do not introduce external dependencies unless explicitly requested.

Build, run & debug (concrete examples) 🔧
- Build (Windows MinGW, from `.vscode` config):
  - g++ compile: `g++ -std=c++17 -O2 -pipe -o B_Strange_Machine.exe B_Strange_Machine.cpp`
  - Debug build: `g++ -std=c++17 -g -O0 -Wall -Wextra -o prog.exe file.cpp`
- Run:
  - `.\B_Strange_Machine.exe < input.txt`
  - Or paste sample input into terminal when running the executable interactively.
- Quick local test: include small sample input and expected output in your change description so reviewers can reproduce.

Agent editing rules (must-follow) ✅
- Preserve I/O contract: do not change input/output format or whitespace sensitivity unless the problem text requires it.
- Keep solutions single-file unless asked to refactor the repository into a different structure.
- Avoid large style refactors or introducing frameworks; keep edits minimal and focused on correctness/performance.
- When fixing a solution: include a short reproduction case (input + expected output) in the PR/commit message.

Files to inspect for guidance
- `.vscode/c_cpp_properties.json` — shows `compilerPath: C:\MinGW\bin\g++.exe` and C++17 target.
- Any `*.cpp` file to see local coding style and typical idioms (fast I/O, while(t--) pattern).

Limitations & notes ⚠️
- No tests or CI — add carefully structured sample inputs for manual verification.
- No external APIs or integration points detected.

If something is unclear or you'd like me to expand this file (add example tests, a VS Code task, or a simple runner script), tell me what you'd prefer and I'll iterate. ✨