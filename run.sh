file_path=$1
LIGHT_BLUE='\033[0;32m'
NC='\033[0m' # No Color
printf "🪐 ${LIGHT_BLUE}Running c++ code...${NC}\n"
g++ $file_path.cpp -o ./builds/a.out
./builds/a.out $file_path.cpp