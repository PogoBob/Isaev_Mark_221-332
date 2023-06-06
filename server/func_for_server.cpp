#include <QStringList>
#include <cmath>
#include <QString>
#include "func_for_server.h"

/**
 * @brief Функция разбора запроса от клиента.
 * @param str Строка запроса от клиента.
 * @param a Сокет клиента.
 * @return Результат выполнения запроса в виде массива байт.
 */

double calculatePerimeterOrArea(QString inputString) {
    QStringList parts = inputString.split('@');

    QString figureType = parts[0];

    // Извлечение координат вершин
    QList<QPair<double, double>> vertices;
    for (int i = 1; i < parts.size(); ++i) {
        QStringList coordinates = parts[i].split(',');
        double x = coordinates[0].toDouble();
        double y = coordinates[1].toDouble();
        vertices.append(qMakePair(x, y));
    }

    if (figureType == "perimetr") {
        double perimeter = 0.0;
        int numVertices = vertices.size();
        for (int i = 0; i < numVertices; ++i) {
            int j = (i + 1) % numVertices;
            double dx = vertices[j].first - vertices[i].first;
            double dy = vertices[j].second - vertices[i].second;
            perimeter += std::sqrt(dx * dx + dy * dy);
        }
        return perimeter;
    } else if (figureType == "square") {
        int numVertices = vertices.size();
        double area = 0.0;
        for (int i = 0; i < numVertices; ++i) {
            int j = (i + 1) % numVertices;
            area += abs(vertices[i].first * vertices[j].second - vertices[j].first * vertices[i].second);

        }
        return 0.5 * area;
    }
    return 0;
}


