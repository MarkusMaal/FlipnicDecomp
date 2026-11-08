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

// Function: entry_001e7884
// Address: 0x1e7884 - 0x1e7890
void entry_001e7884_0x1e7884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7884_0x1e7884");
#endif

    ctx->pc = 0x1e7884u;

    // 0x1e7884: 0x19000016  blez        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E7884u;
    {
        const bool branch_taken_0x1e7884 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x1e7884) {
            ctx->pc = 0x1E78E0u;
            return;
        }
    }
    ctx->pc = 0x1E788Cu;
    // 0x1e788c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e788cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e7890u;
}
