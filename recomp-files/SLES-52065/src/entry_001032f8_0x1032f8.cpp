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

// Function: entry_001032f8
// Address: 0x1032f8 - 0x103308
void entry_001032f8_0x1032f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001032f8_0x1032f8");
#endif

    ctx->pc = 0x1032f8u;

    // 0x1032f8: 0x25e102a  slt         $v0, $s2, $fp
    ctx->pc = 0x1032f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1032fc: 0x1440fe91  bnez        $v0, . + 4 + (-0x16F << 2)
    ctx->pc = 0x1032FCu;
    {
        const bool branch_taken_0x1032fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1032fc) {
            ctx->pc = 0x102D44u;
            return;
        }
    }
    ctx->pc = 0x103304u;
    // 0x103304: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x103304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x103308u;
}
