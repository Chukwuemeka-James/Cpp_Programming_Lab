## Prerequisites

* Internet connection
* Basic familiarity with the command line

---

### macOS

1. **Install Xcode Command Line Tools**

   ```bash
   xcode-select --install
   ```
2. **(Optional) Install Homebrew**

   ```bash
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```
3. **Install GCC via Homebrew**

   ```bash
   brew install gcc
   ```
4. **Verify the compiler**

   ```bash
   g++-$(brew --prefix)/bin/g++ --version
   ```
5. **Install VS Code**

   ```bash
   brew install --cask visual-studio-code
   ```
6. **Install the C/C++ extension**

   * Launch VS Code
   * Go to Extensions (`⇧⌘X`)
   * Search for **C/C++** (Microsoft) and install

7. **Tutorial Video**

   For a step-by-step guide, watch the following tutorial:

   [Set Up C++ Development With Visual Studio Code on Mac](https://www.youtube.com/watch?v=v2_Pth8MrKA&utm_source=chatgpt.com)