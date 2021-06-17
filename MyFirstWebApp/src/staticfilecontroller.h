#ifndef STATICFILECONTROLLER_H
#define STATICFILECONTROLLER_H

#include <httprequesthandler.h>

class staticFileController : public HttpRequestHandler
{
public:
    explicit staticFileController(QObject *parent = nullptr);
};

#endif // STATICFILECONTROLLER_H
