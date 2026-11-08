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

// Function: entry_00193a0c
// Address: 0x193a0c - 0x193a38
void entry_00193a0c_0x193a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193a0c_0x193a0c");
#endif

    switch (ctx->pc) {
        case 0x193a1cu: goto label_193a1c;
        case 0x193a30u: goto label_193a30;
        default: break;
    }

    ctx->pc = 0x193a0cu;

label_193a0c:
    // 0x193a0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193a10:
    // 0x193a10: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x193a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_193a14:
    // 0x193a14: 0x320f809  jalr        $t9
label_193a18:
    if (ctx->pc == 0x193A18u) {
        ctx->pc = 0x193A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A14u;
        // 0x193a18: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A1Cu;
        goto label_193a1c;
    }
    ctx->pc = 0x193A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A1Cu);
        ctx->pc = 0x193A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A14u;
        // 0x193a18: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A14u, 0x193A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A1Cu;
label_193a1c:
    // 0x193a1c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x193a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_193a20:
    // 0x193a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193a24:
    // 0x193a24: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x193a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_193a28:
    // 0x193a28: 0x320f809  jalr        $t9
label_193a2c:
    if (ctx->pc == 0x193A2Cu) {
        ctx->pc = 0x193A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A28u;
        // 0x193a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A30u;
        goto label_193a30;
    }
    ctx->pc = 0x193A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A30u);
        ctx->pc = 0x193A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A28u;
        // 0x193a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A28u, 0x193A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A30u;
label_193a30:
    // 0x193a30: 0x1000002e  b           . + 4 + (0x2E << 2)
label_193a34:
    if (ctx->pc == 0x193A34u) {
        ctx->pc = 0x193A38u;
        goto label_fallthrough_0x193a30;
    }
    ctx->pc = 0x193A30u;
    {
        const bool branch_taken_0x193a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a30) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x193a30:
    ctx->pc = 0x193A38u;
}
