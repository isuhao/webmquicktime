// Copyright (c) 2010 The WebM project authors. All Rights Reserved.
//
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file in the root of the source
// tree. An additional intellectual property rights grant can be found
// in the file PATENTS.  All contributing project authors may
// be found in the AUTHORS file in the root of the source tree.


#if !defined(__WebMExport_versions_h__)
#define __WebMExport_versions_h__

#ifdef DEBUG
#define kWebM_spit__Version      (0x00FF0010)
#else
#define kWebM_spit__Version      (0x00000010)
#endif /* DEBUG */


#define kVP8CodecFormatType   'VP80'
#define kCodecFormatName      "VP8"
#define kGoogManufacturer         'goog'

#define kAudioFormatXiphVorbis             'XiVs'

#endif /* __WebMExport_versions_h__ */
