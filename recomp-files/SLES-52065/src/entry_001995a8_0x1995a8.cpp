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

// Function: entry_001995a8
// Address: 0x1995a8 - 0x1995d8
void entry_001995a8_0x1995a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001995a8_0x1995a8");
#endif

    switch (ctx->pc) {
        case 0x1995ccu: goto label_1995cc;
        default: break;
    }

    ctx->pc = 0x1995a8u;

    // 0x1995a8: 0x108000e4  beqz        $a0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x1995A8u;
    {
        const bool branch_taken_0x1995a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1995a8) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x1995B0u;
    // 0x1995b0: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1995b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x1995b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1995b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1995b8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1995B8u;
    {
        const bool branch_taken_0x1995b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995B8u;
        // 0x1995bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995b8) {
            ctx->pc = 0x1995D8u;
            return;
        }
    }
    ctx->pc = 0x1995C0u;
    // 0x1995c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1995c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995c4: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1995C4u;
    SET_GPR_U32(ctx, 31, 0x1995CCu);
    ctx->pc = 0x1995C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995C4u;
    // 0x1995c8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1995C4u, 0x1995CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995CCu;
label_1995cc:
    // 0x1995cc: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1995CCu;
    {
        const bool branch_taken_0x1995cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1995cc) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x1995D4u;
    // 0x1995d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1995d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1995d8u;
}
