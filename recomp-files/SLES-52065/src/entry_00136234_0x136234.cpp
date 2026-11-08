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

// Function: entry_00136234
// Address: 0x136234 - 0x136244
void entry_00136234_0x136234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136234_0x136234");
#endif

    ctx->pc = 0x136234u;

    // 0x136234: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x136234u;
    {
        const bool branch_taken_0x136234 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x136234) {
            ctx->pc = 0x136244u;
            return;
        }
    }
    ctx->pc = 0x13623Cu;
    // 0x13623c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x13623cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x136240: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x136240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x136244u;
}
