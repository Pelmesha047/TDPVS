#include <iostream>
#include <fstream> 
#include <string>
#include <Windows.h>
#include <random>
#include <time.h>
#include <cstdlib>
#include <cstdio>
using namespace std;

void russianInput();
void englishInput();
string chooseLanguage();
string randomword(string filename);
string createLine(int maxwordlength, int freelength, string language);
bool checkuserline(string str1, string str_pol);

bool pravilnost_vvoda = 1;
bool terminal_width = 0;

int main()
{
    setlocale(LC_ALL, "russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    englishInput();
    russianInput();

    cout << "Выберите язык:" << endl;
    cout << "1 - английский" << endl;
    cout << "2 - русский" << endl;

    string language = chooseLanguage();
    int freelength = 20, maxwordlength = 7;
    string createdline = createLine(maxwordlength, freelength, language);
    cout << createdline;
    string str_pol;
    getline(cin, str_pol);
    checkuserline(createdline, str_pol);

    return 0;
}



void russianInput() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP('1251');

    ofstream file7;
    file7.open("русский7.txt");
    if (file7.is_open()) {
        file7 << "Автобус" << " " << "Ажурный" << " " << "Бабушка" << " " << "Багетик" << " " << "Бокалик" << " " << "Ботинок" << " " << "Ведущий" << " " << "Ветчина" << " " << "Визитка" << " " << "Воробей" << " " << "Зебраки" << " " << "Зеркало" << " " << "Золотой" << " " << "Картина" << " " << "Керосин" << " " << "Классик" << " " << "Команда" << " " << "Корзина" << " " << "Красота" << " " << "Лимонка" << " " << "Мелодия" << " " << "Небоход" << " " << "Окношка" << " " << "Парашют" << " " << "Печенье" << " " << "Рисунок" << " " << "Рыбалка" << " " << "Самолет" << " " << "Снегирь" << " " << "Готовка" << " " << "Фонарик" << " " << "Холодец" << " " << "Царевна" << " " << "Шапочка" << " " << "Шоколад" << " " << "Ящерица";
    }
    file7.close();
    ofstream file6;
    file6.open("русский6.txt");
    if (file6.is_open()) {
        file6 << "Авария" << " " << "Адреса" << " " << "Банкно" << " " << "Варить" << " " << "Горный" << " " << "Горечь" << " " << "Доверя" << " " << "Зубной" << " " << "Корова" << " " << "Камень" << " " << "Колхоз" << " " << "Комбай" << " " << "Котята" << " " << "Креста" << " " << "Кулоны" << " " << " " << "Минусы" << " " << "Молоко" << " " << "Облака" << " " << "Отвары" << " " << "Повара" << " " << "Поясок" << " " << "Пожары" << " " << "Пряжка" << " " << "Ранить" << " " << "Ремень";
    }
    file6.close();

    ofstream file5;
    file5.open("русский5.txt");
    if (file5.is_open()) {
        file5 << "Абзац" << " " << "Аврал" << " " << "Агент" << " " << "Адрес" << " " << "Ажуры" << " " << "Актив" << " " << "Арена" << " " << "Аркад" << " " << "Аршин" << " " << "Астра" << " " << "Багаж" << " " << "Балка" << " " << "Банка" << " " << "Бонус" << " " << "Вдова" << " " << "Вести" << " " << "Взвод" << " " << "Вилка" << " " << "Вирус" << " " << " " << "Враги" << " " << "Глаза" << " " << "Гроза" << " " << "Грузы" << " " << "Губка" << " " << "Давка" << " " << "Долги" << " " << "Дозор" << " " << "Древо" << " " << "Доска" << " " << "Жираф" << " " << "Жилки" << " " << "Замок" << " " << "Зебра" << " " << "Зимка" << " " << "Карта" << " " << "Книга" << " " << "Комуф" << " " << "Комод" << " " << "Косты" << " " << "Кухня" << " " << "Лавка" << " " << "Листы" << " " << "Ложка" << " " << "Лужка" << " " << "Лыжам" << " " << "Масть" << " " << "Молва" << " " << "Молек" << " " << "Монта" << " " << "Мотор" << " " << "Напор" << " " << "Нотки" << " " << "Норма" << " " << "Образ" << " " << "Около" << " " << "Орехи" << " " << "Остро" << " " << "Парта" << " " << "Пенка" << " " << "Погон" << " " << "Пельм" << " " << "Песок" << " " << "Печка" << " " << "Пилка" << " " << "Право" << " " << "Пламя" << " " << "Точка" << " " << "Турка" << " " << "Филин" << " " << "Фракт" << " " << "Штрих";
    }
    file5.close();

    ofstream file4;
    file4.open("русский4.txt");
    if (file4.is_open()) {
        file4 << "Ажур" << " " << "Арка" << " " << "База" << " " << "Блок" << " " << "Брак" << " " << "Вещи" << " " << "Вода" << " " << "Воля" << " " << "Груз" << " " << "Глаз" << " " << "Губа" << " " << "Долг" << " " << "Жена" << " " << "Жиры" << " " << "Зима" << " " << "Лава" << " " << "Лист" << " " << "Лока" << " " << "Ложа" << " " << "Лужа" << " " << "Лыжи" << " " << "Мама" << " " << "Миры" << " " << "Мука" << " " << "Ноты" << " " << "Пена" << " " << "Печь" << " " << "Пила" << " " << "Тема" << " " << "Трюк" << " " << "Течь" << " " << "Тома" << " " << "Урал" << " " << "Файл" << " " << "Фонт" << " " << "Храм" << " " << "Шина" << " " << "Шум" << " " << "Ямка" << " " << "Заря" << " " << "Река" << " " << "Сбор" << " " << "Сказ" << " " << "Сова" << " " << "Свет" << " " << "Тики" << " " << "Таня" << " " << "Ужик" << " " << "Ужин" << " " << "Узор" << " " << "Фоны" << " " << "Вика" << " ";
    }
    file4.close();

    ofstream file3;
    file3.open("русский3.txt");
    if (file3.is_open()) {
        file3 << "Лет" << " " << "Дом" << " " << "Мак" << " " << "Мол" << " " << "Пап" << " " << "Лук" << " " << "Рот" << " " << "Кот" << " " << "Век" << " " << "Бок" << " " << "Фон" << " " << "Зал" << " " << "Зуб" << " " << "Каз" << " " << "Ход" << " " << "Год" << " " << "Ван" << " " << "Лод" << " " << "Бык" << " " << "Сад" << " " << "Ток" << " " << "Янт" << " " << "Чат" << " " << "Сам" << " " << "Кем" << " " << "Рак" << " " << "Мет" << " " << "Вор" << " " << "Лён" << " " << "Бой" << " " << "Жук" << " " << "Меч" << " " << " " << "Век" << " " << "Мух" << " " << "Шар" << " " << "Лёд" << " " << "Лев" << " " << "Миг" << " " << " " << "Яма" << " " << "Мир" << " " << "Дар" << " " << "Три" << " " << "Дол" << " " << "Пол" << " " << "Дно" << " " << "Сум" << " " << "Тум" << " " << "Кур" << " " << "Зум" << " " << "Пир" << " " << "Шур" << " ";
    }
    file3.close();

    ofstream file2;
    file2.open("русский2.txt");
    if (file2.is_open()) {
        file2 << "Мы" << " " << "Но" << " " << "Да" << " " << "Он" << " " << "Вы" << " " << "Ты" << " " << "По" << " " << "На" << " " << "От" << " " << "Во" << " " << "За" << " " << "Ко" << " " << "Ед" << " " << "Ум" << " " << "Ла" << " " << "Ма" << " " << "Еж" << " " << "Со" << " " << "Уж" << " " << "Бе" << " " << "Те" << " " << "Же" << " " << "Де" << " " << "Эй" << " " << "Бы" << " " << "Не" << " " << "Во" << " " << "Яв" << " " << "Та" << " " << "Ли" << " " << "Ге" << " " << "Ши" << " " << "Иш" << " " << "Хи" << " " << "Ох" << " " << " " << "По" << " " << "Яв" << " " << "Да" << " " << "Ик" << " " << "Ия" << " " << "Ал" << " " << "Ар" << " " << "Из" << " " << "Во";
    }
    file2.close();

    ofstream file1;
    file1.open("русский1.txt");
    if (file1.is_open()) {
        file1 << "А" << " " << "Б" << " " << "В" << " " << "Г" << " " << "Д" << " " << "Е" << " " << "Ё" << " " << "Ж" << " " << "З" << " " << "И" << " " << "Й" << " " << "К" << " " << "Л" << " " << "М" << " " << "Н" << " " << "О" << " " << "П" << " " << "Р" << " " << "С" << " " << "Т" << " " << "У" << " " << "Ф" << " " << "Х" << " " << "Ц" << " " << "Ч" << " " << "Ш" << " " << "Щ" << " " << "Ь" << " " << "Ы" << " " << "Э" << " " << "Ю" << " " << "Я" << " " << "а" << " " << "б" << " " << "в" << " " << "г" << " " << "д" << " " << "е" << " " << "ё" << " " << "ж" << " " << "з" << " " << "и" << " " << "й" << " " << "к" << " " << "л" << " " << "м" << " " << "н" << " " << "о" << " " << "п" << " " << "р" << " " << "с" << " " << "т" << " " << "у" << " " << "ф" << " " << "х" << " " << "ц" << " " << "ч" << " " << "ш" << " " << "щ" << " " << "ь" << " " << "ы" << " " << "э" << " " << "ю" << " " << "я";
    }
    file1.close();
}

