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

// Function: entry_00121d78
// Address: 0x121d78 - 0x121da4
void entry_00121d78_0x121d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121d78_0x121d78");
#endif

    switch (ctx->pc) {
        case 0x121d80u: goto label_121d80;
        default: break;
    }

    ctx->pc = 0x121d78u;

label_121d78:
    // 0x121d78: 0xc049274  jal         func_1249D0
label_121d7c:
    if (ctx->pc == 0x121D7Cu) {
        ctx->pc = 0x121D80u;
        goto label_121d80;
    }
    ctx->pc = 0x121D78u;
    SET_GPR_U32(ctx, 31, 0x121D80u);
    ctx->pc = 0x1249D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249D0u, 0x121D78u, 0x121D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D80u;
label_121d80:
    // 0x121d80: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_121d84:
    if (ctx->pc == 0x121D84u) {
        ctx->pc = 0x121D88u;
        goto label_121d88;
    }
    ctx->pc = 0x121D80u;
    {
        const bool branch_taken_0x121d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121d80) {
            ctx->pc = 0x121DB0u;
            return;
        }
    }
    ctx->pc = 0x121D88u;
label_121d88:
    // 0x121d88: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_121d8c:
    if (ctx->pc == 0x121D8Cu) {
        ctx->pc = 0x121D90u;
        goto label_121d90;
    }
    ctx->pc = 0x121D88u;
    {
        const bool branch_taken_0x121d88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x121d88) {
            ctx->pc = 0x121DA4u;
            return;
        }
    }
    ctx->pc = 0x121D90u;
label_121d90:
    // 0x121d90: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121d94:
    // 0x121d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121d98:
    // 0x121d98: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x121d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_121d9c:
    // 0x121d9c: 0x320f809  jalr        $t9
label_121da0:
    if (ctx->pc == 0x121DA0u) {
        ctx->pc = 0x121DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D9Cu;
        // 0x121da0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121DA4u;
        goto label_fallthrough_0x121d9c;
    }
    ctx->pc = 0x121D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121DA4u);
        ctx->pc = 0x121DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D9Cu;
        // 0x121da0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121D9Cu, 0x121DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x121d9c:
    ctx->pc = 0x121DA4u;
}
