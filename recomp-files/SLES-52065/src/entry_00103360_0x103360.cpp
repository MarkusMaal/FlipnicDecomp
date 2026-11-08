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

// Function: entry_00103360
// Address: 0x103360 - 0x10338c
void entry_00103360_0x103360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103360_0x103360");
#endif

    ctx->pc = 0x103360u;

    // 0x103360: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x103360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x103364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x103364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x103368: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x103368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10336c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x10336cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103370: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x103370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103374: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x103374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x103378: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x103378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x10337c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x103380: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x103380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x103384: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x103384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103388: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x103388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x10338cu;
}
