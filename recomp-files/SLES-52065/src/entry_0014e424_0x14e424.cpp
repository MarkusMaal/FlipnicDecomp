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

// Function: entry_0014e424
// Address: 0x14e424 - 0x14e430
void entry_0014e424_0x14e424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e424_0x14e424");
#endif

    ctx->pc = 0x14e424u;

    // 0x14e424: 0x0  nop
    ctx->pc = 0x14e424u;
    // NOP
    // 0x14e428: 0x126000d0  beqz        $s3, . + 4 + (0xD0 << 2)
    ctx->pc = 0x14E428u;
    {
        const bool branch_taken_0x14e428 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e428) {
            ctx->pc = 0x14E76Cu;
            return;
        }
    }
    ctx->pc = 0x14E430u;
}
