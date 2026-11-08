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

// Function: entry_0017ef58
// Address: 0x17ef58 - 0x17ef74
void entry_0017ef58_0x17ef58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ef58_0x17ef58");
#endif

    ctx->pc = 0x17ef58u;

label_17ef58:
    // 0x17ef58: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17ef5c:
    // 0x17ef5c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17ef60:
    if (ctx->pc == 0x17EF60u) {
        ctx->pc = 0x17EF64u;
        goto label_17ef64;
    }
    ctx->pc = 0x17EF5Cu;
    {
        const bool branch_taken_0x17ef5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ef5c) {
            ctx->pc = 0x17EF74u;
            return;
        }
    }
    ctx->pc = 0x17EF64u;
label_17ef64:
    // 0x17ef64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17ef64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ef68:
    // 0x17ef68: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17ef68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17ef6c:
    // 0x17ef6c: 0x320f809  jalr        $t9
label_17ef70:
    if (ctx->pc == 0x17EF70u) {
        ctx->pc = 0x17EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF6Cu;
        // 0x17ef70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF74u;
        goto label_fallthrough_0x17ef6c;
    }
    ctx->pc = 0x17EF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17EF74u);
        ctx->pc = 0x17EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF6Cu;
        // 0x17ef70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EF6Cu, 0x17EF74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17ef6c:
    ctx->pc = 0x17EF74u;
}
