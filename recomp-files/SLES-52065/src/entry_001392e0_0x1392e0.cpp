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

// Function: entry_001392e0
// Address: 0x1392e0 - 0x13931c
void entry_001392e0_0x1392e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001392e0_0x1392e0");
#endif

    ctx->pc = 0x1392e0u;

    // 0x1392e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1392e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1392e4: 0x2c91018  mult        $v0, $s6, $t1
    ctx->pc = 0x1392e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1392e8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1392e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1392ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1392ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1392f0: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1392f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1392f4: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1392f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1392f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1392f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1392fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1392fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139300: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x139300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x139304: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x139304u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x139308: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x139308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x13930c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x13930cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x139310: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139314: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139318: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x139318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x13931cu;
}
