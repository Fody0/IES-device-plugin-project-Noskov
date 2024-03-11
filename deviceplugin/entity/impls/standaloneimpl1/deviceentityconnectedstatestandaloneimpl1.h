#ifndef CPSDEVICESTANDALONEPLUGIN_DEVICEPLUGIN_ENTITY_IMPLS_STANDALONEIMPL1_DEVICEENTITYCONNECTEDSTATESTANDALONEIMPL1_H_
#define CPSDEVICESTANDALONEPLUGIN_DEVICEPLUGIN_ENTITY_IMPLS_STANDALONEIMPL1_DEVICEENTITYCONNECTEDSTATESTANDALONEIMPL1_H_

#include <memory>

#include "deviceplugin/entity/deviceentity.h"


class DeviceEntityConnectedStateStandaloneImpl1: public DeviceEntityState {
 public:
  explicit DeviceEntityConnectedStateStandaloneImpl1(const std::shared_ptr<DeviceEntity> &device_entity,
                                                     const std::shared_ptr<DeviceEntityRegCard> &reg_card,
                                                     const std::shared_ptr<DeviceEntityRegCard> &postponed_reg_card);

  GetSyncModuleStatusesResponse getSyncModuleStatuses(GetSyncModuleStatusesRequest request) override;
  GetSFPParametersResponse getSFPParameters(GetSFPParametersRequest request) override;
  GetChannelWidthResponse getChannelsWidth(GetChannelWidthRequest request) override;
  GetChannelEnabledStatusResponse getChannelsEnabledStatus(GetChannelEnabledStatusRequest request) override;
  GetChannelInvertedStatusResponse getChannelsInvertedStatus(GetChannelInvertedStatusRequest request) override;
  GetChannelStartModeResponse getChannelsStartMode(GetChannelStartModeRequest request) override;
  GetChannelStartSourceResponse getChannelsStartSource(GetChannelStartSourceRequest request) override;

  GetChannelDelayResponse getChannelsDelay(GetChannelDelayRequest request) override;
  int getChannelCount() override;

  SetChannelDelayResponse setChannelDelay(SetChannelDelayRequest request) override;
  SetChannelWidthResponse setChannelWidth(SetChannelWidthRequest request) override;
  SetChannelEnabledStatusResponse setChannelEnabledStatus(SetChannelEnabledStatusRequest request) override;
  SetChannelInvertedStatusResponse setChannelInvertedStatus(SetChannelInvertedStatusRequest request) override;
  SetChannelStartSourceResponse setChannelStartSource(SetChannelStartSourceRequest request) override;
  SetChannelStartModeResponse setChannelStartMode(SetChannelStartModeRequest request) override;

  ErrorCode loadDeviceDTO(const std::shared_ptr<DeviceEntityDTO> &dto) override;
  std::shared_ptr<DeviceEntityDTO> updateDeviceDTO() override;

    GetInnerStartPeriodResponse getInnerStartPeriod(GetInnerStartPeriodRequest request) override;

    GetInnerStartWidthResponse getInnerStartWidth(GetInnerStartWidthRequest request) override;

private:
  std::shared_ptr<DeviceEntityRegCard> _reg_card = nullptr;
  std::shared_ptr<DeviceEntityRegCard> _postponed_reg_card = nullptr;
  std::shared_ptr<DeviceEntity> _device_entity = nullptr;
};

GetInnerStartPeriodResponse
DeviceEntityConnectedStateStandaloneImpl1::getInnerStartPeriod(GetInnerStartPeriodRequest request) {
    GetInnerStartPeriodResponse response;

    if(_reg_card!= nullptr){
        response=_reg_card->getInnerStartPeriod(request);
    }

    return response;
}

GetInnerStartWidthResponse
DeviceEntityConnectedStateStandaloneImpl1::getInnerStartWidth(GetInnerStartWidthRequest request) {
    GetInnerStartWidthResponse response;

    if(_reg_card!= nullptr){
        response=_reg_card->getInnerStartWidth(request);
    }

    return response;
}

#endif //CPSDEVICESTANDALONEPLUGIN_DEVICEPLUGIN_ENTITY_IMPLS_STANDALONEIMPL1_DEVICEENTITYCONNECTEDSTATESTANDALONEIMPL1_H_
