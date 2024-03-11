//
// Created by user on 11.03.2024.
//

#ifndef IES_DEVICE_PLUGIN_PROJECT_GETINNERSTARTWIDTHUSECASE_H
#define IES_DEVICE_PLUGIN_PROJECT_GETINNERSTARTWIDTHUSECASE_H

#include <QObject>
#include <utils/baseutils.h>
#include <deviceplugin/entity/deviceentity.h>

struct GetInnerStartWidthUseCaseRequest{

};

struct GetInnerStartWidthUseCaseResponse{
    uint64_t value=0;
    ErrorCode error_code=OPERATION_INTERRUPTED;
};


class GetInnerStartWidthUseCase: public QObject{
public:
    explicit GetInnerStartWidthUseCase(const std::shared_ptr<DeviceEntity> &deviceEntity);

    GetInnerStartWidthUseCaseResponse execute(GetInnerStartWidthUseCaseRequest request);

private:
    std::shared_ptr<DeviceEntity>  _device_entity = nullptr;
};


#endif //IES_DEVICE_PLUGIN_PROJECT_GETINNERSTARTWIDTHUSECASE_H
