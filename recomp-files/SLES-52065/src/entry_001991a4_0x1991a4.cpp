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

// Function: entry_001991a4
// Address: 0x1991a4 - 0x1991d8
void entry_001991a4_0x1991a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001991a4_0x1991a4");
#endif

    ctx->pc = 0x1991a4u;

    // 0x1991a4: 0x0  nop
    ctx->pc = 0x1991a4u;
    // NOP
    // 0x1991a8: 0xae800674  sw          $zero, 0x674($s4)
    ctx->pc = 0x1991a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 0));
    // 0x1991ac: 0x8e820670  lw          $v0, 0x670($s4)
    ctx->pc = 0x1991acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1991b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1991b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1991b4: 0xae820670  sw          $v0, 0x670($s4)
    ctx->pc = 0x1991b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1648), GPR_U32(ctx, 2));
    // 0x1991b8: 0x8e830670  lw          $v1, 0x670($s4)
    ctx->pc = 0x1991b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1991bc: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1991bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1991c0: 0xac4328e8  sw          $v1, 0x28E8($v0)
    ctx->pc = 0x1991c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10472), GPR_U32(ctx, 3));
    // 0x1991c4: 0x8e820678  lw          $v0, 0x678($s4)
    ctx->pc = 0x1991c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x1991c8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1991C8u;
    {
        const bool branch_taken_0x1991c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1991c8) {
            ctx->pc = 0x1991D8u;
            return;
        }
    }
    ctx->pc = 0x1991D0u;
    // 0x1991d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1991d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1991d4: 0xae820678  sw          $v0, 0x678($s4)
    ctx->pc = 0x1991d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 2));
    ctx->pc = 0x1991d8u;
}
