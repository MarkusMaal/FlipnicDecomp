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

// Function: entry_00170900
// Address: 0x170900 - 0x170914
void entry_00170900_0x170900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170900_0x170900");
#endif

    ctx->pc = 0x170900u;

    // 0x170900: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x170900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x170904: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170904u;
    {
        const bool branch_taken_0x170904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170904) {
            ctx->pc = 0x170914u;
            return;
        }
    }
    ctx->pc = 0x17090Cu;
    // 0x17090c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17090Cu;
    {
        const bool branch_taken_0x17090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17090c) {
            ctx->pc = 0x17091Cu;
            return;
        }
    }
    ctx->pc = 0x170914u;
}
