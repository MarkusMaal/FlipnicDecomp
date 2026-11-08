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

// Function: entry_00140588
// Address: 0x140588 - 0x140598
void entry_00140588_0x140588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140588_0x140588");
#endif

    ctx->pc = 0x140588u;

    // 0x140588: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x140588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14058c: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x14058Cu;
    {
        const bool branch_taken_0x14058c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x14058c) {
            ctx->pc = 0x140598u;
            return;
        }
    }
    ctx->pc = 0x140594u;
    // 0x140594: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x140594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x140598u;
}
