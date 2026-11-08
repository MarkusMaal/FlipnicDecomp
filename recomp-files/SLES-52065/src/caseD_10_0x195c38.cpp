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

// Function: caseD_10
// Address: 0x195c38 - 0x195c74
void caseD_10_0x195c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x195c38");
#endif

    switch (ctx->pc) {
        case 0x195c64u: goto label_195c64;
        case 0x195c70u: goto label_195c70;
        default: break;
    }

    ctx->pc = 0x195c38u;

    // 0x195c38: 0x8f8586fc  lw          $a1, -0x7904($gp)
    ctx->pc = 0x195c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x195c3c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x195C3Cu;
    {
        const bool branch_taken_0x195c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c3c) {
            ctx->pc = 0x195C80u;
            return;
        }
    }
    ctx->pc = 0x195C44u;
    // 0x195c44: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x195c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x195c48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x195c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x195c4c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x195C4Cu;
    {
        const bool branch_taken_0x195c4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195c4c) {
            ctx->pc = 0x195C88u;
            return;
        }
    }
    ctx->pc = 0x195C54u;
    // 0x195c54: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x195C54u;
    {
        const bool branch_taken_0x195c54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c54) {
            ctx->pc = 0x195C74u;
            return;
        }
    }
    ctx->pc = 0x195C5Cu;
    // 0x195c5c: 0xc047a50  jal         func_11E940
    ctx->pc = 0x195C5Cu;
    SET_GPR_U32(ctx, 31, 0x195C64u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x195C5Cu, 0x195C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C64u;
label_195c64:
    // 0x195c64: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x195c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x195c68: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x195C68u;
    SET_GPR_U32(ctx, 31, 0x195C70u);
    ctx->pc = 0x195C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C68u;
    // 0x195c6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x195C68u, 0x195C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C70u;
label_195c70:
    // 0x195c70: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x195c70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    ctx->pc = 0x195c74u;
}