void englishInput() {
    ofstream word7;
    word7.open("english7.txt");
    if (word7.is_open()) {
        word7 << "Academy" << ' ' << "Against" << ' ' << "Arrange" << ' ' << "Balloon" << ' ' << "Balance" << ' ' << "Beneath" << ' ' << "Blanket" << ' ' << "Brother" << ' ' << "Capture" << ' ' << "Channel" << ' ' << "Charter" << ' ' << "College" << ' ' << "Comrade" << ' ' << "Concern" << ' ' << "Connect" << ' ' << "Content" << ' ' << "Courage" << ' ' << "Crystal" << ' ' << "Current" << ' ' << "Digital" << ' ' << "Disease" << ' ' << "Display" << ' ' << "Drawing" << ' ' << "Evening" << ' ' << "Example" << ' ' << "Fashion" << ' ' << "Feature" << ' ' << "Fitness" << ' ' << "General" << ' ' << "History" << ' ' << "Imagine" << ' ' << "Insider" << ' ' << "Journal" << ' ' << "Justice" << ' ' << "Lantern" << ' ' << "Leading" << ' ' << "Leather" << ' ' << "Library" << ' ' << "Limited" << ' ' << "Literacy" << ' ' << "Machine" << ' ' << "Manager" << ' ' << "Measure" << ' ' << "Medical" << ' ' << "Message" << ' ' << "Mineral" << ' ' << "Mission" << ' ' << "Mystery" << ' ' << "Natural" << ' ' << "Network" << ' ' << "Nothing" << ' ' << "Offshore" << ' ' << "Opinion" << ' ' << "Organic" << ' ' << "Outside" << ' ' << "Painter" << ' ' << "Pattern" << ' ' << "Perfect" << ' ' << "Picture" << ' ' << "Pleasure" << ' ' << "Popular" << ' ' << "Premium" << ' ' << "Present" << ' ' << "Process" << ' ' << "Program" << ' ' << "Purpose" << ' ' << "Quality" << ' ' << "Reality" << ' ' << "Refugee" << ' ' << "Regular" << ' ' << "Related" << ' ' << "Respect" << ' ' << "Revenue" << ' ' << "Romance" << ' ' << "Scholar" << ' ' << "Science" << ' ' << "Section" << ' ' << "Segment" << ' ' << "Service" << ' ' << "Similar" << ' ' << "Speaker" << ' ' << "Special" << ' ' << "Stadium" << ' ' << "Station" << ' ' << "Storage" << ' ' << "Student" << ' ' << "Success" << ' ' << "Summary" << ' ' << "Support" << ' ' << "Survive" << ' ' << "Teacher" << ' ' << "Theater" << ' ' << "Trouble" << ' ' << "Uniform" << ' ' << "Unusual" << ' ' << "Village" << ' ' << "Waiting" << ' ' << "Warrior" << ' ' << "Weather" << ' ' << "Written";
    }
    word7.close();

    ofstream word6;
    word6.open("english6.txt");
    if (word6.is_open()) {
        word6 << "Animal" << ' ' << "Bottle" << ' ' << "Bridge" << ' ' << "Camera" << ' ' << "Castle" << ' ' << "Circle" << ' ' << "Copper" << ' ' << "Couple" << ' ' << "Course" << ' ' << "Custom" << ' ' << "Danger" << ' ' << "Double" << ' ' << "Energy" << ' ' << "Family" << ' ' << "Farmer" << ' ' << "Faster" << ' ' << "Forest" << ' ' << "Friend" << ' ' << "Future" << ' ' << "Garden" << ' ' << "Golden" << ' ' << "Ground" << ' ' << "Growth" << ' ' << "Hidden" << ' ' << "Hunter" << ' ' << "Inside" << ' ' << "Island" << ' ' << "Jungle" << ' ' << "Kindly" << ' ' << "Kitten" << ' ' << "Ladder" << ' ' << "Leader" << ' ' << "Little" << ' ' << "London" << ' ' << "Market" << ' ' << "Master" << ' ' << "Matter" << ' ' << "Member" << ' ' << "Memory" << ' ' << "Middle" << ' ' << "Modern" << ' ' << "Mother" << ' ' << "Nature" << ' ' << "Office" << ' ' << "Online" << ' ' << "Orange" << ' ' << "Parent" << ' ' << "People" << ' ' << "Pocket" << ' ' << "Pretty" << ' ' << "Public" << ' ' << "Reader" << ' ' << "Record" << ' ' << "Remote" << ' ' << "Return" << ' ' << "Rocket" << ' ' << "Silver" << ' ' << "Simple" << ' ' << "Singer" << ' ' << "Sister" << ' ' << "Smooth" << ' ' << "Spider" << ' ' << "Square" << ' ' << "Stable" << ' ' << "Street" << ' ' << "Strong" << ' ' << "Summer" << ' ' << "Supply" << ' ' << "Talent" << ' ' << "Target" << ' ' << "Travel" << ' ' << "Unique" << ' ' << "United" << ' ' << "Valley" << ' ' << "Vision" << ' ' << "Walker" << ' ' << "Weapon" << ' ' << "Wealth" << ' ' << "Winner" << ' ' << "Winter" << ' ' << "Wonder" << ' ' << "Worker" << ' ' << "Writer" << ' ' << "Yellow";
    }
    word6.close();

    ofstream word5;
    word5.open("english5.txt");
    if (word5.is_open()) {
        word5 << "Apple" << ' ' << "Beach" << ' ' << "Bread" << ' ' << "Brain" << ' ' << "Crown" << ' ' << "Dance" << ' ' << "Dream" << ' ' << "Earth" << ' ' << "Field" << ' ' << "Flame" << ' ' << "Fruit" << ' ' << "Glass" << ' ' << "Grant" << ' ' << "Green" << ' ' << "Heart" << ' ' << "Horse" << ' ' << "House" << ' ' << "Layer" << ' ' << "Light" << ' ' << "Magic" << ' ' << "Metal" << ' ' << "Night" << ' ' << "Ocean" << ' ' << "Paint" << ' ' << "Paper" << ' ' << "Plant" << ' ' << "Power" << ' ' << "River" << ' ' << "Score" << ' ' << "Shine" << ' ' << "Shore" << ' ' << "Smart" << ' ' << "Space" << ' ' << "Spark" << ' ' << "Stone" << ' ' << "Sugar" << ' ' << "Table" << ' ' << "Theme" << ' ' << "Tiger" << ' ' << "Train" << ' ' << "Trust" << ' ' << "Voice" << ' ' << "Water" << ' ' << "Wheat" << ' ' << "World" << ' ' << "Wound" << ' ' << "Youth" << ' ' << "Zebra" << ' ' << "Agent" << ' ' << "Angle" << ' ' << "Arrow" << ' ' << "Basic" << ' ' << "Beast" << ' ' << "Bless" << ' ' << "Bliss" << ' ' << "Block" << ' ' << "Brick" << ' ' << "Build" << ' ' << "Chair" << ' ' << "Chain" << ' ' << "Chest" << ' ' << "Chill" << ' ' << "Claim" << ' ' << "Clear" << ' ' << "Clock" << ' ' << "Close" << ' ' << "Cloud" << ' ' << "Coast" << ' ' << "Cover" << ' ' << "Craft" << ' ' << "Cream" << ' ' << "Crisp" << ' ' << "Crowd" << ' ' << "Crown" << ' ' << "Daily" << ' ' << "Drive" << ' ' << "Dried" << ' ' << "Drink" << ' ' << "Eagle" << ' ' << "Early" << ' ' << "Empty" << ' ' << "Enemy" << ' ' << "Entry" << ' ' << "Error" << ' ' << "Event" << ' ' << "Faith" << ' ' << "Fancy" << ' ' << "Fault" << ' ' << "Fiber" << ' ' << "Final" << ' ' << "Flute" << ' ' << "Focus" << ' ' << "Force" << ' ' << "Frame" << ' ' << "Front" << ' ' << "Fruit";
    }
    word5.close();

    ofstream word4;
    word4.open("english4.txt");
    if (word4.is_open()) {
        word4 << "Arch" << ' ' << "Army" << ' ' << "Bark" << ' ' << "Bell" << ' ' << "Bird" << ' ' << "Book" << ' ' << "Boot" << ' ' << "Cake" << ' ' << "Card" << ' ' << "Cart" << ' ' << "City" << ' ' << "Claw" << ' ' << "Cliff" << ' ' << "Club" << ' ' << "Coat" << ' ' << "Corn" << ' ' << "Cube" << ' ' << "Dawn" << ' ' << "Deer" << ' ' << "Dome" << ' ' << "Door" << ' ' << "Dust" << ' ' << "Face" << ' ' << "Fair" << ' ' << "Farm" << ' ' << "Fire" << ' ' << "Fish" << ' ' << "Flag" << ' ' << "Flow" << ' ' << "Food" << ' ' << "Fork" << ' ' << "Frog" << ' ' << "Gate" << ' ' << "Glow" << ' ' << "Gold" << ' ' << "Grin" << ' ' << "Hand" << ' ' << "Hawk" << ' ' << "Head" << ' ' << "Hill" << ' ' << "Home" << ' ' << "Hope" << ' ' << "Horn" << ' ' << "Idea" << ' ' << "Iron" << ' ' << "Jail" << ' ' << "Joke" << ' ' << "King" << ' ' << "Kite" << ' ' << "Lake" << ' ' << "Lamp" << ' ' << "Land" << ' ' << "Leaf" << ' ' << "Life" << ' ' << "Line" << ' ' << "Lion" << ' ' << "Luck" << ' ' << "Mask" << ' ' << "Moon" << ' ' << "Nest" << ' ' << "Path" << ' ' << "Plan" << ' ' << "Play" << ' ' << "Rain" << ' ' << "Ring" << ' ' << "Rock" << ' ' << "Roof" << ' ' << "Rose" << ' ' << "Rule" << ' ' << "Sand" << ' ' << "Seed" << ' ' << "Ship" << ' ' << "Shore" << ' ' << "Side" << ' ' << "Snow" << ' ' << "Song" << ' ' << "Star" << ' ' << "Stay" << ' ' << "Surf" << ' ' << "Swim" << ' ' << "Task" << ' ' << "Team" << ' ' << "Tent" << ' ' << "Time" << ' ' << "Tree" << ' ' << "Wave" << ' ' << "Wind" << ' ' << "Wing" << ' ' << "Wolf" << ' ' << "Wood";
    }
    word4.close();

    ofstream word3;
    word3.open("english3.txt");
    if (word3.is_open()) {
        word3 << "Air" << ' ' << "Ant" << ' ' << "Bat" << ' ' << "Bee" << ' ' << "Bit" << ' ' << "Box" << ' ' << "Boy" << ' ' << "Bus" << ' ' << "But" << ' ' << "Cab" << ' ' << "Car" << ' ' << "Cat" << ' ' << "Cow" << ' ' << "Cut" << ' ' << "Day" << ' ' << "Dog" << ' ' << "Dot" << ' ' << "Dry" << ' ' << "Ear" << ' ' << "Egg" << ' ' << "End" << ' ' << "Far" << ' ' << "Fat" << ' ' << "Fax" << ' ' << "Fix" << ' ' << "Fly" << ' ' << "For" << ' ' << "Fun" << ' ' << "Gas" << ' ' << "Get" << ' ' << "God" << ' ' << "Got" << ' ' << "Gun" << ' ' << "Had" << ' ' << "Hat" << ' ' << "Her" << ' ' << "Hit" << ' ' << "Hot" << ' ' << "How" << ' ' << "Hut" << ' ' << "Ink" << ' ' << "Jam" << ' ' << "Jet" << ' ' << "Job" << ' ' << "Joy" << ' ' << "Key" << ' ' << "Lab" << ' ' << "Lap" << ' ' << "Led" << ' ' << "Leg" << ' ' << "Let" << ' ' << "Lip" << ' ' << "Log" << ' ' << "Lot" << ' ' << "Man" << ' ' << "Map" << ' ' << "Mat" << ' ' << "Men" << ' ' << "Mud" << ' ' << "Net" << ' ' << "Now" << ' ' << "Nut" << ' ' << "One" << ' ' << "Opt" << ' ' << "Out" << ' ' << "Own" << ' ' << "Owl" << ' ' << "Pan" << ' ' << "Pat" << ' ' << "Pen" << ' ' << "Pet" << ' ' << "Pig" << ' ' << "Pin" << ' ' << "Pot" << ' ' << "Pup" << ' ' << "Rat" << ' ' << "Red" << ' ' << "Rep" << ' ' << "Rig" << ' ' << "Run" << ' ' << "Sad" << ' ' << "Sat" << ' ' << "See" << ' ' << "Set" << ' ' << "Sit" << ' ' << "Sky" << ' ' << "Sly" << ' ' << "Sun" << ' ' << "Tap" << ' ' << "Tat" << ' ' << "Tea" << ' ' << "Tie" << ' ' << "Tip" << ' ' << "Too" << ' ' << "Top" << ' ' << "Toy" << ' ' << "Try" << ' ' << "Use" << ' ' << "Van" << ' ' << "Vat" << ' ' << "Vet" << ' ' << "Was" << ' ' << "Wax" << ' ' << "Web" << ' ' << "Wed" << ' ' << "Who" << ' ' << "Why" << ' ' << "Win" << ' ' << "Won" << ' ' << "Yes" << ' ' << "You";
    }
    word3.close();

    ofstream word2;
    word2.open("english2.txt");
    if (word2.is_open()) {
        word2 << "Am" << ' ' << "An" << ' ' << "As" << ' ' << "At" << ' ' << "Ax" << ' ' << "Ay" << ' ' << "Ba" << ' ' << "Be" << ' ' << "Bi" << ' ' << "By" << ' ' << "Do" << ' ' << "Ed" << ' ' << "Ef" << ' ' << "Eh" << ' ' << "El" << ' ' << "Em" << ' ' << "En" << ' ' << "Er" << ' ' << "Es" << ' ' << "Et" << ' ' << "Ex" << ' ' << "Go" << ' ' << "Ha" << ' ' << "He" << ' ' << "Hi" << ' ' << "Ho" << ' ' << "Id" << ' ' << "If" << ' ' << "In" << ' ' << "Is" << ' ' << "It" << ' ' << "Jo" << ' ' << "Ka" << ' ' << "La" << ' ' << "Li" << ' ' << "Lo" << ' ' << "Ma" << ' ' << "Me" << ' ' << "Mu" << ' ' << "My" << ' ' << "No" << ' ' << "Nu" << ' ' << "Od" << ' ' << "OE" << ' ' << "Of" << ' ' << "Oh" << ' ' << "Oi" << ' ' << "Om" << ' ' << "On" << ' ' << "Op" << ' ' << "Or" << ' ' << "Os" << ' ' << "Ox" << ' ' << "Oy" << ' ' << "Pa" << ' ' << "Pe" << ' ' << "Pi" << ' ' << "Re" << ' ' << "Sh" << ' ' << "Si" << ' ' << "So" << ' ' << "Ta" << ' ' << "To" << ' ' << "Uh" << ' ' << "Um" << ' ' << "Un" << ' ' << "Up" << ' ' << "Us" << ' ' << "We" << ' ' << "Wo" << ' ' << "Xi" << ' ' << "Ye" << ' ' << "Yo" << ' ' << "Za";
    }
    word2.close();

    ofstream word1;
    word1.open("english1.txt");
    if (word1.is_open()) {
        word1 << "A" << ' ' << "B" << ' ' << "C" << ' ' << "D" << ' ' << "E" << ' ' << "F" << ' ' << "G" << ' ' << "H" << ' ' << "I" << ' ' << "J" << ' ' << "K" << ' ' << "L" << ' ' << "M" << ' ' << "N" << ' ' << "O" << ' ' << "P" << ' ' << "Q" << ' ' << "R" << ' ' << "S" << ' ' << "T" << ' ' << "U" << ' ' << "V" << ' ' << "W" << ' ' << "X" << ' ' << "Y" << ' ' << "Z" << ' ' << "a" << ' ' << "b" << ' ' << "c" << ' ' << "d" << ' ' << "e" << ' ' << "f" << ' ' << "g" << ' ' << "h" << ' ' << "i" << ' ' << "j" << ' ' << "k" << ' ' << "l" << ' ' << "m" << ' ' << "n" << ' ' << "o" << ' ' << "p" << ' ' << "q" << ' ' << "r" << ' ' << "s" << ' ' << "t" << ' ' << "u" << ' ' << "v" << ' ' << "w" << ' ' << "x" << ' ' << "y" << ' ' << "z";
    }
    word1.close();
}

