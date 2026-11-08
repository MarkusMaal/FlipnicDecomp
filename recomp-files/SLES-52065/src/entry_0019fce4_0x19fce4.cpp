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

// Function: entry_0019fce4
// Address: 0x19fce4 - 0x19fcfc
void entry_0019fce4_0x19fce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fce4_0x19fce4");
#endif

    ctx->pc = 0x19fce4u;

    // 0x19fce4: 0x84e32828  lh          $v1, 0x2828($a3)
    ctx->pc = 0x19fce4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10280)));
    // 0x19fce8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x19fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19fcec: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19FCECu;
    {
        const bool branch_taken_0x19fcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fcec) {
            ctx->pc = 0x19FD0Cu;
            return;
        }
    }
    ctx->pc = 0x19FCF4u;
    // 0x19fcf4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19fcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x19fcf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x19fcfcu;
}
