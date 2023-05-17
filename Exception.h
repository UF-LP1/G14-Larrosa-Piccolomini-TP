#pragma once
#include <iostream>
#include <exception>
#include <string>

class ComentarioException : public std::exception {
private:
    std::string mensaje;

public:
    ComentarioException(const std::string& comentario) : mensaje(comentario) {}

    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};