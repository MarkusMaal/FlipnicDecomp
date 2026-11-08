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

// Function: entry_0017ee7c
// Address: 0x17ee7c - 0x17ee98
void entry_0017ee7c_0x17ee7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ee7c_0x17ee7c");
#endif

    ctx->pc = 0x17ee7cu;

label_17ee7c:
    // 0x17ee7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17ee80:
    // 0x17ee80: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17ee84:
    if (ctx->pc == 0x17EE84u) {
        ctx->pc = 0x17EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE80u;
        // 0x17ee84: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EE88u;
        goto label_17ee88;
    }
    ctx->pc = 0x17EE80u;
    {
        const bool branch_taken_0x17ee80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE80u;
        // 0x17ee84: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee80) {
            ctx->pc = 0x17EE98u;
            return;
        }
    }
    ctx->pc = 0x17EE88u;
label_17ee88:
    // 0x17ee88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17ee88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ee8c:
    // 0x17ee8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17ee8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17ee90:
    // 0x17ee90: 0x320f809  jalr        $t9
label_17ee94:
    if (ctx->pc == 0x17EE94u) {
        ctx->pc = 0x17EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE90u;
        // 0x17ee94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EE98u;
        goto label_fallthrough_0x17ee90;
    }
    ctx->pc = 0x17EE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17EE98u);
        ctx->pc = 0x17EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE90u;
        // 0x17ee94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EE90u, 0x17EE98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17ee90:
    ctx->pc = 0x17EE98u;
}
