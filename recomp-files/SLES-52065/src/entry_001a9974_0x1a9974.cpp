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

// Function: entry_001a9974
// Address: 0x1a9974 - 0x1a9990
void entry_001a9974_0x1a9974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9974_0x1a9974");
#endif

    ctx->pc = 0x1a9974u;

    // 0x1a9974: 0x0  nop
    ctx->pc = 0x1a9974u;
    // NOP
    // 0x1a9978: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a997c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a997cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a9980: 0x1062ffb6  beq         $v1, $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1A9980u;
    {
        const bool branch_taken_0x1a9980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9980) {
            ctx->pc = 0x1A985Cu;
            return;
        }
    }
    ctx->pc = 0x1A9988u;
    // 0x1a9988: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a998c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a998cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a9990u;
}
