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

// Function: entry_001e8f20
// Address: 0x1e8f20 - 0x1e8f40
void entry_001e8f20_0x1e8f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8f20_0x1e8f20");
#endif

    switch (ctx->pc) {
        case 0x1e8f30u: goto label_1e8f30;
        default: break;
    }

    ctx->pc = 0x1e8f20u;

label_1e8f20:
    // 0x1e8f20: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x1e8f20u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1e8f24:
    // 0x1e8f24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e8f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e8f28:
    // 0x1e8f28: 0x260f809  jalr        $s3
label_1e8f2c:
    if (ctx->pc == 0x1E8F2Cu) {
        ctx->pc = 0x1E8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F28u;
        // 0x1e8f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8F30u;
        goto label_1e8f30;
    }
    ctx->pc = 0x1E8F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x1E8F30u);
        ctx->pc = 0x1E8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F28u;
        // 0x1e8f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8F28u, 0x1E8F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8F30u;
label_1e8f30:
    // 0x1e8f30: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e8f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1e8f34:
    // 0x1e8f34: 0x0  nop
    ctx->pc = 0x1e8f34u;
    // NOP
label_1e8f38:
    // 0x1e8f38: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_1e8f3c:
    if (ctx->pc == 0x1E8F3Cu) {
        ctx->pc = 0x1E8F40u;
        goto label_fallthrough_0x1e8f38;
    }
    ctx->pc = 0x1E8F38u;
    {
        const bool branch_taken_0x1e8f38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f38) {
            ctx->pc = 0x1E8F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8f20;
        }
    }
label_fallthrough_0x1e8f38:
    ctx->pc = 0x1E8F40u;
}
