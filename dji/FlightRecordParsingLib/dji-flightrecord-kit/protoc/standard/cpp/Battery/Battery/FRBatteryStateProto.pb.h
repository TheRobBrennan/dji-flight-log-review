// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Battery/FRBatteryStateProto.proto

#ifndef PROTOBUF_Battery_2fFRBatteryStateProto_2eproto__INCLUDED
#define PROTOBUF_Battery_2fFRBatteryStateProto_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_Battery_2fFRBatteryStateProto_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsBatteryStateImpl();
void InitDefaultsBatteryState();
inline void InitDefaults() {
  InitDefaultsBatteryState();
}
}  // namespace protobuf_Battery_2fFRBatteryStateProto_2eproto
namespace DJIFRProto {
namespace Standard {
class BatteryState;
class BatteryStateDefaultTypeInternal;
extern BatteryStateDefaultTypeInternal _BatteryState_default_instance_;
}  // namespace Standard
}  // namespace DJIFRProto
namespace DJIFRProto {
namespace Standard {

// ===================================================================

class BatteryState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:DJIFRProto.Standard.BatteryState) */ {
 public:
  BatteryState();
  virtual ~BatteryState();

  BatteryState(const BatteryState& from);

  inline BatteryState& operator=(const BatteryState& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BatteryState(BatteryState&& from) noexcept
    : BatteryState() {
    *this = ::std::move(from);
  }

  inline BatteryState& operator=(BatteryState&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BatteryState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BatteryState* internal_default_instance() {
    return reinterpret_cast<const BatteryState*>(
               &_BatteryState_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(BatteryState* other);
  friend void swap(BatteryState& a, BatteryState& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BatteryState* New() const PROTOBUF_FINAL { return New(NULL); }

  BatteryState* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BatteryState& from);
  void MergeFrom(const BatteryState& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(BatteryState* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 cellVoltages = 4;
  int cellvoltages_size() const;
  void clear_cellvoltages();
  static const int kCellVoltagesFieldNumber = 4;
  ::google::protobuf::int32 cellvoltages(int index) const;
  void set_cellvoltages(int index, ::google::protobuf::int32 value);
  void add_cellvoltages(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      cellvoltages() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_cellvoltages();

  // int32 voltage = 1;
  void clear_voltage();
  static const int kVoltageFieldNumber = 1;
  ::google::protobuf::int32 voltage() const;
  void set_voltage(::google::protobuf::int32 value);

  // int32 current = 2;
  void clear_current();
  static const int kCurrentFieldNumber = 2;
  ::google::protobuf::int32 current() const;
  void set_current(::google::protobuf::int32 value);

  // double temperature = 3;
  void clear_temperature();
  static const int kTemperatureFieldNumber = 3;
  double temperature() const;
  void set_temperature(double value);

  // int32 chargeRemainingInPercent = 5;
  void clear_chargeremaininginpercent();
  static const int kChargeRemainingInPercentFieldNumber = 5;
  ::google::protobuf::int32 chargeremaininginpercent() const;
  void set_chargeremaininginpercent(::google::protobuf::int32 value);

  // int32 lowBatteryWarningThreshold = 6;
  void clear_lowbatterywarningthreshold();
  static const int kLowBatteryWarningThresholdFieldNumber = 6;
  ::google::protobuf::int32 lowbatterywarningthreshold() const;
  void set_lowbatterywarningthreshold(::google::protobuf::int32 value);

  // int32 seriousLowBatteryWarningThreshold = 7;
  void clear_seriouslowbatterywarningthreshold();
  static const int kSeriousLowBatteryWarningThresholdFieldNumber = 7;
  ::google::protobuf::int32 seriouslowbatterywarningthreshold() const;
  void set_seriouslowbatterywarningthreshold(::google::protobuf::int32 value);

  // int32 index = 8;
  void clear_index();
  static const int kIndexFieldNumber = 8;
  ::google::protobuf::int32 index() const;
  void set_index(::google::protobuf::int32 value);

  // int32 lifetimeRemaining = 9;
  void clear_lifetimeremaining();
  static const int kLifetimeRemainingFieldNumber = 9;
  ::google::protobuf::int32 lifetimeremaining() const;
  void set_lifetimeremaining(::google::protobuf::int32 value);

  // int32 designCapacity = 10;
  void clear_designcapacity();
  static const int kDesignCapacityFieldNumber = 10;
  ::google::protobuf::int32 designcapacity() const;
  void set_designcapacity(::google::protobuf::int32 value);

  // int32 numberOfDischarges = 11;
  void clear_numberofdischarges();
  static const int kNumberOfDischargesFieldNumber = 11;
  ::google::protobuf::int32 numberofdischarges() const;
  void set_numberofdischarges(::google::protobuf::int32 value);

  // bool isInSingleBatteryMode = 12;
  void clear_isinsinglebatterymode();
  static const int kIsInSingleBatteryModeFieldNumber = 12;
  bool isinsinglebatterymode() const;
  void set_isinsinglebatterymode(bool value);

  // uint32 fullChargeCapacity = 13;
  void clear_fullchargecapacity();
  static const int kFullChargeCapacityFieldNumber = 13;
  ::google::protobuf::uint32 fullchargecapacity() const;
  void set_fullchargecapacity(::google::protobuf::uint32 value);

  // uint32 chargeRemaining = 14;
  void clear_chargeremaining();
  static const int kChargeRemainingFieldNumber = 14;
  ::google::protobuf::uint32 chargeremaining() const;
  void set_chargeremaining(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:DJIFRProto.Standard.BatteryState)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > cellvoltages_;
  mutable int _cellvoltages_cached_byte_size_;
  ::google::protobuf::int32 voltage_;
  ::google::protobuf::int32 current_;
  double temperature_;
  ::google::protobuf::int32 chargeremaininginpercent_;
  ::google::protobuf::int32 lowbatterywarningthreshold_;
  ::google::protobuf::int32 seriouslowbatterywarningthreshold_;
  ::google::protobuf::int32 index_;
  ::google::protobuf::int32 lifetimeremaining_;
  ::google::protobuf::int32 designcapacity_;
  ::google::protobuf::int32 numberofdischarges_;
  bool isinsinglebatterymode_;
  ::google::protobuf::uint32 fullchargecapacity_;
  ::google::protobuf::uint32 chargeremaining_;
  mutable int _cached_size_;
  friend struct ::protobuf_Battery_2fFRBatteryStateProto_2eproto::TableStruct;
  friend void ::protobuf_Battery_2fFRBatteryStateProto_2eproto::InitDefaultsBatteryStateImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BatteryState

// int32 voltage = 1;
inline void BatteryState::clear_voltage() {
  voltage_ = 0;
}
inline ::google::protobuf::int32 BatteryState::voltage() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.voltage)
  return voltage_;
}
inline void BatteryState::set_voltage(::google::protobuf::int32 value) {
  
  voltage_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.voltage)
}

// int32 current = 2;
inline void BatteryState::clear_current() {
  current_ = 0;
}
inline ::google::protobuf::int32 BatteryState::current() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.current)
  return current_;
}
inline void BatteryState::set_current(::google::protobuf::int32 value) {
  
  current_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.current)
}

// double temperature = 3;
inline void BatteryState::clear_temperature() {
  temperature_ = 0;
}
inline double BatteryState::temperature() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.temperature)
  return temperature_;
}
inline void BatteryState::set_temperature(double value) {
  
  temperature_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.temperature)
}

