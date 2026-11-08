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

// Function: entry_0011972c
// Address: 0x11972c - 0x119754
void entry_0011972c_0x11972c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011972c_0x11972c");
#endif

    ctx->pc = 0x11972cu;

    // 0x11972c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x11972cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x119730: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119734: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x119734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x119738: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x119738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11973c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x11973cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x119740: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x119740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x119744: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x119744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x119748: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119748u;
    {
        const bool branch_taken_0x119748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119748) {
            ctx->pc = 0x119754u;
            return;
        }
    }
    ctx->pc = 0x119750u;
    // 0x119750: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x119750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x119754u;
}
