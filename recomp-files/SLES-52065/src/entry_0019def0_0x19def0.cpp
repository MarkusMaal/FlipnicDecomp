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

// Function: entry_0019def0
// Address: 0x19def0 - 0x19df10
void entry_0019def0_0x19def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019def0_0x19def0");
#endif

    ctx->pc = 0x19def0u;

    // 0x19def0: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x19def0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x19def4: 0x8c420674  lw          $v0, 0x674($v0)
    ctx->pc = 0x19def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
    // 0x19def8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x19def8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19defc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x19DEFCu;
    {
        const bool branch_taken_0x19defc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19defc) {
            ctx->pc = 0x19DEA0u;
            return;
        }
    }
    ctx->pc = 0x19DF04u;
    // 0x19df04: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x19df04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x19df08: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x19df08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x19df0c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19df0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x19df10u;
}
