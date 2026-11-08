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

// Function: entry_00101e50
// Address: 0x101e50 - 0x101e60
void entry_00101e50_0x101e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101e50_0x101e50");
#endif

    ctx->pc = 0x101e50u;

    // 0x101e50: 0x29430004  slti        $v1, $t2, 0x4
    ctx->pc = 0x101e50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x101e54: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x101E54u;
    {
        const bool branch_taken_0x101e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x101e54) {
            ctx->pc = 0x101E00u;
            return;
        }
    }
    ctx->pc = 0x101E5Cu;
    // 0x101e5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x101e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x101e60u;
}
