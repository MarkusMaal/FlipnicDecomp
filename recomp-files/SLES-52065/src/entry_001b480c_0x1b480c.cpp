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

// Function: entry_001b480c
// Address: 0x1b480c - 0x1b4858
void entry_001b480c_0x1b480c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b480c_0x1b480c");
#endif

    ctx->pc = 0x1b480cu;

    // 0x1b480c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B480Cu;
    {
        const bool branch_taken_0x1b480c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B480Cu;
        // 0x1b4810: 0x5217c  dsll32      $a0, $a1, 5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b480c) {
            ctx->pc = 0x1B4858u;
            return;
        }
    }
    ctx->pc = 0x1B4814u;
    // 0x1b4814: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x1b4814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1b4818: 0x4217e  dsrl32      $a0, $a0, 5
    ctx->pc = 0x1b4818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 5));
    // 0x1b481c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b4820: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x1b4820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1b4824: 0x3197e  dsrl32      $v1, $v1, 5
    ctx->pc = 0x1b4824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 5));
    // 0x1b4828: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x1b4828u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b482c: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x1b482cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
    // 0x1b4830: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1b4830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1b4834: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1b4834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1b4838: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1b4838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1b483c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1b483cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1b4840: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1b4840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1b4844: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b4844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4848: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1b4848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1b484c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b484cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b4850: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x1b4850u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b4854: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1b4854u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x1b4858u;
}
