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

// Function: entry_00164a48
// Address: 0x164a48 - 0x164a74
void entry_00164a48_0x164a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164a48_0x164a48");
#endif

    ctx->pc = 0x164a48u;

    // 0x164a48: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x164A48u;
    {
        const bool branch_taken_0x164a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a48) {
            ctx->pc = 0x164A74u;
            return;
        }
    }
    ctx->pc = 0x164A50u;
    // 0x164a50: 0x862203c4  lh          $v0, 0x3C4($s1)
    ctx->pc = 0x164a50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 964)));
    // 0x164a54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164A54u;
    {
        const bool branch_taken_0x164a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a54) {
            ctx->pc = 0x164A74u;
            return;
        }
    }
    ctx->pc = 0x164A5Cu;
    // 0x164a5c: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x164a5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x164a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164a64: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164A64u;
    {
        const bool branch_taken_0x164a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164a64) {
            ctx->pc = 0x164A74u;
            return;
        }
    }
    ctx->pc = 0x164A6Cu;
    // 0x164a6c: 0xa62203c6  sh          $v0, 0x3C6($s1)
    ctx->pc = 0x164a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a70: 0xae2003c0  sw          $zero, 0x3C0($s1)
    ctx->pc = 0x164a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 960), GPR_U32(ctx, 0));
    ctx->pc = 0x164a74u;
}
