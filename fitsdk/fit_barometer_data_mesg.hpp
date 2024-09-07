/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2024 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.141.0Release
// Tag = production/release/21.141.0-0-g2aa27e1
/////////////////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_BAROMETER_DATA_MESG_HPP)
#define FIT_BAROMETER_DATA_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class BarometerDataMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 TimestampMs = 0;
       static const FIT_UINT8 SampleTimeOffset = 1;
       static const FIT_UINT8 BaroPres = 2;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    BarometerDataMesg(void) : Mesg(Profile::MESG_BAROMETER_DATA)
    {
    }

    BarometerDataMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampValid() const
    {
        const Field* field = GetField(253);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp field
    // Units: s
    // Comment: Whole second part of the timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    // Comment: Whole second part of the timestamp
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp_ms field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampMsValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the timestamp.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetTimestampMs(void) const
    {
        return GetFieldUINT16Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the timestamp.
    ///////////////////////////////////////////////////////////////////////
    void SetTimestampMs(FIT_UINT16 timestampMs)
    {
        SetFieldUINT16Value(0, timestampMs, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of sample_time_offset
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumSampleTimeOffset(void) const
    {
        return GetFieldNumValues(1, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sample_time_offset field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSampleTimeOffsetValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sample_time_offset field
    // Units: ms
    // Comment: Each time in the array describes the time at which the barometer sample with the corrosponding index was taken. The samples may span across seconds. Array size must match the number of samples in baro_cal
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetSampleTimeOffset(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(1, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sample_time_offset field
    // Units: ms
    // Comment: Each time in the array describes the time at which the barometer sample with the corrosponding index was taken. The samples may span across seconds. Array size must match the number of samples in baro_cal
    ///////////////////////////////////////////////////////////////////////
    void SetSampleTimeOffset(FIT_UINT8 index, FIT_UINT16 sampleTimeOffset)
    {
        SetFieldUINT16Value(1, sampleTimeOffset, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of baro_pres
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumBaroPres(void) const
    {
        return GetFieldNumValues(2, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of baro_pres field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBaroPresValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns baro_pres field
    // Units: Pa
    // Comment: These are the raw ADC reading. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetBaroPres(FIT_UINT8 index) const
    {
        return GetFieldUINT32Value(2, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set baro_pres field
    // Units: Pa
    // Comment: These are the raw ADC reading. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    void SetBaroPres(FIT_UINT8 index, FIT_UINT32 baroPres)
    {
        SetFieldUINT32Value(2, baroPres, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_BAROMETER_DATA_MESG_HPP)