string chooseLanguage() {
    int choose;
    cin >> choose;
    do {
        if (choose == 1) {
            return "english";
        }
        else if (choose == 2) {
            return "русский";
        }
        else {
            cout << "Ошибка! Введите корректное значение.";
        }
    } while (choose != 1 && choose != 2);
}

string randomword(string filename) {
    srand((unsigned int)time(0));

    int n = 10; //n - кол-во слов в файле

    int random = rand() % n + 1;

    ifstream in(filename);
    string result;

    for (int i = 0; i < random; i++) {
        getline(in, result);
    }

   // cout << result << endl;
    return result;
}

string createLine(int maxwordlength, int freelength, string language) {

    string createdline;
    random_device rd;
    mt19937 gen(rd());
   
    while (freelength > 0) {

        if (freelength <= maxwordlength) {
            maxwordlength = freelength;
        }
        uniform_int_distribution<> distrib(1, maxwordlength);
        int randomnumber = distrib (gen);
        cout << randomnumber << " ";

        if (freelength - randomnumber == 1) {
            randomnumber++;
        }
        string filename = language + to_string(randomnumber) + ".txt";
        //string WORD = "Ярик";
       // cout << filename;
        createdline = createdline + randomword(filename);
        freelength = freelength - randomnumber;
        cout << freelength << " ";
        if (freelength != 0); {
            freelength--;
            createdline = createdline + " ";
        }
    }
    return createdline;
}

