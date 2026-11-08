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

// Function: entry_00151e00
// Address: 0x151e00 - 0x151e10
void entry_00151e00_0x151e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151e00_0x151e00");
#endif

    ctx->pc = 0x151e00u;

    // 0x151e00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x151e04: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x151e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x151e08: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x151E08u;
    {
        const bool branch_taken_0x151e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151e08) {
            ctx->pc = 0x151DB8u;
            return;
        }
    }
    ctx->pc = 0x151E10u;
}
