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

// Function: entry_00127a40
// Address: 0x127a40 - 0x127a50
void entry_00127a40_0x127a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127a40_0x127a40");
#endif

    ctx->pc = 0x127a40u;

    // 0x127a40: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x127a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x127a44: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x127a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x127a48: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x127A48u;
    {
        const bool branch_taken_0x127a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127a48) {
            ctx->pc = 0x1279B8u;
            return;
        }
    }
    ctx->pc = 0x127A50u;
}
