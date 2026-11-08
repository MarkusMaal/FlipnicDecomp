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

// Function: entry_001cdaa4
// Address: 0x1cdaa4 - 0x1cdae4
void entry_001cdaa4_0x1cdaa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdaa4_0x1cdaa4");
#endif

    switch (ctx->pc) {
        case 0x1cdabcu: goto label_1cdabc;
        case 0x1cdad0u: goto label_1cdad0;
        default: break;
    }

    ctx->pc = 0x1cdaa4u;

    // 0x1cdaa4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cdaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cdaa8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CDAA8u;
    {
        const bool branch_taken_0x1cdaa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAA8u;
        // 0x1cdaac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaa8) {
            ctx->pc = 0x1CDAE4u;
            return;
        }
    }
    ctx->pc = 0x1CDAB0u;
    // 0x1cdab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cdab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdab4: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CDAB4u;
    SET_GPR_U32(ctx, 31, 0x1CDABCu);
    ctx->pc = 0x1CDAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAB4u;
    // 0x1cdab8: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CDAB4u, 0x1CDABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDABCu;
label_1cdabc:
    // 0x1cdabc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cdabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cdac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdac4: 0x24a58830  addiu       $a1, $a1, -0x77D0
    ctx->pc = 0x1cdac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936624));
    // 0x1cdac8: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CDAC8u;
    SET_GPR_U32(ctx, 31, 0x1CDAD0u);
    ctx->pc = 0x1CDACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAC8u;
    // 0x1cdacc: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CDAC8u, 0x1CDAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAD0u;
label_1cdad0:
    // 0x1cdad0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cdad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cdad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdad8: 0x24a589e0  addiu       $a1, $a1, -0x7620
    ctx->pc = 0x1cdad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937056));
    // 0x1cdadc: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CDADCu;
    SET_GPR_U32(ctx, 31, 0x1CDAE4u);
    ctx->pc = 0x1CDAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDADCu;
    // 0x1cdae0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CDADCu, 0x1CDAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAE4u;
}
