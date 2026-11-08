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

// Function: entry_0017a56c
// Address: 0x17a56c - 0x17a584
void entry_0017a56c_0x17a56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a56c_0x17a56c");
#endif

    ctx->pc = 0x17a56cu;

    // 0x17a56c: 0x0  nop
    ctx->pc = 0x17a56cu;
    // NOP
    // 0x17a570: 0x84c601e8  lh          $a2, 0x1E8($a2)
    ctx->pc = 0x17a570u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 488)));
    // 0x17a574: 0x14c70003  bne         $a2, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A574u;
    {
        const bool branch_taken_0x17a574 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x17a574) {
            ctx->pc = 0x17A584u;
            return;
        }
    }
    ctx->pc = 0x17A57Cu;
    // 0x17a57c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A57Cu;
    {
        const bool branch_taken_0x17a57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a57c) {
            ctx->pc = 0x17A588u;
            return;
        }
    }
    ctx->pc = 0x17A584u;
}
