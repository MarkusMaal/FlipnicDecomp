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

// Function: entry_00105128
// Address: 0x105128 - 0x10514c
void entry_00105128_0x105128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105128_0x105128");
#endif

    switch (ctx->pc) {
        case 0x105130u: goto label_105130;
        case 0x105140u: goto label_105140;
        default: break;
    }

    ctx->pc = 0x105128u;

    // 0x105128: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x105128u;
    SET_GPR_U32(ctx, 31, 0x105130u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x105128u, 0x105130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105130u;
label_105130:
    // 0x105130: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105130u;
    {
        const bool branch_taken_0x105130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105130u;
        // 0x105134: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105130) {
            ctx->pc = 0x10514Cu;
            return;
        }
    }
    ctx->pc = 0x105138u;
    // 0x105138: 0xc056360  jal         func_158D80
    ctx->pc = 0x105138u;
    SET_GPR_U32(ctx, 31, 0x105140u);
    ctx->pc = 0x10513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105138u;
    // 0x10513c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x105138u, 0x105140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105140u;
label_105140:
    // 0x105140: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105144: 0x2442a970  addiu       $v0, $v0, -0x5690
    ctx->pc = 0x105144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945136));
    // 0x105148: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10514cu;
}
