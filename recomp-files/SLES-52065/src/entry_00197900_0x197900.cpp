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

// Function: entry_00197900
// Address: 0x197900 - 0x197910
void entry_00197900_0x197900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197900_0x197900");
#endif

    ctx->pc = 0x197900u;

    // 0x197900: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x197900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x197904: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x197904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197908: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x197908u;
    {
        const bool branch_taken_0x197908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x197908) {
            ctx->pc = 0x1977F4u;
            return;
        }
    }
    ctx->pc = 0x197910u;
}
