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

// Function: entry_0017e688
// Address: 0x17e688 - 0x17e6a4
void entry_0017e688_0x17e688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e688_0x17e688");
#endif

    switch (ctx->pc) {
        case 0x17e690u: goto label_17e690;
        default: break;
    }

    ctx->pc = 0x17e688u;

    // 0x17e688: 0xc051198  jal         func_144660
    ctx->pc = 0x17E688u;
    SET_GPR_U32(ctx, 31, 0x17E690u);
    ctx->pc = 0x144660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144660u, 0x17E688u, 0x17E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E690u;
label_17e690:
    // 0x17e690: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e694: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E694u;
    {
        const bool branch_taken_0x17e694 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e694) {
            ctx->pc = 0x17E6A4u;
            return;
        }
    }
    ctx->pc = 0x17E69Cu;
    // 0x17e69c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17E69Cu;
    {
        const bool branch_taken_0x17e69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E69Cu;
        // 0x17e6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e69c) {
            ctx->pc = 0x17E6DCu;
            return;
        }
    }
    ctx->pc = 0x17E6A4u;
}