// repeated int32 cellVoltages = 4;
inline int BatteryState::cellvoltages_size() const {
  return cellvoltages_.size();
}
inline void BatteryState::clear_cellvoltages() {
  cellvoltages_.Clear();
}
inline ::google::protobuf::int32 BatteryState::cellvoltages(int index) const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.cellVoltages)
  return cellvoltages_.Get(index);
}
inline void BatteryState::set_cellvoltages(int index, ::google::protobuf::int32 value) {
  cellvoltages_.Set(index, value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.cellVoltages)
}
inline void BatteryState::add_cellvoltages(::google::protobuf::int32 value) {
  cellvoltages_.Add(value);
  // @@protoc_insertion_point(field_add:DJIFRProto.Standard.BatteryState.cellVoltages)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
BatteryState::cellvoltages() const {
  // @@protoc_insertion_point(field_list:DJIFRProto.Standard.BatteryState.cellVoltages)
  return cellvoltages_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
BatteryState::mutable_cellvoltages() {
  // @@protoc_insertion_point(field_mutable_list:DJIFRProto.Standard.BatteryState.cellVoltages)
  return &cellvoltages_;
}

// int32 chargeRemainingInPercent = 5;
inline void BatteryState::clear_chargeremaininginpercent() {
  chargeremaininginpercent_ = 0;
}
inline ::google::protobuf::int32 BatteryState::chargeremaininginpercent() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.chargeRemainingInPercent)
  return chargeremaininginpercent_;
}
inline void BatteryState::set_chargeremaininginpercent(::google::protobuf::int32 value) {
  
  chargeremaininginpercent_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.chargeRemainingInPercent)
}

