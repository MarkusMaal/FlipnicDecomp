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

// Function: entry_001209ac
// Address: 0x1209ac - 0x1209bc
void entry_001209ac_0x1209ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001209ac_0x1209ac");
#endif

    ctx->pc = 0x1209acu;

label_1209ac:
    // 0x1209ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1209acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1209b0:
    // 0x1209b0: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1209b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1209b4:
    // 0x1209b4: 0x320f809  jalr        $t9
label_1209b8:
    if (ctx->pc == 0x1209B8u) {
        ctx->pc = 0x1209B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209B4u;
        // 0x1209b8: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1209BCu;
        goto label_fallthrough_0x1209b4;
    }
    ctx->pc = 0x1209B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1209BCu);
        ctx->pc = 0x1209B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209B4u;
        // 0x1209b8: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1209B4u, 0x1209BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1209b4:
    ctx->pc = 0x1209BCu;
}
