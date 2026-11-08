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

// Function: entry_001b6d74
// Address: 0x1b6d74 - 0x1b6d8c
void entry_001b6d74_0x1b6d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6d74_0x1b6d74");
#endif

    switch (ctx->pc) {
        case 0x1b6d7cu: goto label_1b6d7c;
        default: break;
    }

    ctx->pc = 0x1b6d74u;

    // 0x1b6d74: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6D74u;
    SET_GPR_U32(ctx, 31, 0x1B6D7Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6D74u, 0x1B6D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D7Cu;
label_1b6d7c:
    // 0x1b6d7c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1b6d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1b6d80: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x1b6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b6d84: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1b6d88: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1b6d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x1b6d8cu;
}
