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

// Function: entry_00119104
// Address: 0x119104 - 0x119128
void entry_00119104_0x119104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119104_0x119104");
#endif

    ctx->pc = 0x119104u;

    // 0x119104: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x119104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x119108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11910c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11910cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x119110: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x119110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119114: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x119114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x119118: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x119118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x11911c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x119120: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x119120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119124: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x119124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x119128u;
}
