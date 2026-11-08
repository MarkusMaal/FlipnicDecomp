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

// Function: entry_0019e75c
// Address: 0x19e75c - 0x19e778
void entry_0019e75c_0x19e75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e75c_0x19e75c");
#endif

    ctx->pc = 0x19e75cu;

label_19e75c:
    // 0x19e75c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19e760:
    if (ctx->pc == 0x19E760u) {
        ctx->pc = 0x19E764u;
        goto label_19e764;
    }
    ctx->pc = 0x19E75Cu;
    {
        const bool branch_taken_0x19e75c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e75c) {
            ctx->pc = 0x19E778u;
            return;
        }
    }
    ctx->pc = 0x19E764u;
label_19e764:
    // 0x19e764: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19e764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19e768:
    // 0x19e768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e76c:
    // 0x19e76c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19e76cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19e770:
    // 0x19e770: 0x320f809  jalr        $t9
label_19e774:
    if (ctx->pc == 0x19E774u) {
        ctx->pc = 0x19E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E770u;
        // 0x19e774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E778u;
        goto label_fallthrough_0x19e770;
    }
    ctx->pc = 0x19E770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E778u);
        ctx->pc = 0x19E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E770u;
        // 0x19e774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E770u, 0x19E778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x19e770:
    ctx->pc = 0x19E778u;
}
