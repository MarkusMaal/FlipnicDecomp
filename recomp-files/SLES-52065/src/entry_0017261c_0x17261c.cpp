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

// Function: entry_0017261c
// Address: 0x17261c - 0x172630
void entry_0017261c_0x17261c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017261c_0x17261c");
#endif

    ctx->pc = 0x17261cu;

    // 0x17261c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x172620: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172620u;
    {
        const bool branch_taken_0x172620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172620) {
            ctx->pc = 0x172630u;
            return;
        }
    }
    ctx->pc = 0x172628u;
    // 0x172628: 0xc040150  jal         func_100540
    ctx->pc = 0x172628u;
    SET_GPR_U32(ctx, 31, 0x172630u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x172628u, 0x172630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172630u;
}