// int32 lowBatteryWarningThreshold = 6;
inline void BatteryState::clear_lowbatterywarningthreshold() {
  lowbatterywarningthreshold_ = 0;
}
inline ::google::protobuf::int32 BatteryState::lowbatterywarningthreshold() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.lowBatteryWarningThreshold)
  return lowbatterywarningthreshold_;
}
inline void BatteryState::set_lowbatterywarningthreshold(::google::protobuf::int32 value) {
  
  lowbatterywarningthreshold_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.lowBatteryWarningThreshold)
}

// int32 seriousLowBatteryWarningThreshold = 7;
inline void BatteryState::clear_seriouslowbatterywarningthreshold() {
  seriouslowbatterywarningthreshold_ = 0;
}
inline ::google::protobuf::int32 BatteryState::seriouslowbatterywarningthreshold() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.seriousLowBatteryWarningThreshold)
  return seriouslowbatterywarningthreshold_;
}
inline void BatteryState::set_seriouslowbatterywarningthreshold(::google::protobuf::int32 value) {
  
  seriouslowbatterywarningthreshold_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.seriousLowBatteryWarningThreshold)
}

// int32 index = 8;
inline void BatteryState::clear_index() {
  index_ = 0;
}
inline ::google::protobuf::int32 BatteryState::index() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.index)
  return index_;
}
inline void BatteryState::set_index(::google::protobuf::int32 value) {
  
  index_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.index)
}

// int32 lifetimeRemaining = 9;
inline void BatteryState::clear_lifetimeremaining() {
  lifetimeremaining_ = 0;
}
inline ::google::protobuf::int32 BatteryState::lifetimeremaining() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.lifetimeRemaining)
  return lifetimeremaining_;
}
inline void BatteryState::set_lifetimeremaining(::google::protobuf::int32 value) {
  
  lifetimeremaining_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.lifetimeRemaining)
}

// int32 designCapacity = 10;
inline void BatteryState::clear_designcapacity() {
  designcapacity_ = 0;
}
inline ::google::protobuf::int32 BatteryState::designcapacity() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.designCapacity)
  return designcapacity_;
}
inline void BatteryState::set_designcapacity(::google::protobuf::int32 value) {
  
  designcapacity_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.designCapacity)
}

// int32 numberOfDischarges = 11;
inline void BatteryState::clear_numberofdischarges() {
  numberofdischarges_ = 0;
}
inline ::google::protobuf::int32 BatteryState::numberofdischarges() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.numberOfDischarges)
  return numberofdischarges_;
}
inline void BatteryState::set_numberofdischarges(::google::protobuf::int32 value) {
  
  numberofdischarges_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.numberOfDischarges)
}

// bool isInSingleBatteryMode = 12;
inline void BatteryState::clear_isinsinglebatterymode() {
  isinsinglebatterymode_ = false;
}
inline bool BatteryState::isinsinglebatterymode() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.isInSingleBatteryMode)
  return isinsinglebatterymode_;
}
inline void BatteryState::set_isinsinglebatterymode(bool value) {
  
  isinsinglebatterymode_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.isInSingleBatteryMode)
}

// uint32 fullChargeCapacity = 13;
inline void BatteryState::clear_fullchargecapacity() {
  fullchargecapacity_ = 0u;
}
inline ::google::protobuf::uint32 BatteryState::fullchargecapacity() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.fullChargeCapacity)
  return fullchargecapacity_;
}
inline void BatteryState::set_fullchargecapacity(::google::protobuf::uint32 value) {
  
  fullchargecapacity_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.fullChargeCapacity)
}

// uint32 chargeRemaining = 14;
inline void BatteryState::clear_chargeremaining() {
  chargeremaining_ = 0u;
}
inline ::google::protobuf::uint32 BatteryState::chargeremaining() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.BatteryState.chargeRemaining)
  return chargeremaining_;
}
inline void BatteryState::set_chargeremaining(::google::protobuf::uint32 value) {
  
  chargeremaining_ = value;
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.BatteryState.chargeRemaining)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Standard
}  // namespace DJIFRProto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Battery_2fFRBatteryStateProto_2eproto__INCLUDED