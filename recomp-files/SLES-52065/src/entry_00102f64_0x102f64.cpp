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

// Function: entry_00102f64
// Address: 0x102f64 - 0x102f74
void entry_00102f64_0x102f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f64_0x102f64");
#endif

    ctx->pc = 0x102f64u;

    // 0x102f64: 0x0  nop
    ctx->pc = 0x102f64u;
    // NOP
    // 0x102f68: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x102F68u;
    {
        const bool branch_taken_0x102f68 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x102f68) {
            ctx->pc = 0x102F74u;
            return;
        }
    }
    ctx->pc = 0x102F70u;
    // 0x102f70: 0xa682002c  sh          $v0, 0x2C($s4)
    ctx->pc = 0x102f70u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 44), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x102f74u;
}
