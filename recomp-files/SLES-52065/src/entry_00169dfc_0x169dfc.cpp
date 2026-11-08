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

// Function: entry_00169dfc
// Address: 0x169dfc - 0x169e28
void entry_00169dfc_0x169dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169dfc_0x169dfc");
#endif

    switch (ctx->pc) {
        case 0x169e10u: goto label_169e10;
        default: break;
    }

    ctx->pc = 0x169dfcu;

label_169dfc:
    // 0x169dfc: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169e00:
    // 0x169e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169e04:
    // 0x169e04: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169e08:
    // 0x169e08: 0x320f809  jalr        $t9
label_169e0c:
    if (ctx->pc == 0x169E0Cu) {
        ctx->pc = 0x169E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E08u;
        // 0x169e0c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169E10u;
        goto label_169e10;
    }
    ctx->pc = 0x169E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169E10u);
        ctx->pc = 0x169E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E08u;
        // 0x169e0c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169E08u, 0x169E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169E10u;
label_169e10:
    // 0x169e10: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x169e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_169e14:
    // 0x169e14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169e18:
    // 0x169e18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169e1c:
    // 0x169e1c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x169e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_169e20:
    // 0x169e20: 0x320f809  jalr        $t9
label_169e24:
    if (ctx->pc == 0x169E24u) {
        ctx->pc = 0x169E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E20u;
        // 0x169e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169E28u;
        goto label_fallthrough_0x169e20;
    }
    ctx->pc = 0x169E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169E28u);
        ctx->pc = 0x169E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E20u;
        // 0x169e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169E20u, 0x169E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x169e20:
    ctx->pc = 0x169E28u;
}
