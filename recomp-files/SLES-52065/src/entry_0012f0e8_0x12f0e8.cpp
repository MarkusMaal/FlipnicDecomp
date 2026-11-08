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

// Function: entry_0012f0e8
// Address: 0x12f0e8 - 0x12f10c
void entry_0012f0e8_0x12f0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f0e8_0x12f0e8");
#endif

    switch (ctx->pc) {
        case 0x12f100u: goto label_12f100;
        default: break;
    }

    ctx->pc = 0x12f0e8u;

    // 0x12f0e8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x12f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12f0ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f0f0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x12f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x12f0f4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x12f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12f0f8: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x12F0F8u;
    SET_GPR_U32(ctx, 31, 0x12F100u);
    ctx->pc = 0x12F0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F0F8u;
    // 0x12f0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x12F0F8u, 0x12F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F100u;
label_12f100:
    // 0x12f100: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F100u;
    {
        const bool branch_taken_0x12f100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F100u;
        // 0x12f104: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f100) {
            ctx->pc = 0x12F10Cu;
            return;
        }
    }
    ctx->pc = 0x12F108u;
    // 0x12f108: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x12f108u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x12f10cu;
}
