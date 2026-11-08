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

// Function: entry_0014b84c
// Address: 0x14b84c - 0x14b898
void entry_0014b84c_0x14b84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b84c_0x14b84c");
#endif

    ctx->pc = 0x14b84cu;

    // 0x14b84c: 0x0  nop
    ctx->pc = 0x14b84cu;
    // NOP
    // 0x14b850: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x14b850u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14b854: 0x0  nop
    ctx->pc = 0x14b854u;
    // NOP
    // 0x14b858: 0x0  nop
    ctx->pc = 0x14b858u;
    // NOP
    // 0x14b85c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14B85Cu;
    {
        const bool branch_taken_0x14b85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b85c) {
            ctx->pc = 0x14B848u;
            return;
        }
    }
    ctx->pc = 0x14B864u;
    // 0x14b864: 0x2531823  subu        $v1, $s2, $s3
    ctx->pc = 0x14b864u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x14b868: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x14b868u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14b86c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14B86Cu;
    {
        const bool branch_taken_0x14b86c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b86c) {
            ctx->pc = 0x14B928u;
            return;
        }
    }
    ctx->pc = 0x14B874u;
    // 0x14b874: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x14b874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14b878: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14b878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14b87c: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x14b87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x14b880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b884: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x14b884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14b888: 0x15070014  bne         $t0, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x14B888u;
    {
        const bool branch_taken_0x14b888 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x14b888) {
            ctx->pc = 0x14B8DCu;
            return;
        }
    }
    ctx->pc = 0x14B890u;
    // 0x14b890: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14B890u;
    {
        const bool branch_taken_0x14b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B890u;
        // 0x14b894: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b890) {
            ctx->pc = 0x14B8DCu;
            return;
        }
    }
    ctx->pc = 0x14B898u;
}
