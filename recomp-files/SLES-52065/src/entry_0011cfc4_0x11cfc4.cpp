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

// Function: entry_0011cfc4
// Address: 0x11cfc4 - 0x11cfd8
void entry_0011cfc4_0x11cfc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cfc4_0x11cfc4");
#endif

    ctx->pc = 0x11cfc4u;

    // 0x11cfc4: 0x0  nop
    ctx->pc = 0x11cfc4u;
    // NOP
    // 0x11cfc8: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CFC8u;
    {
        const bool branch_taken_0x11cfc8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x11cfc8) {
            ctx->pc = 0x11CFD8u;
            return;
        }
    }
    ctx->pc = 0x11CFD0u;
    // 0x11cfd0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x11cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11cfd4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x11cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x11cfd8u;
}
