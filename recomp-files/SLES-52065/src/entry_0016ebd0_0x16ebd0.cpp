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

// Function: entry_0016ebd0
// Address: 0x16ebd0 - 0x16ebe0
void entry_0016ebd0_0x16ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ebd0_0x16ebd0");
#endif

    ctx->pc = 0x16ebd0u;

    // 0x16ebd0: 0x86020214  lh          $v0, 0x214($s0)
    ctx->pc = 0x16ebd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x16ebd4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x16ebd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16ebd8: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x16EBD8u;
    {
        const bool branch_taken_0x16ebd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ebd8) {
            ctx->pc = 0x16EB24u;
            return;
        }
    }
    ctx->pc = 0x16EBE0u;
}
