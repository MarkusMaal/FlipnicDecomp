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

// Function: entry_001fa794
// Address: 0x1fa794 - 0x1fa7b0
void entry_001fa794_0x1fa794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa794_0x1fa794");
#endif

    ctx->pc = 0x1fa794u;

    // 0x1fa794: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x1fa794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1fa798: 0x2a850000  slti        $a1, $s4, 0x0
    ctx->pc = 0x1fa798u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fa79c: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x1fa79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x1fa7a0: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x1fa7a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1fa7a4: 0x28c60003  slti        $a2, $a2, 0x3
    ctx->pc = 0x1fa7a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fa7a8: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x1fa7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x1fa7ac: 0x8fa80154  lw          $t0, 0x154($sp)
    ctx->pc = 0x1fa7acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    ctx->pc = 0x1fa7b0u;
}
