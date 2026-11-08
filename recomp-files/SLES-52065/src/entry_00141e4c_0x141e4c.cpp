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

// Function: entry_00141e4c
// Address: 0x141e4c - 0x141e9c
void entry_00141e4c_0x141e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141e4c_0x141e4c");
#endif

    ctx->pc = 0x141e4cu;

    // 0x141e4c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x141e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x141e50: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x141e50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x141e54: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x141e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x141e58: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x141e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x141e5c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x141e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x141e60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x141e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x141e64: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x141E64u;
    {
        const bool branch_taken_0x141e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e64) {
            ctx->pc = 0x141E9Cu;
            return;
        }
    }
    ctx->pc = 0x141E6Cu;
    // 0x141e6c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x141e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x141e70: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x141E70u;
    {
        const bool branch_taken_0x141e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e70) {
            ctx->pc = 0x141E9Cu;
            return;
        }
    }
    ctx->pc = 0x141E78u;
    // 0x141e78: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x141e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x141e7c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x141E7Cu;
    {
        const bool branch_taken_0x141e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e7c) {
            ctx->pc = 0x141E9Cu;
            return;
        }
    }
    ctx->pc = 0x141E84u;
    // 0x141e84: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x141e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x141e88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141E88u;
    {
        const bool branch_taken_0x141e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e88) {
            ctx->pc = 0x141E9Cu;
            return;
        }
    }
    ctx->pc = 0x141E90u;
    // 0x141e90: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x141e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x141e94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141E94u;
    {
        const bool branch_taken_0x141e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e94) {
            ctx->pc = 0x141EACu;
            return;
        }
    }
    ctx->pc = 0x141E9Cu;
}
