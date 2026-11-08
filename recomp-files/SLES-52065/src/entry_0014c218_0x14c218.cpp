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

// Function: entry_0014c218
// Address: 0x14c218 - 0x14c23c
void entry_0014c218_0x14c218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c218_0x14c218");
#endif

    switch (ctx->pc) {
        case 0x14c224u: goto label_14c224;
        default: break;
    }

    ctx->pc = 0x14c218u;

    // 0x14c218: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c21c: 0xc04d108  jal         func_134420
    ctx->pc = 0x14C21Cu;
    SET_GPR_U32(ctx, 31, 0x14C224u);
    ctx->pc = 0x14C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C21Cu;
    // 0x14c220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134420u, 0x14C21Cu, 0x14C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C224u;
label_14c224:
    // 0x14c224: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x14c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x14c228: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14c228u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14c22c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C22Cu;
    {
        const bool branch_taken_0x14c22c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C22Cu;
        // 0x14c230: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c22c) {
            ctx->pc = 0x14C240u;
            return;
        }
    }
    ctx->pc = 0x14C234u;
    // 0x14c234: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14C234u;
    SET_GPR_U32(ctx, 31, 0x14C23Cu);
    ctx->pc = 0x14C238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C234u;
    // 0x14c238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14C234u, 0x14C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C23Cu;
}
