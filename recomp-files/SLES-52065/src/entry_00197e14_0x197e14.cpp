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

// Function: entry_00197e14
// Address: 0x197e14 - 0x197e38
void entry_00197e14_0x197e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197e14_0x197e14");
#endif

    switch (ctx->pc) {
        case 0x197e2cu: goto label_197e2c;
        default: break;
    }

    ctx->pc = 0x197e14u;

label_197e14:
    // 0x197e14: 0x8c4401fc  lw          $a0, 0x1FC($v0)
    ctx->pc = 0x197e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_197e18:
    // 0x197e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197e1c:
    // 0x197e1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197e20:
    // 0x197e20: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x197e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197e24:
    // 0x197e24: 0x320f809  jalr        $t9
label_197e28:
    if (ctx->pc == 0x197E28u) {
        ctx->pc = 0x197E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E24u;
        // 0x197e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E2Cu;
        goto label_197e2c;
    }
    ctx->pc = 0x197E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197E2Cu);
        ctx->pc = 0x197E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E24u;
        // 0x197e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E24u, 0x197E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197E2Cu;
label_197e2c:
    // 0x197e2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_197e30:
    // 0x197e30: 0xc063e08  jal         func_18F820
label_197e34:
    if (ctx->pc == 0x197E34u) {
        ctx->pc = 0x197E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E30u;
        // 0x197e34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E38u;
        goto label_fallthrough_0x197e30;
    }
    ctx->pc = 0x197E30u;
    SET_GPR_U32(ctx, 31, 0x197E38u);
    ctx->pc = 0x197E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E30u;
    // 0x197e34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x197E30u, 0x197E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x197e30:
    ctx->pc = 0x197E38u;
}
