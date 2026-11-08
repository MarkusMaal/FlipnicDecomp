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

// Function: entry_0014585c
// Address: 0x14585c - 0x1458a8
void entry_0014585c_0x14585c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014585c_0x14585c");
#endif

    ctx->pc = 0x14585cu;

    // 0x14585c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145860: 0x27b200e0  addiu       $s2, $sp, 0xE0
    ctx->pc = 0x145860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x145864: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x145864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x145868: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x145868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x14586c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x145870: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x145870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x145874: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x145874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145878: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x145878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14587c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14587cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x145880: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x145880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x145884: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x145884u;
    {
        const bool branch_taken_0x145884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x145888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145884u;
        // 0x145888: 0x27b300d8  addiu       $s3, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145884) {
            ctx->pc = 0x1458C8u;
            return;
        }
    }
    ctx->pc = 0x14588Cu;
    // 0x14588c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x145890: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x145890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145894: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x145894u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145898: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145898u;
    {
        const bool branch_taken_0x145898 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145898u;
        // 0x14589c: 0x2a083  sra         $s4, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145898) {
            ctx->pc = 0x1458A8u;
            return;
        }
    }
    ctx->pc = 0x1458A0u;
    // 0x1458a0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1458a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1458a4: 0x2a083  sra         $s4, $v0, 2
    ctx->pc = 0x1458a4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x1458a8u;
}
