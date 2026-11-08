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

// Function: entry_001a50b4
// Address: 0x1a50b4 - 0x1a50cc
void entry_001a50b4_0x1a50b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a50b4_0x1a50b4");
#endif

    ctx->pc = 0x1a50b4u;

    // 0x1a50b4: 0x0  nop
    ctx->pc = 0x1a50b4u;
    // NOP
    // 0x1a50b8: 0x8e6207c0  lw          $v0, 0x7C0($s3)
    ctx->pc = 0x1a50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1984)));
    // 0x1a50bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A50BCu;
    {
        const bool branch_taken_0x1a50bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a50bc) {
            ctx->pc = 0x1A50CCu;
            return;
        }
    }
    ctx->pc = 0x1A50C4u;
    // 0x1a50c4: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x1a50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1a50c8: 0xae6207c0  sw          $v0, 0x7C0($s3)
    ctx->pc = 0x1a50c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1984), GPR_U32(ctx, 2));
    ctx->pc = 0x1a50ccu;
}
