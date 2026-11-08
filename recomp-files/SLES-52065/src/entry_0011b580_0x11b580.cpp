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

// Function: entry_0011b580
// Address: 0x11b580 - 0x11b590
void entry_0011b580_0x11b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b580_0x11b580");
#endif

    ctx->pc = 0x11b580u;

    // 0x11b580: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x11b580u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x11b584: 0x29a30160  slti        $v1, $t5, 0x160
    ctx->pc = 0x11b584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)352) ? 1 : 0);
    // 0x11b588: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x11B588u;
    {
        const bool branch_taken_0x11b588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B588u;
        // 0x11b58c: 0xad1821  addu        $v1, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b588) {
            ctx->pc = 0x11B4D8u;
            return;
        }
    }
    ctx->pc = 0x11B590u;
}
