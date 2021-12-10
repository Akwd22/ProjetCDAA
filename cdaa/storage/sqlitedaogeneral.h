#ifndef SQLITEDAOGENERAL_H
#define SQLITEDAOGENERAL_H

#include "storage_global.h"
#include "idaogeneral.h"

#include <QtSql/QtSql>

class STORAGE_EXPORT SQLiteDaoGeneral : public IDaoGeneral
{
public:
    ~SQLiteDaoGeneral();

    void create(const QString &attribut, const QVariant &valeur) const;
    QVariant read(const QString &attribut) const;
    void update(const QString &attribut, const QVariant &valeur) const;
    void destroy(const QString &attribut) const;
};

#endif // SQLITEDAOGENERAL_H
