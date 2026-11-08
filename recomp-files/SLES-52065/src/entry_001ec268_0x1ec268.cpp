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

// Function: entry_001ec268
// Address: 0x1ec268 - 0x1ec28c
void entry_001ec268_0x1ec268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec268_0x1ec268");
#endif

    switch (ctx->pc) {
        case 0x1ec270u: goto label_1ec270;
        case 0x1ec288u: goto label_1ec288;
        default: break;
    }

    ctx->pc = 0x1ec268u;

    // 0x1ec268: 0xc07ace0  jal         func_1EB380
    ctx->pc = 0x1EC268u;
    SET_GPR_U32(ctx, 31, 0x1EC270u);
    ctx->pc = 0x1EC26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC268u;
    // 0x1ec26c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB380u, 0x1EC268u, 0x1EC270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC270u;
label_1ec270:
    // 0x1ec270: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec274: 0xf  sync
    ctx->pc = 0x1ec274u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec278: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC278u;
    {
        const bool branch_taken_0x1ec278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC278u;
        // 0x1ec27c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec278) {
            ctx->pc = 0x1EC28Cu;
            return;
        }
    }
    ctx->pc = 0x1EC280u;
    // 0x1ec280: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EC280u;
    SET_GPR_U32(ctx, 31, 0x1EC288u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EC280u, 0x1EC288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC288u;
label_1ec288:
    // 0x1ec288: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ec288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ec28cu;
}
