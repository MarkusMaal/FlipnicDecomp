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

// Function: entry_001aed10
// Address: 0x1aed10 - 0x1aed2c
void entry_001aed10_0x1aed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aed10_0x1aed10");
#endif

    ctx->pc = 0x1aed10u;

label_1aed10:
    // 0x1aed10: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1aed14:
    if (ctx->pc == 0x1AED14u) {
        ctx->pc = 0x1AED18u;
        goto label_1aed18;
    }
    ctx->pc = 0x1AED10u;
    {
        const bool branch_taken_0x1aed10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aed10) {
            ctx->pc = 0x1AED2Cu;
            return;
        }
    }
    ctx->pc = 0x1AED18u;
label_1aed18:
    // 0x1aed18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1aed18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aed1c:
    // 0x1aed1c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1aed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1aed20:
    // 0x1aed20: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1aed20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1aed24:
    // 0x1aed24: 0x320f809  jalr        $t9
label_1aed28:
    if (ctx->pc == 0x1AED28u) {
        ctx->pc = 0x1AED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED24u;
        // 0x1aed28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED2Cu;
        goto label_fallthrough_0x1aed24;
    }
    ctx->pc = 0x1AED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AED2Cu);
        ctx->pc = 0x1AED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED24u;
        // 0x1aed28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AED24u, 0x1AED2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1aed24:
    ctx->pc = 0x1AED2Cu;
}
