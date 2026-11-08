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

// Function: entry_00141668
// Address: 0x141668 - 0x14167c
void entry_00141668_0x141668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141668_0x141668");
#endif

    ctx->pc = 0x141668u;

    // 0x141668: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x141668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14166c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14166Cu;
    {
        const bool branch_taken_0x14166c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14166c) {
            ctx->pc = 0x14167Cu;
            return;
        }
    }
    ctx->pc = 0x141674u;
    // 0x141674: 0xc0401a4  jal         func_100690
    ctx->pc = 0x141674u;
    SET_GPR_U32(ctx, 31, 0x14167Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x141674u, 0x14167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14167Cu;
}
