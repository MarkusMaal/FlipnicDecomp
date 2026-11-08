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

// Function: entry_0015ce44
// Address: 0x15ce44 - 0x15ce78
void entry_0015ce44_0x15ce44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ce44_0x15ce44");
#endif

    ctx->pc = 0x15ce44u;

label_15ce44:
    // 0x15ce44: 0x0  nop
    ctx->pc = 0x15ce44u;
    // NOP
label_15ce48:
    // 0x15ce48: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x15ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_15ce4c:
    // 0x15ce4c: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15ce50:
    // 0x15ce50: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15ce50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15ce54:
    // 0x15ce54: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_15ce58:
    if (ctx->pc == 0x15CE58u) {
        ctx->pc = 0x15CE5Cu;
        goto label_15ce5c;
    }
    ctx->pc = 0x15CE54u;
    {
        const bool branch_taken_0x15ce54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ce54) {
            ctx->pc = 0x15CE78u;
            return;
        }
    }
    ctx->pc = 0x15CE5Cu;
label_15ce5c:
    // 0x15ce5c: 0x908301f9  lbu         $v1, 0x1F9($a0)
    ctx->pc = 0x15ce5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 505)));
label_15ce60:
    // 0x15ce60: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_15ce64:
    if (ctx->pc == 0x15CE64u) {
        ctx->pc = 0x15CE68u;
        goto label_15ce68;
    }
    ctx->pc = 0x15CE60u;
    {
        const bool branch_taken_0x15ce60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ce60) {
            ctx->pc = 0x15CE78u;
            return;
        }
    }
    ctx->pc = 0x15CE68u;
label_15ce68:
    // 0x15ce68: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15ce68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15ce6c:
    // 0x15ce6c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x15ce6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_15ce70:
    // 0x15ce70: 0x320f809  jalr        $t9
label_15ce74:
    if (ctx->pc == 0x15CE74u) {
        ctx->pc = 0x15CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE70u;
        // 0x15ce74: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE78u;
        goto label_fallthrough_0x15ce70;
    }
    ctx->pc = 0x15CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CE78u);
        ctx->pc = 0x15CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE70u;
        // 0x15ce74: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CE70u, 0x15CE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15ce70:
    ctx->pc = 0x15CE78u;
}
