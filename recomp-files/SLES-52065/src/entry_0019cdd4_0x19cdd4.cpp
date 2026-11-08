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

// Function: entry_0019cdd4
// Address: 0x19cdd4 - 0x19cde4
void entry_0019cdd4_0x19cdd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cdd4_0x19cdd4");
#endif

    ctx->pc = 0x19cdd4u;

    // 0x19cdd4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19cdd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19cdd8: 0x126182a  slt         $v1, $t1, $a2
    ctx->pc = 0x19cdd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x19cddc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19CDDCu;
    {
        const bool branch_taken_0x19cddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDDCu;
        // 0x19cde0: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cddc) {
            ctx->pc = 0x19CDA0u;
            return;
        }
    }
    ctx->pc = 0x19CDE4u;
}
