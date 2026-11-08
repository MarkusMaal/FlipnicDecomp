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

// Function: entry_001a57a0
// Address: 0x1a57a0 - 0x1a57b8
void entry_001a57a0_0x1a57a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a57a0_0x1a57a0");
#endif

    ctx->pc = 0x1a57a0u;

    // 0x1a57a0: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x1a57a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1a57a4: 0x24690760  addiu       $t1, $v1, 0x760
    ctx->pc = 0x1a57a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1888));
    // 0x1a57a8: 0x8c630760  lw          $v1, 0x760($v1)
    ctx->pc = 0x1a57a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1888)));
    // 0x1a57ac: 0x14680002  bne         $v1, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A57ACu;
    {
        const bool branch_taken_0x1a57ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1a57ac) {
            ctx->pc = 0x1A57B8u;
            return;
        }
    }
    ctx->pc = 0x1A57B4u;
    // 0x1a57b4: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1a57b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1a57b8u;
}
