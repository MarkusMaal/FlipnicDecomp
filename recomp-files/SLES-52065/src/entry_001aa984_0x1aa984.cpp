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

// Function: entry_001aa984
// Address: 0x1aa984 - 0x1aa9a8
void entry_001aa984_0x1aa984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa984_0x1aa984");
#endif

    switch (ctx->pc) {
        case 0x1aa9a0u: goto label_1aa9a0;
        default: break;
    }

    ctx->pc = 0x1aa984u;

label_1aa984:
    // 0x1aa984: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
label_1aa988:
    if (ctx->pc == 0x1AA988u) {
        ctx->pc = 0x1AA98Cu;
        goto label_1aa98c;
    }
    ctx->pc = 0x1AA984u;
    {
        const bool branch_taken_0x1aa984 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa984) {
            ctx->pc = 0x1AA9C4u;
            return;
        }
    }
    ctx->pc = 0x1AA98Cu;
label_1aa98c:
    // 0x1aa98c: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x1aa98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_1aa990:
    // 0x1aa990: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1aa994:
    // 0x1aa994: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1aa994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1aa998:
    // 0x1aa998: 0x320f809  jalr        $t9
label_1aa99c:
    if (ctx->pc == 0x1AA99Cu) {
        ctx->pc = 0x1AA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA998u;
        // 0x1aa99c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9A0u;
        goto label_1aa9a0;
    }
    ctx->pc = 0x1AA998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA9A0u);
        ctx->pc = 0x1AA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA998u;
        // 0x1aa99c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA998u, 0x1AA9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA9A0u;
label_1aa9a0:
    // 0x1aa9a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1aa9a4:
    if (ctx->pc == 0x1AA9A4u) {
        ctx->pc = 0x1AA9A8u;
        goto label_fallthrough_0x1aa9a0;
    }
    ctx->pc = 0x1AA9A0u;
    {
        const bool branch_taken_0x1aa9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa9a0) {
            ctx->pc = 0x1AA9C4u;
            return;
        }
    }
label_fallthrough_0x1aa9a0:
    ctx->pc = 0x1AA9A8u;
}
