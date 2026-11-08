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

// Function: entry_00108fe4
// Address: 0x108fe4 - 0x108ff0
void entry_00108fe4_0x108fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108fe4_0x108fe4");
#endif

    ctx->pc = 0x108fe4u;

    // 0x108fe4: 0x80420026  lb          $v0, 0x26($v0)
    ctx->pc = 0x108fe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x108fe8: 0x1c400001  bgtz        $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x108FE8u;
    {
        const bool branch_taken_0x108fe8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x108fe8) {
            ctx->pc = 0x108FF0u;
            return;
        }
    }
    ctx->pc = 0x108FF0u;
}
