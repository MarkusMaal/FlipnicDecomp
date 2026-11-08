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

// Function: entry_001d3834
// Address: 0x1d3834 - 0x1d3840
void entry_001d3834_0x1d3834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3834_0x1d3834");
#endif

    ctx->pc = 0x1d3834u;

    // 0x1d3834: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d3834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d3838: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D3838u;
    {
        const bool branch_taken_0x1d3838 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3838) {
            ctx->pc = 0x1D3808u;
            return;
        }
    }
    ctx->pc = 0x1D3840u;
}
