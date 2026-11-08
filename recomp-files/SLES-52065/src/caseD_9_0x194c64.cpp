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

// Function: caseD_9
// Address: 0x194c64 - 0x194c90
void caseD_9_0x194c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x194c64");
#endif

    switch (ctx->pc) {
        case 0x194c88u: goto label_194c88;
        default: break;
    }

    ctx->pc = 0x194c64u;

    // 0x194c64: 0x0  nop
    ctx->pc = 0x194c64u;
    // NOP
    // 0x194c68: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x194c6c: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x194c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x194c70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c74: 0x8e080030  lw          $t0, 0x30($s0)
    ctx->pc = 0x194c74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x194c78: 0x8e090034  lw          $t1, 0x34($s0)
    ctx->pc = 0x194c78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x194c7c: 0x8e0a0038  lw          $t2, 0x38($s0)
    ctx->pc = 0x194c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x194c80: 0xc064b40  jal         func_192D00
    ctx->pc = 0x194C80u;
    SET_GPR_U32(ctx, 31, 0x194C88u);
    ctx->pc = 0x194C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C80u;
    // 0x194c84: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192D00u, 0x194C80u, 0x194C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C88u;
label_194c88:
    // 0x194c88: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x194C88u;
    {
        const bool branch_taken_0x194c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c88) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194C90u;
}
