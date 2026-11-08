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

// Function: entry_0010a3d0
// Address: 0x10a3d0 - 0x10a3e0
void entry_0010a3d0_0x10a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a3d0_0x10a3d0");
#endif

    ctx->pc = 0x10a3d0u;

    // 0x10a3d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10a3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10a3d4: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x10a3d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x10a3d8: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x10A3D8u;
    {
        const bool branch_taken_0x10a3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a3d8) {
            ctx->pc = 0x10A2A8u;
            return;
        }
    }
    ctx->pc = 0x10A3E0u;
}
