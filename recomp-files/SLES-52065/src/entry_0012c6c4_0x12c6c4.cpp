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

// Function: entry_0012c6c4
// Address: 0x12c6c4 - 0x12c6d8
void entry_0012c6c4_0x12c6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c6c4_0x12c6c4");
#endif

    ctx->pc = 0x12c6c4u;

    // 0x12c6c4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C6C4u;
    {
        const bool branch_taken_0x12c6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12c6c4) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C6CCu;
    // 0x12c6cc: 0xa2400066  sb          $zero, 0x66($s2)
    ctx->pc = 0x12c6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c6d0: 0xa2400064  sb          $zero, 0x64($s2)
    ctx->pc = 0x12c6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c6d4: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x12c6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12c6d8u;
}
