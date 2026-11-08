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

// Function: entry_0011cd98
// Address: 0x11cd98 - 0x11cda8
void entry_0011cd98_0x11cd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cd98_0x11cd98");
#endif

    ctx->pc = 0x11cd98u;

    // 0x11cd98: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CD98u;
    {
        const bool branch_taken_0x11cd98 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x11cd98) {
            ctx->pc = 0x11CDA8u;
            return;
        }
    }
    ctx->pc = 0x11CDA0u;
    // 0x11cda0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x11cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11cda4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x11cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x11cda8u;
}
