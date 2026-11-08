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

// Function: entry_001b610c
// Address: 0x1b610c - 0x1b6148
void entry_001b610c_0x1b610c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b610c_0x1b610c");
#endif

    ctx->pc = 0x1b610cu;

    // 0x1b610c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b6110: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B6110u;
    {
        const bool branch_taken_0x1b6110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6110) {
            ctx->pc = 0x1B618Cu;
            return;
        }
    }
    ctx->pc = 0x1B6118u;
    // 0x1b6118: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1b6118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1b611c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B611Cu;
    {
        const bool branch_taken_0x1b611c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b611c) {
            ctx->pc = 0x1B618Cu;
            return;
        }
    }
    ctx->pc = 0x1B6124u;
    // 0x1b6124: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b6124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b6128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b6128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b612c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B612Cu;
    {
        const bool branch_taken_0x1b612c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B612Cu;
        // 0x1b6130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b612c) {
            ctx->pc = 0x1B6170u;
            return;
        }
    }
    ctx->pc = 0x1B6134u;
    // 0x1b6134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6138: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6138u;
    {
        const bool branch_taken_0x1b6138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b6138) {
            ctx->pc = 0x1B6148u;
            return;
        }
    }
    ctx->pc = 0x1B6140u;
    // 0x1b6140: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B6140u;
    {
        const bool branch_taken_0x1b6140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6140u;
        // 0x1b6144: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6140) {
            ctx->pc = 0x1B617Cu;
            return;
        }
    }
    ctx->pc = 0x1B6148u;
}
