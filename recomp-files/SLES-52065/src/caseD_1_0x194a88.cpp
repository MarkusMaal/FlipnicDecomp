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

// Function: caseD_1
// Address: 0x194a88 - 0x194aa0
void caseD_1_0x194a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x194a88");
#endif

    switch (ctx->pc) {
        case 0x194a98u: goto label_194a98;
        default: break;
    }

    ctx->pc = 0x194a88u;

    // 0x194a88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a8c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x194a90: 0xc0649cc  jal         func_192730
    ctx->pc = 0x194A90u;
    SET_GPR_U32(ctx, 31, 0x194A98u);
    ctx->pc = 0x194A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A90u;
    // 0x194a94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192730u, 0x194A90u, 0x194A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A98u;
label_194a98:
    // 0x194a98: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x194A98u;
    {
        const bool branch_taken_0x194a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194a98) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194AA0u;
}
