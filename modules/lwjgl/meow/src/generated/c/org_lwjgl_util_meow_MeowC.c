/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#define MEOW_INCLUDE_C 1
#include "common_tools.h"
#include "meow_intrinsics.h"
#include "meow_hash.h"
#include "meow_more.h"

EXTERN_C_ENTER

JNIEXPORT void JNICALL JavaCritical_org_lwjgl_util_meow_MeowC_nMeowHash_1C(jlong Seed, jlong TotalLengthInBytes, jlong SourceInitAddress, jlong __result) {
    void *SourceInit = (void *)(intptr_t)SourceInitAddress;
    *((meow_hash*)(intptr_t)__result) = MeowHash_C((meow_u64)Seed, (meow_u64)TotalLengthInBytes, SourceInit);
}
JNIEXPORT void JNICALL Java_org_lwjgl_util_meow_MeowC_nMeowHash_1C(JNIEnv *__env, jclass clazz, jlong Seed, jlong TotalLengthInBytes, jlong SourceInitAddress, jlong __result) {
    UNUSED_PARAMS(__env, clazz)
    JavaCritical_org_lwjgl_util_meow_MeowC_nMeowHash_1C(Seed, TotalLengthInBytes, SourceInitAddress, __result);
}

EXTERN_C_EXIT
