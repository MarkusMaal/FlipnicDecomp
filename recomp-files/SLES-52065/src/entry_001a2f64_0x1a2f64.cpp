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

// Function: entry_001a2f64
// Address: 0x1a2f64 - 0x1a2f80
void entry_001a2f64_0x1a2f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2f64_0x1a2f64");
#endif

    ctx->pc = 0x1a2f64u;

label_1a2f64:
    // 0x1a2f64: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_1a2f68:
    if (ctx->pc == 0x1A2F68u) {
        ctx->pc = 0x1A2F6Cu;
        goto label_1a2f6c;
    }
    ctx->pc = 0x1A2F64u;
    {
        const bool branch_taken_0x1a2f64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f64) {
            ctx->pc = 0x1A2F80u;
            return;
        }
    }
    ctx->pc = 0x1A2F6Cu;
label_1a2f6c:
    // 0x1a2f6c: 0x8e79031c  lw          $t9, 0x31C($s3)
    ctx->pc = 0x1a2f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_1a2f70:
    // 0x1a2f70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f74:
    // 0x1a2f74: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a2f74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a2f78:
    // 0x1a2f78: 0x320f809  jalr        $t9
label_1a2f7c:
    if (ctx->pc == 0x1A2F7Cu) {
        ctx->pc = 0x1A2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F78u;
        // 0x1a2f7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F80u;
        goto label_fallthrough_0x1a2f78;
    }
    ctx->pc = 0x1A2F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A2F80u);
        ctx->pc = 0x1A2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F78u;
        // 0x1a2f7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2F78u, 0x1A2F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a2f78:
    ctx->pc = 0x1A2F80u;
}
