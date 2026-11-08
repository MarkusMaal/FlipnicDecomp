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

// Function: entry_001204b8
// Address: 0x1204b8 - 0x1204e4
void entry_001204b8_0x1204b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001204b8_0x1204b8");
#endif

    ctx->pc = 0x1204b8u;

    // 0x1204b8: 0x8e840080  lw          $a0, 0x80($s4)
    ctx->pc = 0x1204b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x1204bc: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1204bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1204c0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1204c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1204c4: 0x2452824  and         $a1, $s2, $a1
    ctx->pc = 0x1204c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
    // 0x1204c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1204c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1204cc: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1204ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1204d0: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1204d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1204d4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1204d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1204d8: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1204d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1204dc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1204dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1204e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1204e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1204e4u;
}
