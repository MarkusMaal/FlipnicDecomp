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

// Function: entry_0017bc10
// Address: 0x17bc10 - 0x17bc24
void entry_0017bc10_0x17bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bc10_0x17bc10");
#endif

    ctx->pc = 0x17bc10u;

    // 0x17bc10: 0x8c830210  lw          $v1, 0x210($a0)
    ctx->pc = 0x17bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x17bc14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BC14u;
    {
        const bool branch_taken_0x17bc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bc14) {
            ctx->pc = 0x17BC24u;
            return;
        }
    }
    ctx->pc = 0x17BC1Cu;
    // 0x17bc1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17bc20: 0xac830210  sw          $v1, 0x210($a0)
    ctx->pc = 0x17bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 3));
    ctx->pc = 0x17bc24u;
}
