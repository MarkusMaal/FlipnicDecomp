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

// Function: entry_0011e194
// Address: 0x11e194 - 0x11e1b8
void entry_0011e194_0x11e194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e194_0x11e194");
#endif

    switch (ctx->pc) {
        case 0x11e19cu: goto label_11e19c;
        case 0x11e1a4u: goto label_11e1a4;
        default: break;
    }

    ctx->pc = 0x11e194u;

    // 0x11e194: 0xc0752de  jal         func_1D4B78
    ctx->pc = 0x11E194u;
    SET_GPR_U32(ctx, 31, 0x11E19Cu);
    ctx->pc = 0x1D4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B78u, 0x11E194u, 0x11E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E19Cu;
label_11e19c:
    // 0x11e19c: 0xc07c9bc  jal         func_1F26F0
    ctx->pc = 0x11E19Cu;
    SET_GPR_U32(ctx, 31, 0x11E1A4u);
    ctx->pc = 0x11E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E19Cu;
    // 0x11e1a0: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F26F0u, 0x11E19Cu, 0x11E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1A4u;
label_11e1a4:
    // 0x11e1a4: 0x820203ec  lb          $v0, 0x3EC($s0)
    ctx->pc = 0x11e1a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x11e1a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E1A8u;
    {
        const bool branch_taken_0x11e1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1A8u;
        // 0x11e1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1a8) {
            ctx->pc = 0x11E1B8u;
            return;
        }
    }
    ctx->pc = 0x11E1B0u;
    // 0x11e1b0: 0xc046c14  jal         func_11B050
    ctx->pc = 0x11E1B0u;
    SET_GPR_U32(ctx, 31, 0x11E1B8u);
    ctx->pc = 0x11E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E1B0u;
    // 0x11e1b4: 0x260503ec  addiu       $a1, $s0, 0x3EC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1004));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x11E1B0u, 0x11E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1B8u;
}
