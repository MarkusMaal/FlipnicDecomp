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

// Function: entry_001abac0
// Address: 0x1abac0 - 0x1abae4
void entry_001abac0_0x1abac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abac0_0x1abac0");
#endif

    switch (ctx->pc) {
        case 0x1abaccu: goto label_1abacc;
        default: break;
    }

    ctx->pc = 0x1abac0u;

    // 0x1abac0: 0x8e310010  lw          $s1, 0x10($s1)
    ctx->pc = 0x1abac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1abac4: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1ABAC4u;
    SET_GPR_U32(ctx, 31, 0x1ABACCu);
    ctx->pc = 0x1ABAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAC4u;
    // 0x1abac8: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1ABAC4u, 0x1ABACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABACCu;
label_1abacc:
    // 0x1abacc: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1abaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1abad0: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1abad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1abad4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABAD4u;
    {
        const bool branch_taken_0x1abad4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ABAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAD4u;
        // 0x1abad8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abad4) {
            ctx->pc = 0x1ABAE4u;
            return;
        }
    }
    ctx->pc = 0x1ABADCu;
    // 0x1abadc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ABADCu;
    {
        const bool branch_taken_0x1abadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABADCu;
        // 0x1abae0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abadc) {
            ctx->pc = 0x1ABAFCu;
            return;
        }
    }
    ctx->pc = 0x1ABAE4u;
}
