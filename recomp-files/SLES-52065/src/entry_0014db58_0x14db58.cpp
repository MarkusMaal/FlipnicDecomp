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

// Function: entry_0014db58
// Address: 0x14db58 - 0x14db60
void entry_0014db58_0x14db58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014db58_0x14db58");
#endif

    ctx->pc = 0x14db58u;

    // 0x14db58: 0x12600079  beqz        $s3, . + 4 + (0x79 << 2)
    ctx->pc = 0x14DB58u;
    {
        const bool branch_taken_0x14db58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db58) {
            ctx->pc = 0x14DD40u;
            return;
        }
    }
    ctx->pc = 0x14DB60u;
}
