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

// Function: entry_00118550
// Address: 0x118550 - 0x118560
void entry_00118550_0x118550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118550_0x118550");
#endif

    ctx->pc = 0x118550u;

    // 0x118550: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x118550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x118554: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x118554u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x118558: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x118558u;
    {
        const bool branch_taken_0x118558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x118558) {
            ctx->pc = 0x1184ACu;
            return;
        }
    }
    ctx->pc = 0x118560u;
}
