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

// Function: entry_001b8abc
// Address: 0x1b8abc - 0x1b8ad0
void entry_001b8abc_0x1b8abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8abc_0x1b8abc");
#endif

    ctx->pc = 0x1b8abcu;

    // 0x1b8abc: 0x928300c0  lbu         $v1, 0xC0($s4)
    ctx->pc = 0x1b8abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1b8ac0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8AC0u;
    {
        const bool branch_taken_0x1b8ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ac0) {
            ctx->pc = 0x1B8AD0u;
            return;
        }
    }
    ctx->pc = 0x1B8AC8u;
    // 0x1b8ac8: 0xc06e484  jal         func_1B9210
    ctx->pc = 0x1B8AC8u;
    SET_GPR_U32(ctx, 31, 0x1B8AD0u);
    ctx->pc = 0x1B9210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9210u, 0x1B8AC8u, 0x1B8AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AD0u;
}
