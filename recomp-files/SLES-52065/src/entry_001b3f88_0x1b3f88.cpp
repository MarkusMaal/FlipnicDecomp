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

// Function: entry_001b3f88
// Address: 0x1b3f88 - 0x1b3f9c
void entry_001b3f88_0x1b3f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3f88_0x1b3f88");
#endif

    switch (ctx->pc) {
        case 0x1b3f98u: goto label_1b3f98;
        default: break;
    }

    ctx->pc = 0x1b3f88u;

    // 0x1b3f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f8c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1b3f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3f90: 0xc047988  jal         func_11E620
    ctx->pc = 0x1B3F90u;
    SET_GPR_U32(ctx, 31, 0x1B3F98u);
    ctx->pc = 0x11E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E620u, 0x1B3F90u, 0x1B3F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F98u;
label_1b3f98:
    // 0x1b3f98: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b3f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1b3f9cu;
}
