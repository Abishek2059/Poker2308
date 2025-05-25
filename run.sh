# for windows user please use CLion or follow instructions from SudokuProject
[[ -d ./cmake-build-debug ]] && rm -rf ./cmake-build-debug
mkdir -p ./cmake-build-debug
cmake -B ./cmake-build-debug
cmake --build ./cmake-build-debug
echo "----------------------------------------"
echo "------------COMPILATION DONE------------"
echo "----------------------------------------"
./cmake-build-debug/Poker