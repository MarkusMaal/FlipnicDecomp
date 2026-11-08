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

// Function: entry_001381bc
// Address: 0x1381bc - 0x1381fc
void entry_001381bc_0x1381bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001381bc_0x1381bc");
#endif

    ctx->pc = 0x1381bcu;

    // 0x1381bc: 0x0  nop
    ctx->pc = 0x1381bcu;
    // NOP
    // 0x1381c0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1381c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1381c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1381c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1381c8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1381c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1381cc: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x1381ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1381d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1381d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1381d4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1381d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1381d8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1381d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1381dc: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1381dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1381e0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1381e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1381e4: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1381e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1381e8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1381e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1381ec: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1381ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1381f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1381f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1381f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1381f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1381f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1381f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1381fcu;
}
