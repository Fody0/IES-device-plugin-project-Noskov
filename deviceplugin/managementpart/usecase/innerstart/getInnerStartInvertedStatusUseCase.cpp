//
// Created by user on 12.03.2024.
//

#include "getInnerStartInvertedStatusUseCase.h"

getInnerStartInvertedStatusUseCase::getInnerStartInvertedStatusUseCase(
        const std::shared_ptr<DeviceEntity> &deviceEntity):_device_entity(deviceEntity) {

}

GetInnerStartInvertedStatusUseCaseResponse getInnerStartInvertedStatusUseCase::execute(
        GetInnerStartInvertedStatusUseCaseRequest request) {

    GetInnerStartInvertedStatusUseCaseResponse response{};

    if (_device_entity != nullptr) {
        GetInnerStartInvertedStatusUseCaseRequest entity_request;
        auto entity_response = _device_entity->getInnerStartInvertedStatus(entity_request);

        response.error_code = entity_response.error_code;
        response.value = entity_response.result;
    }

    return response;
}