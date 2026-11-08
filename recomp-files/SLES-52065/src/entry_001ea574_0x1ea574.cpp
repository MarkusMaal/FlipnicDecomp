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

// Function: entry_001ea574
// Address: 0x1ea574 - 0x1ea598
void entry_001ea574_0x1ea574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea574_0x1ea574");
#endif

    switch (ctx->pc) {
        case 0x1ea58cu: goto label_1ea58c;
        default: break;
    }

    ctx->pc = 0x1ea574u;

label_1ea574:
    // 0x1ea574: 0x0  nop
    ctx->pc = 0x1ea574u;
    // NOP
label_1ea578:
    // 0x1ea578: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea57c:
    // 0x1ea57c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ea580:
    // 0x1ea580: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x1ea580u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ea584:
    // 0x1ea584: 0x2c0f809  jalr        $s6
label_1ea588:
    if (ctx->pc == 0x1EA588u) {
        ctx->pc = 0x1EA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA584u;
        // 0x1ea588: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA58Cu;
        goto label_1ea58c;
    }
    ctx->pc = 0x1EA584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x1EA58Cu);
        ctx->pc = 0x1EA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA584u;
        // 0x1ea588: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA584u, 0x1EA58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA58Cu;
label_1ea58c:
    // 0x1ea58c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ea58cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1ea590:
    // 0x1ea590: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
label_1ea594:
    if (ctx->pc == 0x1EA594u) {
        ctx->pc = 0x1EA598u;
        goto label_fallthrough_0x1ea590;
    }
    ctx->pc = 0x1EA590u;
    {
        const bool branch_taken_0x1ea590 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea590) {
            ctx->pc = 0x1EA574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea574;
        }
    }
label_fallthrough_0x1ea590:
    ctx->pc = 0x1EA598u;
}
