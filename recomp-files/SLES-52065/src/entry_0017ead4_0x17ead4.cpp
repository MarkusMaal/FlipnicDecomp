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

// Function: entry_0017ead4
// Address: 0x17ead4 - 0x17eaf4
void entry_0017ead4_0x17ead4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ead4_0x17ead4");
#endif

    ctx->pc = 0x17ead4u;

label_17ead4:
    // 0x17ead4: 0x0  nop
    ctx->pc = 0x17ead4u;
    // NOP
label_17ead8:
    // 0x17ead8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x17ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_17eadc:
    // 0x17eadc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17eae0:
    if (ctx->pc == 0x17EAE0u) {
        ctx->pc = 0x17EAE4u;
        goto label_17eae4;
    }
    ctx->pc = 0x17EADCu;
    {
        const bool branch_taken_0x17eadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eadc) {
            ctx->pc = 0x17EAF4u;
            return;
        }
    }
    ctx->pc = 0x17EAE4u;
label_17eae4:
    // 0x17eae4: 0x8c990038  lw          $t9, 0x38($a0)
    ctx->pc = 0x17eae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_17eae8:
    // 0x17eae8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x17eae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_17eaec:
    // 0x17eaec: 0x320f809  jalr        $t9
label_17eaf0:
    if (ctx->pc == 0x17EAF0u) {
        ctx->pc = 0x17EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAECu;
        // 0x17eaf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EAF4u;
        goto label_fallthrough_0x17eaec;
    }
    ctx->pc = 0x17EAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17EAF4u);
        ctx->pc = 0x17EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAECu;
        // 0x17eaf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EAECu, 0x17EAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17eaec:
    ctx->pc = 0x17EAF4u;
}
