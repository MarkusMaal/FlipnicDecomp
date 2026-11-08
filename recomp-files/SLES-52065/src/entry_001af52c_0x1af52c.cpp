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

// Function: entry_001af52c
// Address: 0x1af52c - 0x1af540
void entry_001af52c_0x1af52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af52c_0x1af52c");
#endif

    ctx->pc = 0x1af52cu;

    // 0x1af52c: 0x8e08283c  lw          $t0, 0x283C($s0)
    ctx->pc = 0x1af52cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10300)));
    // 0x1af530: 0x290103e8  slti        $at, $t0, 0x3E8
    ctx->pc = 0x1af530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1af534: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF534u;
    {
        const bool branch_taken_0x1af534 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af534) {
            ctx->pc = 0x1AF540u;
            return;
        }
    }
    ctx->pc = 0x1AF53Cu;
    // 0x1af53c: 0x240803e7  addiu       $t0, $zero, 0x3E7
    ctx->pc = 0x1af53cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    ctx->pc = 0x1af540u;
}
