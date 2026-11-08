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

// Function: entry_00151a24
// Address: 0x151a24 - 0x151a4c
void entry_00151a24_0x151a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151a24_0x151a24");
#endif

    switch (ctx->pc) {
        case 0x151a38u: goto label_151a38;
        default: break;
    }

    ctx->pc = 0x151a24u;

label_151a24:
    // 0x151a24: 0x0  nop
    ctx->pc = 0x151a24u;
    // NOP
label_151a28:
    // 0x151a28: 0x8e39000c  lw          $t9, 0xC($s1)
    ctx->pc = 0x151a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_151a2c:
    // 0x151a2c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x151a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_151a30:
    // 0x151a30: 0x320f809  jalr        $t9
label_151a34:
    if (ctx->pc == 0x151A34u) {
        ctx->pc = 0x151A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A30u;
        // 0x151a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A38u;
        goto label_151a38;
    }
    ctx->pc = 0x151A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151A38u);
        ctx->pc = 0x151A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A30u;
        // 0x151a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151A30u, 0x151A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151A38u;
label_151a38:
    // 0x151a38: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x151a38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_151a3c:
    // 0x151a3c: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_151a40:
    if (ctx->pc == 0x151A40u) {
        ctx->pc = 0x151A44u;
        goto label_151a44;
    }
    ctx->pc = 0x151A3Cu;
    {
        const bool branch_taken_0x151a3c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x151a3c) {
            ctx->pc = 0x151A24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151a24;
        }
    }
    ctx->pc = 0x151A44u;
label_151a44:
    // 0x151a44: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
label_151a48:
    if (ctx->pc == 0x151A48u) {
        ctx->pc = 0x151A4Cu;
        goto label_fallthrough_0x151a44;
    }
    ctx->pc = 0x151A44u;
    {
        const bool branch_taken_0x151a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151a44) {
            ctx->pc = 0x1519D8u;
            return;
        }
    }
label_fallthrough_0x151a44:
    ctx->pc = 0x151A4Cu;
}
