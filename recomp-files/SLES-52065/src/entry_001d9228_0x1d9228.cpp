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

// Function: entry_001d9228
// Address: 0x1d9228 - 0x1d9248
void entry_001d9228_0x1d9228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9228_0x1d9228");
#endif

    switch (ctx->pc) {
        case 0x1d9234u: goto label_1d9234;
        default: break;
    }

    ctx->pc = 0x1d9228u;

    // 0x1d9228: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d9228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d922c: 0xc0755f2  jal         func_1D57C8
    ctx->pc = 0x1D922Cu;
    SET_GPR_U32(ctx, 31, 0x1D9234u);
    ctx->pc = 0x1D9230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D922Cu;
    // 0x1d9230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D57C8u, 0x1D922Cu, 0x1D9234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9234u;
label_1d9234:
    // 0x1d9234: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d9234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9238: 0x54750003  bnel        $v1, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9238u;
    {
        const bool branch_taken_0x1d9238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x1d9238) {
            ctx->pc = 0x1D923Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9238u;
            // 0x1d923c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9248u;
            return;
        }
    }
    ctx->pc = 0x1D9240u;
    // 0x1d9240: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D9240u;
    {
        const bool branch_taken_0x1d9240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9240u;
        // 0x1d9244: 0x2411fffe  addiu       $s1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9240) {
            ctx->pc = 0x1D92ACu;
            return;
        }
    }
    ctx->pc = 0x1D9248u;
}
