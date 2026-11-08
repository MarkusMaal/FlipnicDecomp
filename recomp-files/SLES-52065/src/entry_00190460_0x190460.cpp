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

// Function: entry_00190460
// Address: 0x190460 - 0x190478
void entry_00190460_0x190460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190460_0x190460");
#endif

    switch (ctx->pc) {
        case 0x190468u: goto label_190468;
        case 0x190474u: goto label_190474;
        default: break;
    }

    ctx->pc = 0x190460u;

    // 0x190460: 0xc064128  jal         func_1904A0
    ctx->pc = 0x190460u;
    SET_GPR_U32(ctx, 31, 0x190468u);
    ctx->pc = 0x1904A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1904A0u, 0x190460u, 0x190468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190468u;
label_190468:
    // 0x190468: 0x8f858704  lw          $a1, -0x78FC($gp)
    ctx->pc = 0x190468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x19046c: 0xc057424  jal         func_15D090
    ctx->pc = 0x19046Cu;
    SET_GPR_U32(ctx, 31, 0x190474u);
    ctx->pc = 0x190470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19046Cu;
    // 0x190470: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D090u, 0x19046Cu, 0x190474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190474u;
label_190474:
    // 0x190474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x190478u;
}
