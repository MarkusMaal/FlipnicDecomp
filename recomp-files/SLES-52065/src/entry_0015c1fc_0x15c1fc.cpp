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

// Function: entry_0015c1fc
// Address: 0x15c1fc - 0x15c210
void entry_0015c1fc_0x15c1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c1fc_0x15c1fc");
#endif

    ctx->pc = 0x15c1fcu;

    // 0x15c1fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15c1fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15c200: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15c200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x15c204: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x15c204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15c208: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15C208u;
    {
        const bool branch_taken_0x15c208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C208u;
        // 0x15c20c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c208) {
            ctx->pc = 0x15C1C8u;
            return;
        }
    }
    ctx->pc = 0x15C210u;
}
