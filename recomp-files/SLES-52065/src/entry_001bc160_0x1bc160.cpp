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

// Function: entry_001bc160
// Address: 0x1bc160 - 0x1bc184
void entry_001bc160_0x1bc160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc160_0x1bc160");
#endif

    switch (ctx->pc) {
        case 0x1bc178u: goto label_1bc178;
        default: break;
    }

    ctx->pc = 0x1bc160u;

    // 0x1bc160: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1bc160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1bc164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bc164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bc168: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1bc168u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1bc16c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1bc16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1bc170: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x1BC170u;
    SET_GPR_U32(ctx, 31, 0x1BC178u);
    ctx->pc = 0x1BC174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC170u;
    // 0x1bc174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x1BC170u, 0x1BC178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC178u;
label_1bc178:
    // 0x1bc178: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC178u;
    {
        const bool branch_taken_0x1bc178 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC178u;
        // 0x1bc17c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc178) {
            ctx->pc = 0x1BC184u;
            return;
        }
    }
    ctx->pc = 0x1BC180u;
    // 0x1bc180: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x1bc180u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x1bc184u;
}
