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

// Function: entry_0018ab24
// Address: 0x18ab24 - 0x18ab2c
void entry_0018ab24_0x18ab24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ab24_0x18ab24");
#endif

    ctx->pc = 0x18ab24u;

    // 0x18ab24: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x18AB24u;
    {
        const bool branch_taken_0x18ab24 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ab24) {
            ctx->pc = 0x18AB48u;
            return;
        }
    }
    ctx->pc = 0x18AB2Cu;
}
