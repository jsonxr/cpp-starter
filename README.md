# cpp version

* `.vscode/c_cpp_properties.json` for .vscode
* `compile_flags.txt` for clang-tidy
* `CMakeLists.txt` for cmake

# CMake

`CMakeLists.txt`
https://cmake.org/cmake/help/latest/guide/tutorial/index.html

# clang-tidy

`compile_flags.txt` - Set compiler flags
`.clang-tidy` - Set all the flags for tidying


# clang-format

`.clang-format`

# ...

ninja, clang-lint
https://clang.llvm.org/docs/HowToSetupToolingForLLVM.html


```
brew install llvm
ln -s "$(brew --prefix llvm)/bin/clang-format" "/usr/local/bin/clang-format"
ln -s "$(brew --prefix llvm)/bin/clang-tidy" "/usr/local/bin/clang-tidy"
ln -s "$(brew --prefix llvm)/bin/clang-apply-replacements" "/usr/local/bin/clang-apply-replacements"
```

# Coding style

https://clang.llvm.org/docs/ClangFormatStyleOptions.html

Create your own style file based on a known style
```
clang-format -style=llvm -dump-config > .clang-format
```

https://stackoverflow.com/questions/53111082/how-to-install-clang-tidy-on-macos
https://marketplace.visualstudio.com/items?itemName=notskm.clang-tidy