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

// Function: entry_001e87bc
// Address: 0x1e87bc - 0x1e87c8
void entry_001e87bc_0x1e87bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e87bc_0x1e87bc");
#endif

    ctx->pc = 0x1e87bcu;

    // 0x1e87bc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e87bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1e87c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E87C0u;
    {
        const bool branch_taken_0x1e87c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e87c0) {
            ctx->pc = 0x1E87D0u;
            return;
        }
    }
    ctx->pc = 0x1E87C8u;
}
