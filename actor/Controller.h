#ifndef Controller_H
#define Controller_H

#include "Utils.h"
#include "VRP.h"

class Controller {
private:
    VRP *v;
    Controller() {}
    Controller(Controller const&) = delete;
    void operator=(Controller const&) = delete;
    void RunOpts();
    void SaveResult();
protected:
    void PrintRoutes();
public:
    static Controller& Instance() {
        static Controller instance;
        return instance;
    }
    void Init(char **argv);
    Utils& GetUtils() const;
};

#endif /* Controller_H */