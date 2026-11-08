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

// Function: entry_001454f4
// Address: 0x1454f4 - 0x145500
void entry_001454f4_0x1454f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001454f4_0x1454f4");
#endif

    ctx->pc = 0x1454f4u;

    // 0x1454f4: 0x0  nop
    ctx->pc = 0x1454f4u;
    // NOP
    // 0x1454f8: 0x1650fff4  bne         $s2, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1454F8u;
    {
        const bool branch_taken_0x1454f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x1454f8) {
            ctx->pc = 0x1454CCu;
            return;
        }
    }
    ctx->pc = 0x145500u;
}
