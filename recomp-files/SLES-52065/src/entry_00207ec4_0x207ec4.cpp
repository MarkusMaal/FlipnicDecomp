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

// Function: entry_00207ec4
// Address: 0x207ec4 - 0x207ed0
void entry_00207ec4_0x207ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207ec4_0x207ec4");
#endif

    ctx->pc = 0x207ec4u;

    // 0x207ec4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x207EC4u;
    {
        const bool branch_taken_0x207ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ec4) {
            ctx->pc = 0x207F18u;
            return;
        }
    }
    ctx->pc = 0x207ECCu;
    // 0x207ecc: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x207eccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    ctx->pc = 0x207ed0u;
}
