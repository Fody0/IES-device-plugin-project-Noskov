//
// Created by user on 11.03.2024.
//

#ifndef IES_DEVICE_PLUGIN_PROJECT_GETINNERSTARTPERIODUSECASE_H
#define IES_DEVICE_PLUGIN_PROJECT_GETINNERSTARTPERIODUSECASE_H

#include <QObject>

#include <utils/baseutils.h>

#include "deviceplugin/entity/deviceentity.h"


struct GetInnerStartPeriodUseCaseRequest {

};

struct GetInnerStartPeriodUseCaseResponse {
    uint64_t value = 0;
    ErrorCode error_code = OPERATION_INTERRUPTED;
};


class GetInnerStartPeriodUseCase: public QObject {
public:
    explicit GetInnerStartPeriodUseCase(const std::shared_ptr<DeviceEntity> &device_entity);

    GetInnerStartPeriodUseCaseResponse execute(GetInnerStartPeriodUseCaseRequest request);

private:
    std::shared_ptr<DeviceEntity> _device_entity = nullptr;
};
#endif //IES_DEVICE_PLUGIN_PROJECT_GETINNERSTARTPERIODUSECASE_H
