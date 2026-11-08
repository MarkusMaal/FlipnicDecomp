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

// Function: entry_00122a74
// Address: 0x122a74 - 0x122a9c
void entry_00122a74_0x122a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122a74_0x122a74");
#endif

    switch (ctx->pc) {
        case 0x122a88u: goto label_122a88;
        default: break;
    }

    ctx->pc = 0x122a74u;

    // 0x122a74: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x122a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x122a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a7c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x122a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a80: 0xc048d50  jal         func_123540
    ctx->pc = 0x122A80u;
    SET_GPR_U32(ctx, 31, 0x122A88u);
    ctx->pc = 0x122A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A80u;
    // 0x122a84: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123540u, 0x122A80u, 0x122A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A88u;
label_122a88:
    // 0x122a88: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x122a88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x122a8c: 0x93838040  lbu         $v1, -0x7FC0($gp)
    ctx->pc = 0x122a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934592)));
    // 0x122a90: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x122a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x122A94u;
    {
        const bool branch_taken_0x122a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A94u;
        // 0x122a98: 0xa2a30004  sb          $v1, 0x4($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a94) {
            ctx->pc = 0x122AACu;
            return;
        }
    }
    ctx->pc = 0x122A9Cu;
}
