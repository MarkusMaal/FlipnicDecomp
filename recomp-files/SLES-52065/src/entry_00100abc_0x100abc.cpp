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

// Function: entry_00100abc
// Address: 0x100abc - 0x100ae0
void entry_00100abc_0x100abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100abc_0x100abc");
#endif

    switch (ctx->pc) {
        case 0x100ad8u: goto label_100ad8;
        default: break;
    }

    ctx->pc = 0x100abcu;

label_100abc:
    // 0x100abc: 0x0  nop
    ctx->pc = 0x100abcu;
    // NOP
label_100ac0:
    // 0x100ac0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100ac4:
    // 0x100ac4: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x100ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_100ac8:
    // 0x100ac8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100acc:
    // 0x100acc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x100accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_100ad0:
    // 0x100ad0: 0x320f809  jalr        $t9
label_100ad4:
    if (ctx->pc == 0x100AD4u) {
        ctx->pc = 0x100AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AD0u;
        // 0x100ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AD8u;
        goto label_100ad8;
    }
    ctx->pc = 0x100AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100AD8u);
        ctx->pc = 0x100AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AD0u;
        // 0x100ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100AD0u, 0x100AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100AD8u;
label_100ad8:
    // 0x100ad8: 0x10000058  b           . + 4 + (0x58 << 2)
label_100adc:
    if (ctx->pc == 0x100ADCu) {
        ctx->pc = 0x100AE0u;
        goto label_fallthrough_0x100ad8;
    }
    ctx->pc = 0x100AD8u;
    {
        const bool branch_taken_0x100ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ad8) {
            ctx->pc = 0x100C3Cu;
            return;
        }
    }
label_fallthrough_0x100ad8:
    ctx->pc = 0x100AE0u;
}
