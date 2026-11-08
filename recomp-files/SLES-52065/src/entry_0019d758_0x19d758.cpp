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

// Function: entry_0019d758
// Address: 0x19d758 - 0x19d774
void entry_0019d758_0x19d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d758_0x19d758");
#endif

    ctx->pc = 0x19d758u;

label_19d758:
    // 0x19d758: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_19d75c:
    if (ctx->pc == 0x19D75Cu) {
        ctx->pc = 0x19D760u;
        goto label_19d760;
    }
    ctx->pc = 0x19D758u;
    {
        const bool branch_taken_0x19d758 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d758) {
            ctx->pc = 0x19D774u;
            return;
        }
    }
    ctx->pc = 0x19D760u;
label_19d760:
    // 0x19d760: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x19d760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_19d764:
    // 0x19d764: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d768:
    // 0x19d768: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19d768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19d76c:
    // 0x19d76c: 0x320f809  jalr        $t9
label_19d770:
    if (ctx->pc == 0x19D770u) {
        ctx->pc = 0x19D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D76Cu;
        // 0x19d770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D774u;
        goto label_fallthrough_0x19d76c;
    }
    ctx->pc = 0x19D76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19D774u);
        ctx->pc = 0x19D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D76Cu;
        // 0x19d770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D76Cu, 0x19D774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x19d76c:
    ctx->pc = 0x19D774u;
}
