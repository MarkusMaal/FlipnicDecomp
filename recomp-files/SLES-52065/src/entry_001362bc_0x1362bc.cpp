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

// Function: entry_001362bc
// Address: 0x1362bc - 0x1362cc
void entry_001362bc_0x1362bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001362bc_0x1362bc");
#endif

    ctx->pc = 0x1362bcu;

    // 0x1362bc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1362BCu;
    {
        const bool branch_taken_0x1362bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1362bc) {
            ctx->pc = 0x1362CCu;
            return;
        }
    }
    ctx->pc = 0x1362C4u;
    // 0x1362c4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1362c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1362c8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x1362c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1362ccu;
}
