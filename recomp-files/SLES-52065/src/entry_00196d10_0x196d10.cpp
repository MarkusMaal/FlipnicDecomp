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

// Function: entry_00196d10
// Address: 0x196d10 - 0x196d1c
void entry_00196d10_0x196d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196d10_0x196d10");
#endif

    ctx->pc = 0x196d10u;

    // 0x196d10: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x196d10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x196d14: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x196D14u;
    {
        const bool branch_taken_0x196d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x196D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D14u;
        // 0x196d18: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d14) {
            ctx->pc = 0x196C84u;
            return;
        }
    }
    ctx->pc = 0x196D1Cu;
}
