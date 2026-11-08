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

// Function: entry_00151ac0
// Address: 0x151ac0 - 0x151adc
void entry_00151ac0_0x151ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151ac0_0x151ac0");
#endif

    switch (ctx->pc) {
        case 0x151ad0u: goto label_151ad0;
        default: break;
    }

    ctx->pc = 0x151ac0u;

label_151ac0:
    // 0x151ac0: 0x8e39000c  lw          $t9, 0xC($s1)
    ctx->pc = 0x151ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_151ac4:
    // 0x151ac4: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x151ac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_151ac8:
    // 0x151ac8: 0x320f809  jalr        $t9
label_151acc:
    if (ctx->pc == 0x151ACCu) {
        ctx->pc = 0x151ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AC8u;
        // 0x151acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151AD0u;
        goto label_151ad0;
    }
    ctx->pc = 0x151AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151AD0u);
        ctx->pc = 0x151ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AC8u;
        // 0x151acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151AC8u, 0x151AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151AD0u;
label_151ad0:
    // 0x151ad0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x151ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_151ad4:
    // 0x151ad4: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_151ad8:
    if (ctx->pc == 0x151AD8u) {
        ctx->pc = 0x151ADCu;
        goto label_fallthrough_0x151ad4;
    }
    ctx->pc = 0x151AD4u;
    {
        const bool branch_taken_0x151ad4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ad4) {
            ctx->pc = 0x151AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151ac0;
        }
    }
label_fallthrough_0x151ad4:
    ctx->pc = 0x151ADCu;
}
