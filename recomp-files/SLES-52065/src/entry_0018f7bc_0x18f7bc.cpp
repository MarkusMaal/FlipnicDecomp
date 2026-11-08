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

// Function: entry_0018f7bc
// Address: 0x18f7bc - 0x18f7c8
void entry_0018f7bc_0x18f7bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f7bc_0x18f7bc");
#endif

    ctx->pc = 0x18f7bcu;

    // 0x18f7bc: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F7BCu;
    {
        const bool branch_taken_0x18f7bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f7bc) {
            ctx->pc = 0x18F7C8u;
            return;
        }
    }
    ctx->pc = 0x18F7C4u;
    // 0x18f7c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18f7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x18f7c8u;
}
