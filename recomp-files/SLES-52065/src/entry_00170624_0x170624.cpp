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

// Function: entry_00170624
// Address: 0x170624 - 0x170638
void entry_00170624_0x170624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170624_0x170624");
#endif

    ctx->pc = 0x170624u;

    // 0x170624: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x170624u;
    {
        const bool branch_taken_0x170624 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x170624) {
            ctx->pc = 0x170638u;
            return;
        }
    }
    ctx->pc = 0x17062Cu;
    // 0x17062c: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17062Cu;
    {
        const bool branch_taken_0x17062c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x17062c) {
            ctx->pc = 0x170638u;
            return;
        }
    }
    ctx->pc = 0x170634u;
    // 0x170634: 0xa0800263  sb          $zero, 0x263($a0)
    ctx->pc = 0x170634u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 611), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x170638u;
}
