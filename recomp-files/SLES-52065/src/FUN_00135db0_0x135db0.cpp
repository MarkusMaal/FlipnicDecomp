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

// Function: FUN_00135db0
// Address: 0x135db0 - 0x135dec
void FUN_00135db0_0x135db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135db0_0x135db0");
#endif

    ctx->pc = 0x135db0u;

    // 0x135db0: 0x8f85851c  lw          $a1, -0x7AE4($gp)
    ctx->pc = 0x135db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
    // 0x135db4: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x135db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x135db8: 0x8f82853c  lw          $v0, -0x7AC4($gp)
    ctx->pc = 0x135db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935868)));
    // 0x135dbc: 0x24636370  addiu       $v1, $v1, 0x6370
    ctx->pc = 0x135dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25456));
    // 0x135dc0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x135dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x135dc4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x135dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x135dc8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x135dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x135dcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x135dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x135dd0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x135dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135dd4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x135DD4u;
    {
        const bool branch_taken_0x135dd4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x135DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135DD4u;
        // 0x135dd8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135dd4) {
            ctx->pc = 0x135DE4u;
            goto label_135de4;
        }
    }
    ctx->pc = 0x135DDCu;
    // 0x135ddc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x135ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x135de0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x135de0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_135de4:
    // 0x135de4: 0x3e00008  jr          $ra
    ctx->pc = 0x135DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135DE4u;
        // 0x135de8: 0x28425000  slti        $v0, $v0, 0x5000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20480) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135DECu;
}
