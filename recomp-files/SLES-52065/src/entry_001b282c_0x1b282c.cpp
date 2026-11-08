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

// Function: entry_001b282c
// Address: 0x1b282c - 0x1b2864
void entry_001b282c_0x1b282c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b282c_0x1b282c");
#endif

    ctx->pc = 0x1b282cu;

    // 0x1b282c: 0x0  nop
    ctx->pc = 0x1b282cu;
    // NOP
    // 0x1b2830: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b2830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b2834: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x1b2834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b2838: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B2838u;
    {
        const bool branch_taken_0x1b2838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2838u;
        // 0x1b283c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2838) {
            ctx->pc = 0x1B2810u;
            return;
        }
    }
    ctx->pc = 0x1B2840u;
    // 0x1b2840: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1b2840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1b2844: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b2844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2848: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x1b2848u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x1b284c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1b284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1b2850: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1b2850u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1b2854: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1b2854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b2858: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2858u;
    {
        const bool branch_taken_0x1b2858 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2858) {
            ctx->pc = 0x1B2864u;
            return;
        }
    }
    ctx->pc = 0x1B2860u;
    // 0x1b2860: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1b2860u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1b2864u;
}
