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

// Function: entry_00172608
// Address: 0x172608 - 0x17261c
void entry_00172608_0x172608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172608_0x172608");
#endif

    ctx->pc = 0x172608u;

    // 0x172608: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x172608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17260c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17260Cu;
    {
        const bool branch_taken_0x17260c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17260c) {
            ctx->pc = 0x17261Cu;
            return;
        }
    }
    ctx->pc = 0x172614u;
    // 0x172614: 0xc040150  jal         func_100540
    ctx->pc = 0x172614u;
    SET_GPR_U32(ctx, 31, 0x17261Cu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x172614u, 0x17261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17261Cu;
}
