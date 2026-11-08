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

// Function: entry_0016c000
// Address: 0x16c000 - 0x16c02c
void entry_0016c000_0x16c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c000_0x16c000");
#endif

    ctx->pc = 0x16c000u;

    // 0x16c000: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16c000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16c004: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16c004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c008: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16C008u;
    {
        const bool branch_taken_0x16c008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C008u;
        // 0x16c00c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c008) {
            ctx->pc = 0x16C02Cu;
            return;
        }
    }
    ctx->pc = 0x16C010u;
    // 0x16c010: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C010u;
    {
        const bool branch_taken_0x16c010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c010) {
            ctx->pc = 0x16C02Cu;
            return;
        }
    }
    ctx->pc = 0x16C018u;
    // 0x16c018: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16c018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c01c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C01Cu;
    {
        const bool branch_taken_0x16c01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C01Cu;
        // 0x16c020: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c01c) {
            ctx->pc = 0x16C02Cu;
            return;
        }
    }
    ctx->pc = 0x16C024u;
    // 0x16c024: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x16C024u;
    {
        const bool branch_taken_0x16c024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c024) {
            ctx->pc = 0x16C0D4u;
            return;
        }
    }
    ctx->pc = 0x16C02Cu;
}
