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

// Function: entry_0011d0bc
// Address: 0x11d0bc - 0x11d0d0
void entry_0011d0bc_0x11d0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d0bc_0x11d0bc");
#endif

    ctx->pc = 0x11d0bcu;

    // 0x11d0bc: 0x0  nop
    ctx->pc = 0x11d0bcu;
    // NOP
    // 0x11d0c0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D0C0u;
    {
        const bool branch_taken_0x11d0c0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x11d0c0) {
            ctx->pc = 0x11D0D0u;
            return;
        }
    }
    ctx->pc = 0x11D0C8u;
    // 0x11d0c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x11d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11d0cc: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x11d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x11d0d0u;
}
