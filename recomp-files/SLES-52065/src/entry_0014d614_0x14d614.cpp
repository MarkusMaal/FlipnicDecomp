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

// Function: entry_0014d614
// Address: 0x14d614 - 0x14d640
void entry_0014d614_0x14d614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d614_0x14d614");
#endif

    ctx->pc = 0x14d614u;

    // 0x14d614: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x14d614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x14d618: 0x27b600a4  addiu       $s6, $sp, 0xA4
    ctx->pc = 0x14d618u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x14d61c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x14d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x14d620: 0x27be00a8  addiu       $fp, $sp, 0xA8
    ctx->pc = 0x14d620u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x14d624: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x14d624u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x14d628: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14d628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d62c: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x14d62cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14d630: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D630u;
    {
        const bool branch_taken_0x14d630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D630u;
        // 0x14d634: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d630) {
            ctx->pc = 0x14D640u;
            return;
        }
    }
    ctx->pc = 0x14D638u;
    // 0x14d638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D638u;
    {
        const bool branch_taken_0x14d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D638u;
        // 0x14d63c: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d638) {
            ctx->pc = 0x14D648u;
            return;
        }
    }
    ctx->pc = 0x14D640u;
}
