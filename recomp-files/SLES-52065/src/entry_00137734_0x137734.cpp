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

// Function: entry_00137734
// Address: 0x137734 - 0x137750
void entry_00137734_0x137734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137734_0x137734");
#endif

    ctx->pc = 0x137734u;

label_137734:
    // 0x137734: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x137734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_137738:
    // 0x137738: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_13773c:
    if (ctx->pc == 0x13773Cu) {
        ctx->pc = 0x137740u;
        goto label_137740;
    }
    ctx->pc = 0x137738u;
    {
        const bool branch_taken_0x137738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x137738) {
            ctx->pc = 0x137750u;
            return;
        }
    }
    ctx->pc = 0x137740u;
label_137740:
    // 0x137740: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x137740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_137744:
    // 0x137744: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x137744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_137748:
    // 0x137748: 0x320f809  jalr        $t9
label_13774c:
    if (ctx->pc == 0x13774Cu) {
        ctx->pc = 0x13774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137748u;
        // 0x13774c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137750u;
        goto label_fallthrough_0x137748;
    }
    ctx->pc = 0x137748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x137750u);
        ctx->pc = 0x13774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137748u;
        // 0x13774c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137748u, 0x137750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x137748:
    ctx->pc = 0x137750u;
}
