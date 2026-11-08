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

// Function: entry_00138b54
// Address: 0x138b54 - 0x138b68
void entry_00138b54_0x138b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b54_0x138b54");
#endif

    ctx->pc = 0x138b54u;

    // 0x138b54: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x138B54u;
    {
        const bool branch_taken_0x138b54 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b54) {
            ctx->pc = 0x138B68u;
            return;
        }
    }
    ctx->pc = 0x138B5Cu;
    // 0x138b5c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138b60: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x138b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x138b64: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x138b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    ctx->pc = 0x138b68u;
}
