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

// Function: entry_0010babc
// Address: 0x10babc - 0x10bacc
void entry_0010babc_0x10babc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010babc_0x10babc");
#endif

    ctx->pc = 0x10babcu;

    // 0x10babc: 0x0  nop
    ctx->pc = 0x10babcu;
    // NOP
    // 0x10bac0: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x10bac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x10bac4: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x10BAC4u;
    {
        const bool branch_taken_0x10bac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bac4) {
            ctx->pc = 0x10B9E0u;
            return;
        }
    }
    ctx->pc = 0x10BACCu;
}
