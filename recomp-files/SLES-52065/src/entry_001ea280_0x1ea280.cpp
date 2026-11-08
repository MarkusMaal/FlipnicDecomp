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

// Function: entry_001ea280
// Address: 0x1ea280 - 0x1ea2a0
void entry_001ea280_0x1ea280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea280_0x1ea280");
#endif

    switch (ctx->pc) {
        case 0x1ea294u: goto label_1ea294;
        default: break;
    }

    ctx->pc = 0x1ea280u;

label_1ea280:
    // 0x1ea280: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1ea284:
    // 0x1ea284: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ea288:
    // 0x1ea288: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x1ea288u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ea28c:
    // 0x1ea28c: 0x2c0f809  jalr        $s6
label_1ea290:
    if (ctx->pc == 0x1EA290u) {
        ctx->pc = 0x1EA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA28Cu;
        // 0x1ea290: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA294u;
        goto label_1ea294;
    }
    ctx->pc = 0x1EA28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x1EA294u);
        ctx->pc = 0x1EA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA28Cu;
        // 0x1ea290: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA28Cu, 0x1EA294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA294u;
label_1ea294:
    // 0x1ea294: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ea294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1ea298:
    // 0x1ea298: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_1ea29c:
    if (ctx->pc == 0x1EA29Cu) {
        ctx->pc = 0x1EA2A0u;
        goto label_fallthrough_0x1ea298;
    }
    ctx->pc = 0x1EA298u;
    {
        const bool branch_taken_0x1ea298 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea298) {
            ctx->pc = 0x1EA280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea280;
        }
    }
label_fallthrough_0x1ea298:
    ctx->pc = 0x1EA2A0u;
}
