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

// Function: entry_00169b44
// Address: 0x169b44 - 0x169b68
void entry_00169b44_0x169b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169b44_0x169b44");
#endif

    switch (ctx->pc) {
        case 0x169b54u: goto label_169b54;
        default: break;
    }

    ctx->pc = 0x169b44u;

label_169b44:
    // 0x169b44: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169b44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169b48:
    // 0x169b48: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x169b48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_169b4c:
    // 0x169b4c: 0x320f809  jalr        $t9
label_169b50:
    if (ctx->pc == 0x169B50u) {
        ctx->pc = 0x169B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B4Cu;
        // 0x169b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B54u;
        goto label_169b54;
    }
    ctx->pc = 0x169B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169B54u);
        ctx->pc = 0x169B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B4Cu;
        // 0x169b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169B4Cu, 0x169B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169B54u;
label_169b54:
    // 0x169b54: 0x92040223  lbu         $a0, 0x223($s0)
    ctx->pc = 0x169b54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 547)));
label_169b58:
    // 0x169b58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_169b5c:
    if (ctx->pc == 0x169B5Cu) {
        ctx->pc = 0x169B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B58u;
        // 0x169b5c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B60u;
        goto label_169b60;
    }
    ctx->pc = 0x169B58u;
    {
        const bool branch_taken_0x169b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B58u;
        // 0x169b5c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b58) {
            ctx->pc = 0x169B68u;
            return;
        }
    }
    ctx->pc = 0x169B60u;
label_169b60:
    // 0x169b60: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_169b64:
    if (ctx->pc == 0x169B64u) {
        ctx->pc = 0x169B68u;
        goto label_fallthrough_0x169b60;
    }
    ctx->pc = 0x169B60u;
    {
        const bool branch_taken_0x169b60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169b60) {
            ctx->pc = 0x169B90u;
            return;
        }
    }
label_fallthrough_0x169b60:
    ctx->pc = 0x169B68u;
}
