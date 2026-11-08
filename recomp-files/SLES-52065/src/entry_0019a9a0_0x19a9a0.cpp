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

// Function: entry_0019a9a0
// Address: 0x19a9a0 - 0x19a9c4
void entry_0019a9a0_0x19a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a9a0_0x19a9a0");
#endif

    ctx->pc = 0x19a9a0u;

label_19a9a0:
    // 0x19a9a0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_19a9a4:
    if (ctx->pc == 0x19A9A4u) {
        ctx->pc = 0x19A9A8u;
        goto label_19a9a8;
    }
    ctx->pc = 0x19A9A0u;
    {
        const bool branch_taken_0x19a9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a9a0) {
            ctx->pc = 0x19A9C4u;
            return;
        }
    }
    ctx->pc = 0x19A9A8u;
label_19a9a8:
    // 0x19a9a8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19a9ac:
    if (ctx->pc == 0x19A9ACu) {
        ctx->pc = 0x19A9B0u;
        goto label_19a9b0;
    }
    ctx->pc = 0x19A9A8u;
    {
        const bool branch_taken_0x19a9a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a9a8) {
            ctx->pc = 0x19A9C4u;
            return;
        }
    }
    ctx->pc = 0x19A9B0u;
label_19a9b0:
    // 0x19a9b0: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19a9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19a9b4:
    // 0x19a9b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a9b8:
    // 0x19a9b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19a9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19a9bc:
    // 0x19a9bc: 0x320f809  jalr        $t9
label_19a9c0:
    if (ctx->pc == 0x19A9C0u) {
        ctx->pc = 0x19A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9BCu;
        // 0x19a9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A9C4u;
        goto label_fallthrough_0x19a9bc;
    }
    ctx->pc = 0x19A9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19A9C4u);
        ctx->pc = 0x19A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9BCu;
        // 0x19a9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A9BCu, 0x19A9C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x19a9bc:
    ctx->pc = 0x19A9C4u;
}
