#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001973b8
// Address: 0x1973b8 - 0x1973cc
void entry_001973b8_0x1973b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001973b8_0x1973b8");
#endif

    ctx->pc = 0x1973b8u;

    // 0x1973b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1973b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973bc: 0x8e4206c0  lw          $v0, 0x6C0($s2)
    ctx->pc = 0x1973bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1728)));
    // 0x1973c0: 0x265106c0  addiu       $s1, $s2, 0x6C0
    ctx->pc = 0x1973c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1728));
    // 0x1973c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1973c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973c8: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x1973c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    ctx->pc = 0x1973ccu;
}
