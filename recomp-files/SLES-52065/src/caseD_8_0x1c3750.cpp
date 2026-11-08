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

// Function: caseD_8
// Address: 0x1c3750 - 0x1c378c
void caseD_8_0x1c3750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1c3750");
#endif

    switch (ctx->pc) {
        case 0x1c375cu: goto label_1c375c;
        case 0x1c3768u: goto label_1c3768;
        case 0x1c3774u: goto label_1c3774;
        default: break;
    }

    ctx->pc = 0x1c3750u;

    // 0x1c3750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3754: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3754u;
    SET_GPR_U32(ctx, 31, 0x1C375Cu);
    ctx->pc = 0x1C3758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3754u;
    // 0x1c3758: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3754u, 0x1C375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C375Cu;
label_1c375c:
    // 0x1c375c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c375cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3760: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3760u;
    SET_GPR_U32(ctx, 31, 0x1C3768u);
    ctx->pc = 0x1C3764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3760u;
    // 0x1c3764: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3760u, 0x1C3768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3768u;
label_1c3768:
    // 0x1c3768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c376c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C376Cu;
    SET_GPR_U32(ctx, 31, 0x1C3774u);
    ctx->pc = 0x1C3770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C376Cu;
    // 0x1c3770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C376Cu, 0x1C3774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3774u;
label_1c3774:
    // 0x1c3774: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c3774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3778: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3778u;
    {
        const bool branch_taken_0x1c3778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3778u;
        // 0x1c377c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3778) {
            ctx->pc = 0x1C378Cu;
            return;
        }
    }
    ctx->pc = 0x1C3780u;
    // 0x1c3780: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c3780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c3784: 0x10000320  b           . + 4 + (0x320 << 2)
    ctx->pc = 0x1C3784u;
    {
        const bool branch_taken_0x1c3784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3784u;
        // 0x1c3788: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3784) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C378Cu;
}
