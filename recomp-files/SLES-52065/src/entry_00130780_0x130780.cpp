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

// Function: entry_00130780
// Address: 0x130780 - 0x13079c
void entry_00130780_0x130780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130780_0x130780");
#endif

    ctx->pc = 0x130780u;

label_130780:
    // 0x130780: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_130784:
    if (ctx->pc == 0x130784u) {
        ctx->pc = 0x130788u;
        goto label_130788;
    }
    ctx->pc = 0x130780u;
    {
        const bool branch_taken_0x130780 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x130780) {
            ctx->pc = 0x13079Cu;
            return;
        }
    }
    ctx->pc = 0x130788u;
label_130788:
    // 0x130788: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x130788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13078c:
    // 0x13078c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13078cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130790:
    // 0x130790: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x130790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_130794:
    // 0x130794: 0x320f809  jalr        $t9
label_130798:
    if (ctx->pc == 0x130798u) {
        ctx->pc = 0x130798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130794u;
        // 0x130798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13079Cu;
        goto label_fallthrough_0x130794;
    }
    ctx->pc = 0x130794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13079Cu);
        ctx->pc = 0x130798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130794u;
        // 0x130798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130794u, 0x13079Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x130794:
    ctx->pc = 0x13079Cu;
}
