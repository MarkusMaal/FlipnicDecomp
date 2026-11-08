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

// Function: entry_001e7368
// Address: 0x1e7368 - 0x1e7394
void entry_001e7368_0x1e7368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7368_0x1e7368");
#endif

    switch (ctx->pc) {
        case 0x1e7384u: goto label_1e7384;
        default: break;
    }

    ctx->pc = 0x1e7368u;

label_1e7368:
    // 0x1e7368: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1e7368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e736c:
    // 0x1e736c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e7370:
    // 0x1e7370: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x1e7370u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7374:
    // 0x1e7374: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e7374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e7378:
    // 0x1e7378: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1e7378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1e737c:
    // 0x1e737c: 0x320f809  jalr        $t9
label_1e7380:
    if (ctx->pc == 0x1E7380u) {
        ctx->pc = 0x1E7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E737Cu;
        // 0x1e7380: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7384u;
        goto label_1e7384;
    }
    ctx->pc = 0x1E737Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7384u);
        ctx->pc = 0x1E7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E737Cu;
        // 0x1e7380: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E737Cu, 0x1E7384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E7384u;
label_1e7384:
    // 0x1e7384: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1e7384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e7388:
    // 0x1e7388: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x1e7388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1e738c:
    // 0x1e738c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1e7390:
    if (ctx->pc == 0x1E7390u) {
        ctx->pc = 0x1E7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E738Cu;
        // 0x1e7390: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7394u;
        goto label_fallthrough_0x1e738c;
    }
    ctx->pc = 0x1E738Cu;
    {
        const bool branch_taken_0x1e738c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E738Cu;
        // 0x1e7390: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e738c) {
            ctx->pc = 0x1E7368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7368;
        }
    }
label_fallthrough_0x1e738c:
    ctx->pc = 0x1E7394u;
}
