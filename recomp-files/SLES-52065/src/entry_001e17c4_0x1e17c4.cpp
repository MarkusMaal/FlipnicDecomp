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

// Function: entry_001e17c4
// Address: 0x1e17c4 - 0x1e17ec
void entry_001e17c4_0x1e17c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e17c4_0x1e17c4");
#endif

    switch (ctx->pc) {
        case 0x1e17d4u: goto label_1e17d4;
        case 0x1e17e4u: goto label_1e17e4;
        default: break;
    }

    ctx->pc = 0x1e17c4u;

    // 0x1e17c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E17C4u;
    {
        const bool branch_taken_0x1e17c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17C4u;
        // 0x1e17c8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e17c4) {
            ctx->pc = 0x1E17ECu;
            return;
        }
    }
    ctx->pc = 0x1E17CCu;
    // 0x1e17cc: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E17CCu;
    SET_GPR_U32(ctx, 31, 0x1E17D4u);
    ctx->pc = 0x1E17D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E17CCu;
    // 0x1e17d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E17CCu, 0x1E17D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E17D4u;
label_1e17d4:
    // 0x1e17d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e17d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e17d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17dc: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E17DCu;
    SET_GPR_U32(ctx, 31, 0x1E17E4u);
    ctx->pc = 0x1E17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E17DCu;
    // 0x1e17e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E17DCu, 0x1E17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E17E4u;
label_1e17e4:
    // 0x1e17e4: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E17E4u;
    SET_GPR_U32(ctx, 31, 0x1E17ECu);
    ctx->pc = 0x1E17E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E17E4u;
    // 0x1e17e8: 0x27c40030  addiu       $a0, $fp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E17E4u, 0x1E17ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E17ECu;
}
