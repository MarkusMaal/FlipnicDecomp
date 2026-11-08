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

// Function: entry_001e91f4
// Address: 0x1e91f4 - 0x1e921c
void entry_001e91f4_0x1e91f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e91f4_0x1e91f4");
#endif

    ctx->pc = 0x1e91f4u;

    // 0x1e91f4: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1e91f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e91f8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1e91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1e91fc: 0x14e3001b  bne         $a3, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E91FCu;
    {
        const bool branch_taken_0x1e91fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e91fc) {
            ctx->pc = 0x1E926Cu;
            return;
        }
    }
    ctx->pc = 0x1E9204u;
    // 0x1e9204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e9208: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1e9208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1e920c: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x1e920cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9210: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9210u;
    {
        const bool branch_taken_0x1e9210 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e9210) {
            ctx->pc = 0x1E921Cu;
            return;
        }
    }
    ctx->pc = 0x1E9218u;
    // 0x1e9218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1e921cu;
}
