//
// Created by user on 12.03.2024.
//

#ifndef IES_DEVICE_PLUGIN_PROJECT_GETINNERSTARTINVERTEDSTATUSUSECASE_H
#define IES_DEVICE_PLUGIN_PROJECT_GETINNERSTARTINVERTEDSTATUSUSECASE_H

#include <QObject>
#include <utils/baseutils.h>
#include <deviceplugin/entity/deviceentity.h>



struct GetInnerStartInvertedStatusUseCaseRequest{

};

struct GetInnerStartInvertedStatusUseCaseResponse{
    bool value=false;
    ErrorCode error_code=OPERATION_INTERRUPTED;
};

class getInnerStartInvertedStatusUseCase {
public:
    explicit getInnerStartInvertedStatusUseCase(const std::shared_ptr<DeviceEntity> &deviceEntity);

    GetInnerStartInvertedStatusUseCaseResponse execute(GetInnerStartInvertedStatusUseCaseRequest request);

private:
    std::shared_ptr<DeviceEntity> _device_entity= nullptr;
};


#endif //IES_DEVICE_PLUGIN_PROJECT_GETINNERSTARTINVERTEDSTATUSUSECASE_H
