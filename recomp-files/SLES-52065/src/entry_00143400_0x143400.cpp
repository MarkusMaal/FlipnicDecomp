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

// Function: entry_00143400
// Address: 0x143400 - 0x14340c
void entry_00143400_0x143400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143400_0x143400");
#endif

    ctx->pc = 0x143400u;

    // 0x143400: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x143400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x143404: 0x14a2fff8  bne         $a1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x143404u;
    {
        const bool branch_taken_0x143404 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x143404) {
            ctx->pc = 0x1433E8u;
            return;
        }
    }
    ctx->pc = 0x14340Cu;
}
