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

// Function: entry_0017f004
// Address: 0x17f004 - 0x17f020
void entry_0017f004_0x17f004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f004_0x17f004");
#endif

    ctx->pc = 0x17f004u;

label_17f004:
    // 0x17f004: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17f004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17f008:
    // 0x17f008: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17f00c:
    if (ctx->pc == 0x17F00Cu) {
        ctx->pc = 0x17F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F008u;
        // 0x17f00c: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F010u;
        goto label_17f010;
    }
    ctx->pc = 0x17F008u;
    {
        const bool branch_taken_0x17f008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F008u;
        // 0x17f00c: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f008) {
            ctx->pc = 0x17F020u;
            return;
        }
    }
    ctx->pc = 0x17F010u;
label_17f010:
    // 0x17f010: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17f010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17f014:
    // 0x17f014: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17f014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17f018:
    // 0x17f018: 0x320f809  jalr        $t9
label_17f01c:
    if (ctx->pc == 0x17F01Cu) {
        ctx->pc = 0x17F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F018u;
        // 0x17f01c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F020u;
        goto label_fallthrough_0x17f018;
    }
    ctx->pc = 0x17F018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17F020u);
        ctx->pc = 0x17F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F018u;
        // 0x17f01c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F018u, 0x17F020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17f018:
    ctx->pc = 0x17F020u;
}
