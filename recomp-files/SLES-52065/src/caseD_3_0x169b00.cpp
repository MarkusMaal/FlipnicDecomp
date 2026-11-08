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

// Function: caseD_3
// Address: 0x169b00 - 0x169b30
void caseD_3_0x169b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x169b00");
#endif

    switch (ctx->pc) {
        case 0x169b00u: goto label_169b00;
        case 0x169b04u: goto label_169b04;
        case 0x169b08u: goto label_169b08;
        case 0x169b0cu: goto label_169b0c;
        case 0x169b10u: goto label_169b10;
        case 0x169b14u: goto label_169b14;
        case 0x169b18u: goto label_169b18;
        case 0x169b1cu: goto label_169b1c;
        case 0x169b20u: goto label_169b20;
        case 0x169b24u: goto label_169b24;
        case 0x169b28u: goto label_169b28;
        case 0x169b2cu: goto label_169b2c;
        default: break;
    }

    ctx->pc = 0x169b00u;

label_169b00:
    // 0x169b00: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169b04:
    // 0x169b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169b08:
    // 0x169b08: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169b0c:
    // 0x169b0c: 0x320f809  jalr        $t9
label_169b10:
    if (ctx->pc == 0x169B10u) {
        ctx->pc = 0x169B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B0Cu;
        // 0x169b10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B14u;
        goto label_169b14;
    }
    ctx->pc = 0x169B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169B14u);
        ctx->pc = 0x169B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B0Cu;
        // 0x169b10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169B0Cu, 0x169B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169B14u;
label_169b14:
    // 0x169b14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x169b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_169b18:
    // 0x169b18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169b1c:
    // 0x169b1c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x169b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_169b20:
    // 0x169b20: 0x320f809  jalr        $t9
label_169b24:
    if (ctx->pc == 0x169B24u) {
        ctx->pc = 0x169B28u;
        goto label_169b28;
    }
    ctx->pc = 0x169B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169B28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169B20u, 0x169B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169B28u;
label_169b28:
    // 0x169b28: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_169b2c:
    if (ctx->pc == 0x169B2Cu) {
        ctx->pc = 0x169B30u;
        goto label_fallthrough_0x169b28;
    }
    ctx->pc = 0x169B28u;
    {
        const bool branch_taken_0x169b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b28) {
            ctx->pc = 0x169E48u;
            return;
        }
    }
label_fallthrough_0x169b28:
    ctx->pc = 0x169B30u;
}
