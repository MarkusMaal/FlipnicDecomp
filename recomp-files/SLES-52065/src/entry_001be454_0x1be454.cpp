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

// Function: entry_001be454
// Address: 0x1be454 - 0x1be488
void entry_001be454_0x1be454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be454_0x1be454");
#endif

    switch (ctx->pc) {
        case 0x1be460u: goto label_1be460;
        case 0x1be474u: goto label_1be474;
        default: break;
    }

    ctx->pc = 0x1be454u;

    // 0x1be454: 0x0  nop
    ctx->pc = 0x1be454u;
    // NOP
    // 0x1be458: 0xc06f924  jal         func_1BE490
    ctx->pc = 0x1BE458u;
    SET_GPR_U32(ctx, 31, 0x1BE460u);
    ctx->pc = 0x1BE45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE458u;
    // 0x1be45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE490u, 0x1BE458u, 0x1BE460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE460u;
label_1be460:
    // 0x1be460: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1be460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1be464: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BE464u;
    {
        const bool branch_taken_0x1be464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE464u;
        // 0x1be468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be464) {
            ctx->pc = 0x1BE438u;
            return;
        }
    }
    ctx->pc = 0x1BE46Cu;
    // 0x1be46c: 0xc06f9a4  jal         func_1BE690
    ctx->pc = 0x1BE46Cu;
    SET_GPR_U32(ctx, 31, 0x1BE474u);
    ctx->pc = 0x1BE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE690u, 0x1BE46Cu, 0x1BE474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE474u;
label_1be474:
    // 0x1be474: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1be474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be478: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be47c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be480: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE480u;
        // 0x1be484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE488u;
}
