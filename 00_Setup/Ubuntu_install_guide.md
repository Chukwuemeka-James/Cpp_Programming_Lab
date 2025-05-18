## Prerequisites

* Internet connection
* Basic familiarity with the command line

---

## Installing C++ and VS Code

### Ubuntu

1. **Update package lists**

   ```bash
   sudo apt update
   ```
2. **Install build-essential (GCC, G++, make, etc.)**

   ```bash
   sudo apt install -y build-essential
   ```
3. **Verify the compiler**

   ```bash
   g++ --version
   ```
4. **Add Microsoft’s VS Code repository**

   ```bash
   wget -qO- https://packages.microsoft.com/keys/microsoft.asc | gpg --dearmor > microsoft.gpg
   sudo install -o root -g root -m 644 microsoft.gpg /etc/apt/trusted.gpg.d/
   sudo sh -c 'echo "deb [arch=$(dpkg --print-architecture)] https://packages.microsoft.com/repos/vscode stable main" > /etc/apt/sources.list.d/vscode.list'
   sudo apt update
   ```
5. **Install VS Code**

   ```bash
   sudo apt install -y code
   ```
6. **Install the C/C++ extension**

   ```bash
   code --install-extension ms-vscode.cpptools
   ```
7. **Tutorial Video**

   For a visual walkthrough, watch the following tutorial:

   [Set Up C++ Development With Visual Studio Code on Ubuntu 22.04](https://www.youtube.com/watch?v=oQ9E_LFoo9U&utm_source=chatgpt.com)
