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

// Function: entry_001f15a0
// Address: 0x1f15a0 - 0x1f15b0
void entry_001f15a0_0x1f15a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f15a0_0x1f15a0");
#endif

    ctx->pc = 0x1f15a0u;

    // 0x1f15a0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F15A0u;
    {
        const bool branch_taken_0x1f15a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f15a0) {
            ctx->pc = 0x1F15B0u;
            return;
        }
    }
    ctx->pc = 0x1F15A8u;
    // 0x1f15a8: 0xa260044f  sb          $zero, 0x44F($s3)
    ctx->pc = 0x1f15a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f15ac: 0x241103ff  addiu       $s1, $zero, 0x3FF
    ctx->pc = 0x1f15acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->pc = 0x1f15b0u;
}
