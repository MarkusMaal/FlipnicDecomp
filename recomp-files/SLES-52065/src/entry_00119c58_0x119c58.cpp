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

// Function: entry_00119c58
// Address: 0x119c58 - 0x119c6c
void entry_00119c58_0x119c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119c58_0x119c58");
#endif

    ctx->pc = 0x119c58u;

    // 0x119c58: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119C58u;
    {
        const bool branch_taken_0x119c58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x119c58) {
            ctx->pc = 0x119C6Cu;
            return;
        }
    }
    ctx->pc = 0x119C60u;
    // 0x119c60: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x119c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x119c64: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x119c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x119c68: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x119c68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x119c6cu;
}
