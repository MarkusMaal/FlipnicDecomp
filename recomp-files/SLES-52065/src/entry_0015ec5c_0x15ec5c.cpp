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

// Function: entry_0015ec5c
// Address: 0x15ec5c - 0x15ec78
void entry_0015ec5c_0x15ec5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ec5c_0x15ec5c");
#endif

    ctx->pc = 0x15ec5cu;

    // 0x15ec5c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15ec60: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15ec60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ec64: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EC64u;
    {
        const bool branch_taken_0x15ec64 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x15ec64) {
            ctx->pc = 0x15EC78u;
            return;
        }
    }
    ctx->pc = 0x15EC6Cu;
    // 0x15ec6c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15ec70: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x15ec74: 0xa464022e  sh          $a0, 0x22E($v1)
    ctx->pc = 0x15ec74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 558), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x15ec78u;
}
