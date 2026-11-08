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

// Function: entry_001d42ec
// Address: 0x1d42ec - 0x1d42fc
void entry_001d42ec_0x1d42ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d42ec_0x1d42ec");
#endif

    ctx->pc = 0x1d42ecu;

    // 0x1d42ec: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x1d42ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1d42f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D42F0u;
    {
        const bool branch_taken_0x1d42f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d42f0) {
            ctx->pc = 0x1D42C0u;
            return;
        }
    }
    ctx->pc = 0x1D42F8u;
    // 0x1d42f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d42f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d42fcu;
}
