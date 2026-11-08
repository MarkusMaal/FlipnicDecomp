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

// Function: FUN_00193fb0
// Address: 0x193fb0 - 0x193fe8
void FUN_00193fb0_0x193fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193fb0_0x193fb0");
#endif

    switch (ctx->pc) {
        case 0x193fccu: goto label_193fcc;
        case 0x193fd8u: goto label_193fd8;
        default: break;
    }

    ctx->pc = 0x193fb0u;

    // 0x193fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193fb8: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x193fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x193fbc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x193FBCu;
    {
        const bool branch_taken_0x193fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x193fbc) {
            ctx->pc = 0x193FDCu;
            goto label_193fdc;
        }
    }
    ctx->pc = 0x193FC4u;
    // 0x193fc4: 0xc047a50  jal         func_11E940
    ctx->pc = 0x193FC4u;
    SET_GPR_U32(ctx, 31, 0x193FCCu);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x193FC4u, 0x193FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193FCCu;
label_193fcc:
    // 0x193fcc: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x193fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x193fd0: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x193FD0u;
    SET_GPR_U32(ctx, 31, 0x193FD8u);
    ctx->pc = 0x193FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193FD0u;
    // 0x193fd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x193FD0u, 0x193FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193FD8u;
label_193fd8:
    // 0x193fd8: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x193fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_193fdc:
    // 0x193fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x193FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FE0u;
        // 0x193fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193FE8u;
}
