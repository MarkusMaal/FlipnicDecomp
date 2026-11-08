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

// Function: entry_0013157c
// Address: 0x13157c - 0x131598
void entry_0013157c_0x13157c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013157c_0x13157c");
#endif

    ctx->pc = 0x13157cu;

label_13157c:
    // 0x13157c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x13157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x131580: 0x0  nop
    ctx->pc = 0x131580u;
    // NOP
    // 0x131584: 0x0  nop
    ctx->pc = 0x131584u;
    // NOP
    // 0x131588: 0x0  nop
    ctx->pc = 0x131588u;
    // NOP
    // 0x13158c: 0x0  nop
    ctx->pc = 0x13158cu;
    // NOP
    // 0x131590: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x131590u;
    {
        const bool branch_taken_0x131590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131590) {
            ctx->pc = 0x13157Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13157c;
        }
    }
    ctx->pc = 0x131598u;
}
