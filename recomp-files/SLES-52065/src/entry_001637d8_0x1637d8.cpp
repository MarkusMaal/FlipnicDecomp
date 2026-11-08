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

// Function: entry_001637d8
// Address: 0x1637d8 - 0x163804
void entry_001637d8_0x1637d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001637d8_0x1637d8");
#endif

    ctx->pc = 0x1637d8u;

    // 0x1637d8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1637D8u;
    {
        const bool branch_taken_0x1637d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1637d8) {
            ctx->pc = 0x163804u;
            return;
        }
    }
    ctx->pc = 0x1637E0u;
    // 0x1637e0: 0x862203c4  lh          $v0, 0x3C4($s1)
    ctx->pc = 0x1637e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 964)));
    // 0x1637e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1637E4u;
    {
        const bool branch_taken_0x1637e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1637e4) {
            ctx->pc = 0x163804u;
            return;
        }
    }
    ctx->pc = 0x1637ECu;
    // 0x1637ec: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x1637ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x1637f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1637f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1637f4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1637F4u;
    {
        const bool branch_taken_0x1637f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1637f4) {
            ctx->pc = 0x163804u;
            return;
        }
    }
    ctx->pc = 0x1637FCu;
    // 0x1637fc: 0xa62203c6  sh          $v0, 0x3C6($s1)
    ctx->pc = 0x1637fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 2));
    // 0x163800: 0xae2003c0  sw          $zero, 0x3C0($s1)
    ctx->pc = 0x163800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 960), GPR_U32(ctx, 0));
    ctx->pc = 0x163804u;
}
