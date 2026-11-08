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

// Function: entry_0016478c
// Address: 0x16478c - 0x1647b8
void entry_0016478c_0x16478c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016478c_0x16478c");
#endif

    ctx->pc = 0x16478cu;

    // 0x16478c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x16478Cu;
    {
        const bool branch_taken_0x16478c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16478c) {
            ctx->pc = 0x1647B8u;
            return;
        }
    }
    ctx->pc = 0x164794u;
    // 0x164794: 0x862203c4  lh          $v0, 0x3C4($s1)
    ctx->pc = 0x164794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 964)));
    // 0x164798: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164798u;
    {
        const bool branch_taken_0x164798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164798) {
            ctx->pc = 0x1647B8u;
            return;
        }
    }
    ctx->pc = 0x1647A0u;
    // 0x1647a0: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x1647a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x1647a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1647a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1647a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1647A8u;
    {
        const bool branch_taken_0x1647a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1647a8) {
            ctx->pc = 0x1647B8u;
            return;
        }
    }
    ctx->pc = 0x1647B0u;
    // 0x1647b0: 0xa62203c6  sh          $v0, 0x3C6($s1)
    ctx->pc = 0x1647b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 2));
    // 0x1647b4: 0xae2003c0  sw          $zero, 0x3C0($s1)
    ctx->pc = 0x1647b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 960), GPR_U32(ctx, 0));
    ctx->pc = 0x1647b8u;
}
