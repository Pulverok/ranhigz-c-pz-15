#ifndef LABORATORY_WORK_15_FIO_SERVICES_COMMAND_LINE_H
#define LABORATORY_WORK_15_FIO_SERVICES_COMMAND_LINE_H

#include "../../../entities/Fio/Fio.h"

namespace commandLine {
    class Fio {
    public:
        static entities::Fio CreateFromUserInput();
    };
}

#endif //LABORATORY_WORK_15_FIO_SERVICES_COMMAND_LINE_H
