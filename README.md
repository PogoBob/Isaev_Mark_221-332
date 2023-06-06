# Команды для работы с гитом


#### Команда для клонирования репозитория:

###### git clone https://github.com/MarkIsaev/Isaev_221_332_exam.git


#### Загрузка в репозиторий файлов:

###### cd Isaev_221_332_exam

###### git add *

###### git commit -am "first commit"


#### Создание новой ветки:

###### git checkout -b 221_332_Isaev

###### git push https://github.com/MarkIsaev/Isaev_221_332_exam.git 221_332_Isaev


#### Слияние с веткой main:

###### git checkout main

###### git merge 221_332_Isaev


# Команды для запуска Dockerfile


###### docker build -t test .

###### docker run  --name testtt -p 33334:33334 -t -i test
