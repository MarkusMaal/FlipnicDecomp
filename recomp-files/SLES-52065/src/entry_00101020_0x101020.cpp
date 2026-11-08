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

// Function: entry_00101020
// Address: 0x101020 - 0x101030
void entry_00101020_0x101020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101020_0x101020");
#endif

    ctx->pc = 0x101020u;

    // 0x101020: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x101020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x101024: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x101024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x101028: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x101028u;
    {
        const bool branch_taken_0x101028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101028) {
            ctx->pc = 0x100FA8u;
            return;
        }
    }
    ctx->pc = 0x101030u;
}
