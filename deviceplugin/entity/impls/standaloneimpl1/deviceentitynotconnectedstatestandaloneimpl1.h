#ifndef CPSDEVICESTANDALONEPLUGIN_DEVICEPLUGIN_ENTITY_IMPLS_STANDALONEIMPL1_DEVICEENTITYNOTCONNECTEDSTATESTANDALONEIMPL2_H_
#define CPSDEVICESTANDALONEPLUGIN_DEVICEPLUGIN_ENTITY_IMPLS_STANDALONEIMPL1_DEVICEENTITYNOTCONNECTEDSTATESTANDALONEIMPL2_H_

#include "deviceplugin/entity/deviceentity.h"


class DeviceEntityNotConnectedStateStandaloneImpl1: public DeviceEntityState {
 public:
  GetSyncModuleStatusesResponse getSyncModuleStatuses(GetSyncModuleStatusesRequest request) override;

  GetSFPParametersResponse getSFPParameters(GetSFPParametersRequest request) override;

  int getChannelCount() override;
  GetChannelDelayResponse getChannelsDelay(GetChannelDelayRequest request) override;
  GetChannelWidthResponse getChannelsWidth(GetChannelWidthRequest request) override;
  GetChannelEnabledStatusResponse getChannelsEnabledStatus(GetChannelEnabledStatusRequest request) override;
  GetChannelInvertedStatusResponse getChannelsInvertedStatus(GetChannelInvertedStatusRequest request) override;
  GetChannelStartModeResponse getChannelsStartMode(GetChannelStartModeRequest request) override;
  GetChannelStartSourceResponse getChannelsStartSource(GetChannelStartSourceRequest request) override;

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

};

GetInnerStartPeriodResponse
DeviceEntityNotConnectedStateStandaloneImpl1::getInnerStartPeriod(GetInnerStartPeriodRequest request) {
    return GetInnerStartPeriodResponse();
}

GetInnerStartWidthResponse
DeviceEntityNotConnectedStateStandaloneImpl1::getInnerStartWidth(GetInnerStartWidthRequest request) {
    return GetInnerStartWidthResponse();
}

#endif //CPSDEVICESTANDALONEPLUGIN_DEVICEPLUGIN_ENTITY_IMPLS_STANDALONEIMPL1_DEVICEENTITYNOTCONNECTEDSTATESTANDALONEIMPL2_H_
