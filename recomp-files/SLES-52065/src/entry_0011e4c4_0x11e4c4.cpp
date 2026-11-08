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

// Function: entry_0011e4c4
// Address: 0x11e4c4 - 0x11e4e8
void entry_0011e4c4_0x11e4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e4c4_0x11e4c4");
#endif

    switch (ctx->pc) {
        case 0x11e4ccu: goto label_11e4cc;
        case 0x11e4d4u: goto label_11e4d4;
        default: break;
    }

    ctx->pc = 0x11e4c4u;

    // 0x11e4c4: 0xc0752de  jal         func_1D4B78
    ctx->pc = 0x11E4C4u;
    SET_GPR_U32(ctx, 31, 0x11E4CCu);
    ctx->pc = 0x1D4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B78u, 0x11E4C4u, 0x11E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4CCu;
label_11e4cc:
    // 0x11e4cc: 0xc07c9bc  jal         func_1F26F0
    ctx->pc = 0x11E4CCu;
    SET_GPR_U32(ctx, 31, 0x11E4D4u);
    ctx->pc = 0x11E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4CCu;
    // 0x11e4d0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F26F0u, 0x11E4CCu, 0x11E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4D4u;
label_11e4d4:
    // 0x11e4d4: 0x822203ec  lb          $v0, 0x3EC($s1)
    ctx->pc = 0x11e4d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x11e4d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E4D8u;
    {
        const bool branch_taken_0x11e4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4D8u;
        // 0x11e4dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4d8) {
            ctx->pc = 0x11E4E8u;
            return;
        }
    }
    ctx->pc = 0x11E4E0u;
    // 0x11e4e0: 0xc046c14  jal         func_11B050
    ctx->pc = 0x11E4E0u;
    SET_GPR_U32(ctx, 31, 0x11E4E8u);
    ctx->pc = 0x11E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4E0u;
    // 0x11e4e4: 0x262503ec  addiu       $a1, $s1, 0x3EC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1004));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x11E4E0u, 0x11E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4E8u;
}
