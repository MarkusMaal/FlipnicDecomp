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

// Function: entry_001c62d8
// Address: 0x1c62d8 - 0x1c62f4
void entry_001c62d8_0x1c62d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c62d8_0x1c62d8");
#endif

    switch (ctx->pc) {
        case 0x1c62e0u: goto label_1c62e0;
        default: break;
    }

    ctx->pc = 0x1c62d8u;

    // 0x1c62d8: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C62D8u;
    SET_GPR_U32(ctx, 31, 0x1C62E0u);
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C62D8u, 0x1C62E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62E0u;
label_1c62e0:
    // 0x1c62e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c62e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c62e4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C62E4u;
    {
        const bool branch_taken_0x1c62e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c62e4) {
            ctx->pc = 0x1C62F4u;
            return;
        }
    }
    ctx->pc = 0x1C62ECu;
    // 0x1c62ec: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C62ECu;
    {
        const bool branch_taken_0x1c62ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c62ec) {
            ctx->pc = 0x1C6330u;
            return;
        }
    }
    ctx->pc = 0x1C62F4u;
}
