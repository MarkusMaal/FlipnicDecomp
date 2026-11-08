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

// Function: entry_001eedb4
// Address: 0x1eedb4 - 0x1eedf8
void entry_001eedb4_0x1eedb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eedb4_0x1eedb4");
#endif

    ctx->pc = 0x1eedb4u;

    // 0x1eedb4: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x1eedb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1eedb8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1eedb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1eedbc: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1eedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x1eedc0: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1eedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1eedc4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1eedc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1eedc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eedcc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1eedccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1eedd0: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1eedd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1eedd4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1eedd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1eedd8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1eedd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1eeddc: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x1eeddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1eede0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1eede0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1eede4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eede8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1eede8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1eedec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1eedecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1eedf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eedf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eedf4: 0x0  nop
    ctx->pc = 0x1eedf4u;
    // NOP
    ctx->pc = 0x1eedf8u;
}
