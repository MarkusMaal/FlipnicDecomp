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

// Function: entry_001be438
// Address: 0x1be438 - 0x1be454
void entry_001be438_0x1be438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be438_0x1be438");
#endif

    switch (ctx->pc) {
        case 0x1be44cu: goto label_1be44c;
        default: break;
    }

    ctx->pc = 0x1be438u;

label_1be438:
    // 0x1be438: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1be438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1be43c:
    // 0x1be43c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1be43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1be440:
    // 0x1be440: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1be440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1be444:
    // 0x1be444: 0x320f809  jalr        $t9
label_1be448:
    if (ctx->pc == 0x1BE448u) {
        ctx->pc = 0x1BE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE444u;
        // 0x1be448: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE44Cu;
        goto label_1be44c;
    }
    ctx->pc = 0x1BE444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1BE44Cu);
        ctx->pc = 0x1BE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE444u;
        // 0x1be448: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE444u, 0x1BE44Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE44Cu;
label_1be44c:
    // 0x1be44c: 0xc048974  jal         func_1225D0
label_1be450:
    if (ctx->pc == 0x1BE450u) {
        ctx->pc = 0x1BE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE44Cu;
        // 0x1be450: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE454u;
        goto label_fallthrough_0x1be44c;
    }
    ctx->pc = 0x1BE44Cu;
    SET_GPR_U32(ctx, 31, 0x1BE454u);
    ctx->pc = 0x1BE450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE44Cu;
    // 0x1be450: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1BE44Cu, 0x1BE454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1be44c:
    ctx->pc = 0x1BE454u;
}
