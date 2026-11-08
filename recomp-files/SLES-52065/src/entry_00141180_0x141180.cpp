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

// Function: entry_00141180
// Address: 0x141180 - 0x141194
void entry_00141180_0x141180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141180_0x141180");
#endif

    ctx->pc = 0x141180u;

    // 0x141180: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x141180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x141184: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x141184u;
    {
        const bool branch_taken_0x141184 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x141184) {
            ctx->pc = 0x14113Cu;
            return;
        }
    }
    ctx->pc = 0x14118Cu;
    // 0x14118c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x14118Cu;
    {
        const bool branch_taken_0x14118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14118c) {
            ctx->pc = 0x1413E4u;
            return;
        }
    }
    ctx->pc = 0x141194u;
}
