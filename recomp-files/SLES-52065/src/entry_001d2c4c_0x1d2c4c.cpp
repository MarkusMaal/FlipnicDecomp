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

// Function: entry_001d2c4c
// Address: 0x1d2c4c - 0x1d2ca0
void entry_001d2c4c_0x1d2c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2c4c_0x1d2c4c");
#endif

    switch (ctx->pc) {
        case 0x1d2c5cu: goto label_1d2c5c;
        default: break;
    }

    ctx->pc = 0x1d2c4cu;

    // 0x1d2c4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2c50: 0x8c2503a0  lw          $a1, 0x3A0($at)
    ctx->pc = 0x1d2c50u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3703A0u));
    // 0x1d2c54: 0xc074b7c  jal         func_1D2DF0
    ctx->pc = 0x1D2C54u;
    SET_GPR_U32(ctx, 31, 0x1D2C5Cu);
    ctx->pc = 0x1D2C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C54u;
    // 0x1d2c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2DF0u, 0x1D2C54u, 0x1D2C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C5Cu;
label_1d2c5c:
    // 0x1d2c5c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1D2C5Cu;
    {
        const bool branch_taken_0x1d2c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C5Cu;
        // 0x1d2c60: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c5c) {
            ctx->pc = 0x1D2DD8u;
            return;
        }
    }
    ctx->pc = 0x1D2C64u;
    // 0x1d2c64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d2c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d2c68: 0x8c2703a0  lw          $a3, 0x3A0($at)
    ctx->pc = 0x1d2c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 928)));
    // 0x1d2c6c: 0x10e60051  beq         $a3, $a2, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D2C6Cu;
    {
        const bool branch_taken_0x1d2c6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1D2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C6Cu;
        // 0x1d2c70: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c6c) {
            ctx->pc = 0x1D2DB4u;
            return;
        }
    }
    ctx->pc = 0x1D2C74u;
    // 0x1d2c74: 0x10e30043  beq         $a3, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1D2C74u;
    {
        const bool branch_taken_0x1d2c74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C74u;
        // 0x1d2c78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c74) {
            ctx->pc = 0x1D2D84u;
            return;
        }
    }
    ctx->pc = 0x1D2C7Cu;
    // 0x1d2c7c: 0x10e50032  beq         $a3, $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D2C7Cu;
    {
        const bool branch_taken_0x1d2c7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C7Cu;
        // 0x1d2c80: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c7c) {
            ctx->pc = 0x1D2D48u;
            return;
        }
    }
    ctx->pc = 0x1D2C84u;
    // 0x1d2c84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d2c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2c88: 0x10e4001f  beq         $a3, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D2C88u;
    {
        const bool branch_taken_0x1d2c88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d2c88) {
            ctx->pc = 0x1D2D08u;
            return;
        }
    }
    ctx->pc = 0x1D2C90u;
    // 0x1d2c90: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2C90u;
    {
        const bool branch_taken_0x1d2c90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2c90) {
            ctx->pc = 0x1D2CA0u;
            return;
        }
    }
    ctx->pc = 0x1D2C98u;
    // 0x1d2c98: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1D2C98u;
    {
        const bool branch_taken_0x1d2c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C98u;
        // 0x1d2c9c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c98) {
            ctx->pc = 0x1D2DDCu;
            return;
        }
    }
    ctx->pc = 0x1D2CA0u;
}
