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

// Function: entry_0011090c
// Address: 0x11090c - 0x110924
void entry_0011090c_0x11090c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011090c_0x11090c");
#endif

    ctx->pc = 0x11090cu;

    // 0x11090c: 0x0  nop
    ctx->pc = 0x11090cu;
    // NOP
    // 0x110910: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x110914: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x110914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110918: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x110918u;
    {
        const bool branch_taken_0x110918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110918) {
            ctx->pc = 0x1108E4u;
            return;
        }
    }
    ctx->pc = 0x110920u;
    // 0x110920: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x110920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x110924u;
}
