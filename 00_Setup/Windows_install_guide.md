
## Prerequisites

* Internet connection
* Basic familiarity with the command line

---

### Windows

#### Option 1: MSVC (Visual Studio Build Tools)

1. **Download & install Build Tools**

   * Visit: [https://aka.ms/vs/17/release/vs\_BuildTools.exe](https://aka.ms/vs/17/release/vs_BuildTools.exe)
   * Select the **"Desktop development with C++"** workload and install
2. **Install VS Code**

   * Download from: [https://code.visualstudio.com/](https://code.visualstudio.com/)
   * Run the installer
3. **Install the C/C++ extension**

   * Open VS Code
   * Go to Extensions (`Ctrl+Shift+X`)
   * Search for **C/C++** (Microsoft) and install

#### Option 2: MinGW-w64 via Chocolatey

1. **Install Chocolatey** (if not already present)

   ```powershell
   Set-ExecutionPolicy Bypass -Scope Process -Force; \
   [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; \
   iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
   ```
2. **Install MinGW-w64**

   ```powershell
   choco install mingw -y
   ```
3. **Add MinGW to your PATH**

   ```powershell
   setx PATH "%PATH%;C:\Program\Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin"
   ```
4. **Verify the compiler**

   ```powershell
   g++ --version
   ```
5. **Install VS Code**

   * Download and install from [https://code.visualstudio.com/](https://code.visualstudio.com/)
6. **Install the C/C++ extension**

   * In VS Code, go to Extensions (`Ctrl+Shift+X`)
   * Search **C/C++** (Microsoft) and install

7. **Tutorial Video**

   For a comprehensive tutorial, watch the following video:

   [How to Set up Visual Studio Code for C and C++ Programming](https://www.youtube.com/watch?v=1PBD5qFWdq8&utm_source=chatgpt.com)
---

## Getting Started

1. **Clone the repository**

   ```bash
   git clone https://github.com/Chukwuemeka-James/Cpp_Programming_Lab
   cd Cpp_Programming_Lab
   ```
2. **Open in VS Code**

   ```bash
   code .
   ```