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

// Function: entry_0012f658
// Address: 0x12f658 - 0x12f67c
void entry_0012f658_0x12f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f658_0x12f658");
#endif

    switch (ctx->pc) {
        case 0x12f66cu: goto label_12f66c;
        default: break;
    }

    ctx->pc = 0x12f658u;

label_12f658:
    // 0x12f658: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12f658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12f65c:
    // 0x12f65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f660:
    // 0x12f660: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x12f660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_12f664:
    // 0x12f664: 0x320f809  jalr        $t9
label_12f668:
    if (ctx->pc == 0x12F668u) {
        ctx->pc = 0x12F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F664u;
        // 0x12f668: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F66Cu;
        goto label_12f66c;
    }
    ctx->pc = 0x12F664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F66Cu);
        ctx->pc = 0x12F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F664u;
        // 0x12f668: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F664u, 0x12F66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F66Cu;
label_12f66c:
    // 0x12f66c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_12f670:
    if (ctx->pc == 0x12F670u) {
        ctx->pc = 0x12F674u;
        goto label_12f674;
    }
    ctx->pc = 0x12F66Cu;
    {
        const bool branch_taken_0x12f66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f66c) {
            ctx->pc = 0x12F67Cu;
            return;
        }
    }
    ctx->pc = 0x12F674u;
label_12f674:
    // 0x12f674: 0x10000039  b           . + 4 + (0x39 << 2)
label_12f678:
    if (ctx->pc == 0x12F678u) {
        ctx->pc = 0x12F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F674u;
        // 0x12f678: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F67Cu;
        goto label_fallthrough_0x12f674;
    }
    ctx->pc = 0x12F674u;
    {
        const bool branch_taken_0x12f674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F674u;
        // 0x12f678: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f674) {
            ctx->pc = 0x12F75Cu;
            return;
        }
    }
label_fallthrough_0x12f674:
    ctx->pc = 0x12F67Cu;
}
