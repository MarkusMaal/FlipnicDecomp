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

// Function: entry_001ec130
// Address: 0x1ec130 - 0x1ec154
void entry_001ec130_0x1ec130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec130_0x1ec130");
#endif

    switch (ctx->pc) {
        case 0x1ec138u: goto label_1ec138;
        case 0x1ec150u: goto label_1ec150;
        default: break;
    }

    ctx->pc = 0x1ec130u;

    // 0x1ec130: 0xc07acdc  jal         func_1EB370
    ctx->pc = 0x1EC130u;
    SET_GPR_U32(ctx, 31, 0x1EC138u);
    ctx->pc = 0x1EC134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC130u;
    // 0x1ec134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB370u, 0x1EC130u, 0x1EC138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC138u;
label_1ec138:
    // 0x1ec138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec13c: 0xf  sync
    ctx->pc = 0x1ec13cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec140: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC140u;
    {
        const bool branch_taken_0x1ec140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC140u;
        // 0x1ec144: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec140) {
            ctx->pc = 0x1EC154u;
            return;
        }
    }
    ctx->pc = 0x1EC148u;
    // 0x1ec148: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EC148u;
    SET_GPR_U32(ctx, 31, 0x1EC150u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EC148u, 0x1EC150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC150u;
label_1ec150:
    // 0x1ec150: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ec150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ec154u;
}
