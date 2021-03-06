/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FRAMEWORKS_SS_INCLUDE_STORAGE_SERVICE_HILOG_H
#define FRAMEWORKS_SS_INCLUDE_STORAGE_SERVICE_HILOG_H

#include "hilog/log.h"
namespace OHOS {
static constexpr OHOS::HiviewDFX::HiLogLabel LOG_LABEL = { LOG_CORE, 0, "StorageService" };

#define SSLOG_F(...) (void)OHOS::HiviewDFX::HiLog::Fatal(LOG_LABEL, __VA_ARGS__)
#define SSLOG_E(...) (void)OHOS::HiviewDFX::HiLog::Error(LOG_LABEL, __VA_ARGS__)
#define SSLOG_W(...) (void)OHOS::HiviewDFX::HiLog::Warn(LOG_LABEL, __VA_ARGS__)
#define SSLOG_I(...) (void)OHOS::HiviewDFX::HiLog::Info(LOG_LABEL, __VA_ARGS__)
#define SSLOG_D(...) (void)OHOS::HiviewDFX::HiLog::Debug(LOG_LABEL, __VA_ARGS__)

#define LOG_SS_DFUNC HiviewDFX::HiLog::Info
#define LOG_SS_IFUNC HiviewDFX::HiLog::Info
#define LOG_SS_WFUNC HiviewDFX::HiLog::Warn
#define LOG_SS_EFUNC HiviewDFX::HiLog::Error

#define LOG_SS_CPRINTF(func, fmt, ...) func(LOG_LABEL, "<%{public}d>" fmt, __LINE__, ##__VA_ARGS__)

#define SSLOGD(fmt, ...) LOG_SS_CPRINTF(LOG_SS_DFUNC, " DEBUG " fmt, ##__VA_ARGS__)
#define SSLOGI(fmt, ...) LOG_SS_CPRINTF(LOG_SS_IFUNC, fmt, ##__VA_ARGS__)
#define SSLOGW(fmt, ...) LOG_SS_CPRINTF(LOG_SS_WFUNC, fmt, ##__VA_ARGS__)
#define SSLOGE(fmt, ...) LOG_SS_CPRINTF(LOG_SS_EFUNC, fmt, ##__VA_ARGS__)

#define LOG_SS_FUNC __func__

#define SSLOGFD(fmt, ...) SSLOGD("%{public}s: " fmt, LOG_SS_FUNC, ##__VA_ARGS__)
#define SSLOGFI(fmt, ...) SSLOGI("%{public}s: " fmt, LOG_SS_FUNC, ##__VA_ARGS__)
#define SSLOGFW(fmt, ...) SSLOGW("%{public}s: " fmt, LOG_SS_FUNC, ##__VA_ARGS__)
#define SSLOGFE(fmt, ...) SSLOGE("%{public}s: " fmt, LOG_SS_FUNC, ##__VA_ARGS__)
} // namespace OHOS

#endif // FRAMEWORKS_SS_INCLUDE_STORAGE_SERVICE_HILOG_H
