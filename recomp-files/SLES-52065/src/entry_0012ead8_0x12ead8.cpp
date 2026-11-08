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

// Function: entry_0012ead8
// Address: 0x12ead8 - 0x12eae4
void entry_0012ead8_0x12ead8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ead8_0x12ead8");
#endif

    ctx->pc = 0x12ead8u;

    // 0x12ead8: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x12ead8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12eadc: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x12EADCu;
    {
        const bool branch_taken_0x12eadc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eadc) {
            ctx->pc = 0x12EB4Cu;
            return;
        }
    }
    ctx->pc = 0x12EAE4u;
}
