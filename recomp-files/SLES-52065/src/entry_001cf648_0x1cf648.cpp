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

// Function: entry_001cf648
// Address: 0x1cf648 - 0x1cf67c
void entry_001cf648_0x1cf648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf648_0x1cf648");
#endif

    switch (ctx->pc) {
        case 0x1cf674u: goto label_1cf674;
        default: break;
    }

    ctx->pc = 0x1cf648u;

    // 0x1cf648: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x1cf648u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cf64c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1CF64Cu;
    {
        const bool branch_taken_0x1cf64c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF64Cu;
        // 0x1cf650: 0x2a51021  addu        $v0, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf64c) {
            ctx->pc = 0x1CF67Cu;
            return;
        }
    }
    ctx->pc = 0x1CF654u;
    // 0x1cf654: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf658: 0x244a0064  addiu       $t2, $v0, 0x64
    ctx->pc = 0x1cf658u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1cf65c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cf65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cf660: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1cf660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cf664: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf668: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cf668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf66c: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CF66Cu;
    SET_GPR_U32(ctx, 31, 0x1CF674u);
    ctx->pc = 0x1CF670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF66Cu;
    // 0x1cf670: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CF66Cu, 0x1CF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF674u;
label_1cf674:
    // 0x1cf674: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf678: 0xaea20070  sw          $v0, 0x70($s5)
    ctx->pc = 0x1cf678u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 2));
    ctx->pc = 0x1cf67cu;
}
