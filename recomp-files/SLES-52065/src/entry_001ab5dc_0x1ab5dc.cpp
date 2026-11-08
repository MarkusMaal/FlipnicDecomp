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

// Function: entry_001ab5dc
// Address: 0x1ab5dc - 0x1ab5f8
void entry_001ab5dc_0x1ab5dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab5dc_0x1ab5dc");
#endif

    ctx->pc = 0x1ab5dcu;

label_1ab5dc:
    // 0x1ab5dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ab5e0:
    if (ctx->pc == 0x1AB5E0u) {
        ctx->pc = 0x1AB5E4u;
        goto label_1ab5e4;
    }
    ctx->pc = 0x1AB5DCu;
    {
        const bool branch_taken_0x1ab5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab5dc) {
            ctx->pc = 0x1AB5F8u;
            return;
        }
    }
    ctx->pc = 0x1AB5E4u;
label_1ab5e4:
    // 0x1ab5e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ab5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ab5e8:
    // 0x1ab5e8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ab5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ab5ec:
    // 0x1ab5ec: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ab5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ab5f0:
    // 0x1ab5f0: 0x320f809  jalr        $t9
label_1ab5f4:
    if (ctx->pc == 0x1AB5F4u) {
        ctx->pc = 0x1AB5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5F0u;
        // 0x1ab5f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5F8u;
        goto label_fallthrough_0x1ab5f0;
    }
    ctx->pc = 0x1AB5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB5F8u);
        ctx->pc = 0x1AB5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5F0u;
        // 0x1ab5f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB5F0u, 0x1AB5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ab5f0:
    ctx->pc = 0x1AB5F8u;
}
