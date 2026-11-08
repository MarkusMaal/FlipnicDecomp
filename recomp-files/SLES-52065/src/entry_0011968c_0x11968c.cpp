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

// Function: entry_0011968c
// Address: 0x11968c - 0x1196b4
void entry_0011968c_0x11968c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011968c_0x11968c");
#endif

    ctx->pc = 0x11968cu;

    // 0x11968c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x11968cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119694: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x119694u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x119698: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x119698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11969c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x11969cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1196a0: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x1196a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1196a4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1196a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1196a8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1196A8u;
    {
        const bool branch_taken_0x1196a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1196a8) {
            ctx->pc = 0x1196B4u;
            return;
        }
    }
    ctx->pc = 0x1196B0u;
    // 0x1196b0: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1196b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1196b4u;
}
