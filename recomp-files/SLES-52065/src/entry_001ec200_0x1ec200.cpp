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

// Function: entry_001ec200
// Address: 0x1ec200 - 0x1ec224
void entry_001ec200_0x1ec200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec200_0x1ec200");
#endif

    switch (ctx->pc) {
        case 0x1ec208u: goto label_1ec208;
        case 0x1ec220u: goto label_1ec220;
        default: break;
    }

    ctx->pc = 0x1ec200u;

    // 0x1ec200: 0xc07ace4  jal         func_1EB390
    ctx->pc = 0x1EC200u;
    SET_GPR_U32(ctx, 31, 0x1EC208u);
    ctx->pc = 0x1EC204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC200u;
    // 0x1ec204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB390u, 0x1EC200u, 0x1EC208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC208u;
label_1ec208:
    // 0x1ec208: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec20c: 0xf  sync
    ctx->pc = 0x1ec20cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec210: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC210u;
    {
        const bool branch_taken_0x1ec210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC210u;
        // 0x1ec214: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec210) {
            ctx->pc = 0x1EC224u;
            return;
        }
    }
    ctx->pc = 0x1EC218u;
    // 0x1ec218: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EC218u;
    SET_GPR_U32(ctx, 31, 0x1EC220u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EC218u, 0x1EC220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC220u;
label_1ec220:
    // 0x1ec220: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ec220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ec224u;
}
