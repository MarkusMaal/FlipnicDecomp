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

// Function: entry_00136434
// Address: 0x136434 - 0x136444
void entry_00136434_0x136434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136434_0x136434");
#endif

    ctx->pc = 0x136434u;

    // 0x136434: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136434u;
    {
        const bool branch_taken_0x136434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x136434) {
            ctx->pc = 0x136444u;
            return;
        }
    }
    ctx->pc = 0x13643Cu;
    // 0x13643c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x13643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x136440: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x136440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x136444u;
}
