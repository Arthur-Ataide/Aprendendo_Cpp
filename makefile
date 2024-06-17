CXX := g++
SRC_DIR_INICIO := ./CFBCursos_Cpp/aulas_iniciais
SRC_DIR_AVANCADO := ./CFBCursos_Cpp/aulas_avancadas

OUT_DIR := ./output
num ?= 3
TARGET := $(OUT_DIR)/aula_$(num)

SRCS :=

inicio:
	$(MAKE) build SRCS=$(SRC_DIR_INICIO)/aula_$(num).cpp

avancada:
	$(MAKE) build SRCS=$(SRC_DIR_AVANCADO)/aula_$(num).cpp


build: $(TARGET)
	@echo "Executing $(TARGET):"
	./$(TARGET)

$(TARGET): $(SRCS) | $(OUT_DIR)
	$(CXX) -o $@ $<

$(OUT_DIR):
	mkdir $@ 2> nul || (exit 0)

clean:
	cmd /C "if exist $(subst /,\,$(OUT_DIR)) rd /s /q $(subst /,\,$(OUT_DIR))"

.PHONY: all clean inicio avancada build
