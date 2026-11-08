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

// Function: entry_00101e40
// Address: 0x101e40 - 0x101e50
void entry_00101e40_0x101e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101e40_0x101e40");
#endif

    ctx->pc = 0x101e40u;

    // 0x101e40: 0x29630003  slti        $v1, $t3, 0x3
    ctx->pc = 0x101e40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x101e44: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x101E44u;
    {
        const bool branch_taken_0x101e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x101e44) {
            ctx->pc = 0x101E14u;
            return;
        }
    }
    ctx->pc = 0x101E4Cu;
    // 0x101e4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x101e4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    ctx->pc = 0x101e50u;
}
