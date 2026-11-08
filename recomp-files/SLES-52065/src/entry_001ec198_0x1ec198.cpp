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

// Function: entry_001ec198
// Address: 0x1ec198 - 0x1ec1bc
void entry_001ec198_0x1ec198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec198_0x1ec198");
#endif

    switch (ctx->pc) {
        case 0x1ec1a0u: goto label_1ec1a0;
        case 0x1ec1b8u: goto label_1ec1b8;
        default: break;
    }

    ctx->pc = 0x1ec198u;

    // 0x1ec198: 0xc07acd8  jal         func_1EB360
    ctx->pc = 0x1EC198u;
    SET_GPR_U32(ctx, 31, 0x1EC1A0u);
    ctx->pc = 0x1EC19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC198u;
    // 0x1ec19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB360u, 0x1EC198u, 0x1EC1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1A0u;
label_1ec1a0:
    // 0x1ec1a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1a4: 0xf  sync
    ctx->pc = 0x1ec1a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec1a8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC1A8u;
    {
        const bool branch_taken_0x1ec1a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1A8u;
        // 0x1ec1ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1a8) {
            ctx->pc = 0x1EC1BCu;
            return;
        }
    }
    ctx->pc = 0x1EC1B0u;
    // 0x1ec1b0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EC1B0u;
    SET_GPR_U32(ctx, 31, 0x1EC1B8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EC1B0u, 0x1EC1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1B8u;
label_1ec1b8:
    // 0x1ec1b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ec1b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ec1bcu;
}
