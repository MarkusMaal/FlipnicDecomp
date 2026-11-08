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

// Function: entry_00107cb0
// Address: 0x107cb0 - 0x107cc8
void entry_00107cb0_0x107cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107cb0_0x107cb0");
#endif

    ctx->pc = 0x107cb0u;

    // 0x107cb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x107cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x107cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cb8: 0x8e740008  lw          $s4, 0x8($s3)
    ctx->pc = 0x107cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x107cbc: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x107cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x107cc0: 0x26770008  addiu       $s7, $s3, 0x8
    ctx->pc = 0x107cc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x107cc4: 0x24840210  addiu       $a0, $a0, 0x210
    ctx->pc = 0x107cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    ctx->pc = 0x107cc8u;
}
