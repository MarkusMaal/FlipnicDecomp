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

// Function: entry_0011960c
// Address: 0x11960c - 0x119634
void entry_0011960c_0x11960c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011960c_0x11960c");
#endif

    switch (ctx->pc) {
        case 0x119628u: goto label_119628;
        default: break;
    }

    ctx->pc = 0x11960cu;

label_11960c:
    // 0x11960c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_119610:
    // 0x119610: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_119614:
    // 0x119614: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119618:
    // 0x119618: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11961c:
    // 0x11961c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x11961cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_119620:
    // 0x119620: 0x320f809  jalr        $t9
label_119624:
    if (ctx->pc == 0x119624u) {
        ctx->pc = 0x119624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119620u;
        // 0x119624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119628u;
        goto label_119628;
    }
    ctx->pc = 0x119620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119628u);
        ctx->pc = 0x119624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119620u;
        // 0x119624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119620u, 0x119628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119628u;
label_119628:
    // 0x119628: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x119628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_11962c:
    // 0x11962c: 0x601fff7  bgez        $s0, . + 4 + (-0x9 << 2)
label_119630:
    if (ctx->pc == 0x119630u) {
        ctx->pc = 0x119630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11962Cu;
        // 0x119630: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119634u;
        goto label_fallthrough_0x11962c;
    }
    ctx->pc = 0x11962Cu;
    {
        const bool branch_taken_0x11962c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x119630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11962Cu;
        // 0x119630: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11962c) {
            ctx->pc = 0x11960Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11960c;
        }
    }
label_fallthrough_0x11962c:
    ctx->pc = 0x119634u;
}