bool checkuserline(string str1, string str_pol) {
    string str2;
    int dl1, dl2, dl_pol, i, d = 0, width;
    dl1 = str1.length();
    dl_pol = str_pol.length();

    if (str_pol == str1)
        return pravilnost_vvoda;

    else {
        if (dl1 > dl_pol) {
            d = dl1 - dl_pol;
            for (i = 0; i < d; i++) 
                str_pol = str_pol + "1";
            dl_pol = str_pol.length();
        }
        if (dl1 < dl_pol) {
            d = dl1 - dl_pol;
            const string empty;
            str_pol = str_pol.replace(dl1 + 1, d, empty);
            dl_pol = str_pol.length();
        }
        for (i = 0; i < dl_pol; i++) {
            if (str1[i] == str_pol[i])
                str2 = str2 + str1[i];
            else
                str2 = str2 + str1[i] + str1[i];
        }

        if (str2 == str1) pravilnost_vvoda = 1;
        else pravilnost_vvoda = 0;
    }

#ifdef _WIN32
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(hConsole, &csbi))
        width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
#else
    FILE* fp = popen("tput cols", "r");
    int width;
    fscanf(fp, "%d", &width);
    fclose(fp);
#endif
    dl2 = str2.length();
    if (dl2 > width)
    {
        cout << endl << "GAME OVER" << endl;
        terminal_width = 1;
        return pravilnost_vvoda = 0;
    }

    cout << "vvesti v sled ras: " << str2 << endl;
    return pravilnost_vvoda;
}