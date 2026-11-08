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

// Function: FUN_0018a4c0
// Address: 0x18a4c0 - 0x18a50c
void FUN_0018a4c0_0x18a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a4c0_0x18a4c0");
#endif

    switch (ctx->pc) {
        case 0x18a4d8u: goto label_18a4d8;
        case 0x18a4e4u: goto label_18a4e4;
        case 0x18a4f4u: goto label_18a4f4;
        case 0x18a500u: goto label_18a500;
        default: break;
    }

    ctx->pc = 0x18a4c0u;

    // 0x18a4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a4c8: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A4C8u;
    {
        const bool branch_taken_0x18a4c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4C8u;
        // 0x18a4cc: 0xaf8580d4  sw          $a1, -0x7F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934740), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4c8) {
            ctx->pc = 0x18A4ECu;
            goto label_18a4ec;
        }
    }
    ctx->pc = 0x18A4D0u;
    // 0x18a4d0: 0xc07588a  jal         func_1D6228
    ctx->pc = 0x18A4D0u;
    SET_GPR_U32(ctx, 31, 0x18A4D8u);
    ctx->pc = 0x18A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4D0u;
    // 0x18a4d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6228u, 0x18A4D0u, 0x18A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4D8u;
label_18a4d8:
    // 0x18a4d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4dc: 0xc075164  jal         func_1D4590
    ctx->pc = 0x18A4DCu;
    SET_GPR_U32(ctx, 31, 0x18A4E4u);
    ctx->pc = 0x18A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4DCu;
    // 0x18a4e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4590u, 0x18A4DCu, 0x18A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4E4u;
label_18a4e4:
    // 0x18a4e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A4E4u;
    {
        const bool branch_taken_0x18a4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4E4u;
        // 0x18a4e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4e4) {
            ctx->pc = 0x18A504u;
            goto label_18a504;
        }
    }
    ctx->pc = 0x18A4ECu;
label_18a4ec:
    // 0x18a4ec: 0xc07588a  jal         func_1D6228
    ctx->pc = 0x18A4ECu;
    SET_GPR_U32(ctx, 31, 0x18A4F4u);
    ctx->pc = 0x18A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4ECu;
    // 0x18a4f0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6228u, 0x18A4ECu, 0x18A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4F4u;
label_18a4f4:
    // 0x18a4f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4f8: 0xc075164  jal         func_1D4590
    ctx->pc = 0x18A4F8u;
    SET_GPR_U32(ctx, 31, 0x18A500u);
    ctx->pc = 0x18A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4F8u;
    // 0x18a4fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4590u, 0x18A4F8u, 0x18A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A500u;
label_18a500:
    // 0x18a500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a504:
    // 0x18a504: 0x3e00008  jr          $ra
    ctx->pc = 0x18A504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A504u;
        // 0x18a508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A50Cu;
}
