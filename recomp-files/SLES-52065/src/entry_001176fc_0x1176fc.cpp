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

// Function: entry_001176fc
// Address: 0x1176fc - 0x11771c
void entry_001176fc_0x1176fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001176fc_0x1176fc");
#endif

    switch (ctx->pc) {
        case 0x117708u: goto label_117708;
        case 0x117714u: goto label_117714;
        default: break;
    }

    ctx->pc = 0x1176fcu;

    // 0x1176fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1176fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117700: 0xc045e78  jal         func_1179E0
    ctx->pc = 0x117700u;
    SET_GPR_U32(ctx, 31, 0x117708u);
    ctx->pc = 0x117704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117700u;
    // 0x117704: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1179E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1179E0u, 0x117700u, 0x117708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117708u;
label_117708:
    // 0x117708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11770c: 0xc045eac  jal         func_117AB0
    ctx->pc = 0x11770Cu;
    SET_GPR_U32(ctx, 31, 0x117714u);
    ctx->pc = 0x117710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11770Cu;
    // 0x117710: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AB0u, 0x11770Cu, 0x117714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117714u;
label_117714:
    // 0x117714: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x117714u;
    {
        const bool branch_taken_0x117714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117714) {
            ctx->pc = 0x117734u;
            return;
        }
    }
    ctx->pc = 0x11771Cu;
}
