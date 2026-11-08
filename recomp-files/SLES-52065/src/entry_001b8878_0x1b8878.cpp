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

// Function: entry_001b8878
// Address: 0x1b8878 - 0x1b88c8
void entry_001b8878_0x1b8878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8878_0x1b8878");
#endif

    switch (ctx->pc) {
        case 0x1b8880u: goto label_1b8880;
        case 0x1b88a8u: goto label_1b88a8;
        case 0x1b88bcu: goto label_1b88bc;
        default: break;
    }

    ctx->pc = 0x1b8878u;

    // 0x1b8878: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B8878u;
    SET_GPR_U32(ctx, 31, 0x1B8880u);
    ctx->pc = 0x1B887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8878u;
    // 0x1b887c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B8878u, 0x1B8880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8880u;
label_1b8880:
    // 0x1b8880: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1b8880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b8884: 0x1462fff7  bne         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B8884u;
    {
        const bool branch_taken_0x1b8884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8884) {
            ctx->pc = 0x1B8864u;
            return;
        }
    }
    ctx->pc = 0x1B888Cu;
    // 0x1b888c: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x1b888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1b8890: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8890u;
    {
        const bool branch_taken_0x1b8890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8890) {
            ctx->pc = 0x1B88C8u;
            return;
        }
    }
    ctx->pc = 0x1B8898u;
    // 0x1b8898: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8898u;
    {
        const bool branch_taken_0x1b8898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8898u;
        // 0x1b889c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8898) {
            ctx->pc = 0x1B88C8u;
            return;
        }
    }
    ctx->pc = 0x1B88A0u;
    // 0x1b88a0: 0xc06e240  jal         func_1B8900
    ctx->pc = 0x1B88A0u;
    SET_GPR_U32(ctx, 31, 0x1B88A8u);
    ctx->pc = 0x1B88A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B88A0u;
    // 0x1b88a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8900u, 0x1B88A0u, 0x1B88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88A8u;
label_1b88a8:
    // 0x1b88a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b88ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B88ACu;
    {
        const bool branch_taken_0x1b88ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88ACu;
        // 0x1b88b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88ac) {
            ctx->pc = 0x1B88C8u;
            return;
        }
    }
    ctx->pc = 0x1B88B4u;
    // 0x1b88b4: 0xc06e240  jal         func_1B8900
    ctx->pc = 0x1B88B4u;
    SET_GPR_U32(ctx, 31, 0x1B88BCu);
    ctx->pc = 0x1B8900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8900u, 0x1B88B4u, 0x1B88BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88BCu;
label_1b88bc:
    // 0x1b88bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b88bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b88c0: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1B88C0u;
    SET_GPR_U32(ctx, 31, 0x1B88C8u);
    ctx->pc = 0x1B88C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B88C0u;
    // 0x1b88c4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB270u, 0x1B88C0u, 0x1B88C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88C8u;
}
