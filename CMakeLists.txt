cmake_minimum_required(VERSION 3.31)
project(File_Enc_Dec)

set(CMAKE_CXX_STANDARD 26)

add_executable(File_Enc_Dec main.cpp
        src/app/fileHandling/IO.cpp
        src/app/fileHandling/ReadEnv.cpp
        src/app/Processes/ProcessManagement.cpp
        src/app/EncrpytDecrypt/Cryption.cpp
        src/app/EncrpytDecrypt/CryptionMain.cpp
)
