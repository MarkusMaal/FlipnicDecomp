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

// Function: entry_0012c2b4
// Address: 0x12c2b4 - 0x12c2cc
void entry_0012c2b4_0x12c2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c2b4_0x12c2b4");
#endif

    switch (ctx->pc) {
        case 0x12c2c8u: goto label_12c2c8;
        default: break;
    }

    ctx->pc = 0x12c2b4u;

    // 0x12c2b4: 0x8202006b  lb          $v0, 0x6B($s0)
    ctx->pc = 0x12c2b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 107)));
    // 0x12c2b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C2B8u;
    {
        const bool branch_taken_0x12c2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2B8u;
        // 0x12c2bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2b8) {
            ctx->pc = 0x12C2CCu;
            return;
        }
    }
    ctx->pc = 0x12C2C0u;
    // 0x12c2c0: 0xc0467d4  jal         func_119F50
    ctx->pc = 0x12C2C0u;
    SET_GPR_U32(ctx, 31, 0x12C2C8u);
    ctx->pc = 0x12C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2C0u;
    // 0x12c2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F50u, 0x12C2C0u, 0x12C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2C8u;
label_12c2c8:
    // 0x12c2c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12c2c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12c2ccu;
}
