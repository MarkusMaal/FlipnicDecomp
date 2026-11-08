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

// Function: entry_001cccd8
// Address: 0x1cccd8 - 0x1ccd14
void entry_001cccd8_0x1cccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cccd8_0x1cccd8");
#endif

    switch (ctx->pc) {
        case 0x1cccecu: goto label_1cccec;
        case 0x1ccd00u: goto label_1ccd00;
        default: break;
    }

    ctx->pc = 0x1cccd8u;

    // 0x1cccd8: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCCD8u;
    {
        const bool branch_taken_0x1cccd8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCD8u;
        // 0x1cccdc: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccd8) {
            ctx->pc = 0x1CCD14u;
            return;
        }
    }
    ctx->pc = 0x1CCCE0u;
    // 0x1ccce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccce4: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CCCE4u;
    SET_GPR_U32(ctx, 31, 0x1CCCECu);
    ctx->pc = 0x1CCCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCE4u;
    // 0x1ccce8: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CCCE4u, 0x1CCCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCECu;
label_1cccec:
    // 0x1cccec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cccecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cccf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cccf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccf4: 0x24a58340  addiu       $a1, $a1, -0x7CC0
    ctx->pc = 0x1cccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935360));
    // 0x1cccf8: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CCCF8u;
    SET_GPR_U32(ctx, 31, 0x1CCD00u);
    ctx->pc = 0x1CCCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCF8u;
    // 0x1cccfc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CCCF8u, 0x1CCD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD00u;
label_1ccd00:
    // 0x1ccd00: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccd00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccd04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd08: 0x24a58400  addiu       $a1, $a1, -0x7C00
    ctx->pc = 0x1ccd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935552));
    // 0x1ccd0c: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CCD0Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD14u);
    ctx->pc = 0x1CCD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD0Cu;
    // 0x1ccd10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CCD0Cu, 0x1CCD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD14u;
}
