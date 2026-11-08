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

// Function: entry_00136274
// Address: 0x136274 - 0x136284
void entry_00136274_0x136274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136274_0x136274");
#endif

    ctx->pc = 0x136274u;

    // 0x136274: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x136274u;
    {
        const bool branch_taken_0x136274 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x136274) {
            ctx->pc = 0x136284u;
            return;
        }
    }
    ctx->pc = 0x13627Cu;
    // 0x13627c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x13627cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x136280: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x136280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x136284u;
}
