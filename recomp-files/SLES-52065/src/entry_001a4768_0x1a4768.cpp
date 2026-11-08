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

// Function: entry_001a4768
// Address: 0x1a4768 - 0x1a477c
void entry_001a4768_0x1a4768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4768_0x1a4768");
#endif

    ctx->pc = 0x1a4768u;

    // 0x1a4768: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a476c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1a476cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a4770: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4770u;
    {
        const bool branch_taken_0x1a4770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4770) {
            ctx->pc = 0x1A477Cu;
            return;
        }
    }
    ctx->pc = 0x1A4778u;
    // 0x1a4778: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a4778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a477cu;
}
