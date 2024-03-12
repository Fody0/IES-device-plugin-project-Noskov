//
// Created by user on 12.03.2024.
//

#include "getInnerStartEnabledStatusUseCase.h"

getInnerStartEnabledStatusUseCase::getInnerStartEnabledStatusUseCase(
        const std::shared_ptr<DeviceEntity> &deviceEntity):_device_entity(deviceEntity) {

}

GetInnerStartEnabledStatusUseCaseResponse getInnerStartEnabledStatusUseCase::execute(
        GetInnerStartEnabledStatusUseCaseRequest request) {

    GetInnerStartEnabledStatusUseCaseResponse response{};

    if (_device_entity != nullptr) {
        GetInnerStartEnabledStatusUseCaseRequest entity_request;
        auto entity_response = _device_entity->getInnerStartEnabledStatus(entity_request);

        response.error_code = entity_response.error_code;
        response.value = entity_response.result;
    }

    return response;
}