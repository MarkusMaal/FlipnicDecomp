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

// Function: entry_001422bc
// Address: 0x1422bc - 0x1422c8
void entry_001422bc_0x1422bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001422bc_0x1422bc");
#endif

    ctx->pc = 0x1422bcu;

    // 0x1422bc: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1422BCu;
    {
        const bool branch_taken_0x1422bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1422bc) {
            ctx->pc = 0x1422C8u;
            return;
        }
    }
    ctx->pc = 0x1422C4u;
    // 0x1422c4: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1422c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1422c8u;
}
