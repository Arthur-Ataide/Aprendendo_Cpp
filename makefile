CXX = g++
SRC_DIR = ./CFBCursos_Cpp/aulas_iniciais
OUT_DIR = ./output
num = 3
TARGET = $(OUT_DIR)/aula_$(num)
SRCS = $(SRC_DIR)/aula_$(num).cpp

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRCS) | $(OUT_DIR)
	$(CXX) -o $@ $<

$(OUT_DIR):
	mkdir $@ 2> nul || (exit 0)

clean:
	cmd /C "if exist $(subst /,\,$(OUT_DIR)) rd /s /q $(subst /,\,$(OUT_DIR))"

.PHONY: all clean