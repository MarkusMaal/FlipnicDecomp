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

// Function: entry_00194180
// Address: 0x194180 - 0x19418c
void entry_00194180_0x194180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194180_0x194180");
#endif

    ctx->pc = 0x194180u;

    // 0x194180: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x194180u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x194184: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x194184u;
    {
        const bool branch_taken_0x194184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194184) {
            ctx->pc = 0x194150u;
            return;
        }
    }
    ctx->pc = 0x19418Cu;
}
