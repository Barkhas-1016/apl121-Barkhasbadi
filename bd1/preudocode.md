# Псевдокод - Тоо таах тоглоом

Функц playGame(gameNum):
    secretNum = Random(1, 100)
    attempts = 0
    maxAttempts = 7

    Эхэл:
        Давталт:
            guess утгыг гараас авна
            Хэрэв guess < 1 ЭСВЭЛ guess > 100 бол:
                "Буруу тоо" гэж хэвлэнэ
        Нөхцөл: guess < 1 ЭСВЭЛ guess > 100 байх тутал дахин асууна

        attempts = attempts + 1

        Хэрэв guess < secretNum бол:
            "Бага байна" гэж хэвлэнэ
        Эсвэл хэрэв guess > secretNum бол:
            "Их байна" гэж хэвлэнэ
        Эсвэл:
            "Зөв таалаа" гэж хэвлэнэ
            Буцаах attempts
    Нөхцөл: attempts < maxAttempts байх тутал дахина

    Буцаах attempts

Үндсэн програм (Main):
    Давталт i = 0-ээс 2 хүртэл:
        attemptsList[i] = playGame(i + 1)
    
    Хүснэгтийн толгойг хэвлэнэ
    Давталт i = 0-ээс 2 хүртэл:
        i + 1 болон attemptsList[i] утгыг хэвлэнэ
    
    bestGame = 0
    Давталт i = 1-ээс 2 хүртэл:
        Хэрэв attemptsList[i] < attemptsList[bestGame] бол:
            bestGame = i
            
    "Рекорд:" bestGame + 1 гэж хэвлэнэ
Төгсгөл
