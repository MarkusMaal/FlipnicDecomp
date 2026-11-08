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

// Function: entry_001ecb18
// Address: 0x1ecb18 - 0x1ecb48
void entry_001ecb18_0x1ecb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecb18_0x1ecb18");
#endif

    ctx->pc = 0x1ecb18u;

    // 0x1ecb18: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ecb18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ecb1c: 0x52480012  beql        $s2, $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1ECB1Cu;
    {
        const bool branch_taken_0x1ecb1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x1ecb1c) {
            ctx->pc = 0x1ECB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECB1Cu;
            // 0x1ecb20: 0x26b0c3d0  addiu       $s0, $s5, -0x3C30 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951888));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECB68u;
            return;
        }
    }
    ctx->pc = 0x1ECB24u;
    // 0x1ecb24: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ecb24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ecb28: 0x14470007  bne         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECB28u;
    {
        const bool branch_taken_0x1ecb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1ECB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB28u;
        // 0x1ecb2c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb28) {
            ctx->pc = 0x1ECB48u;
            return;
        }
    }
    ctx->pc = 0x1ECB30u;
    // 0x1ecb30: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1ecb30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ecb34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ecb34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ecb38: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1ecb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ecb3c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ECB3Cu;
    {
        const bool branch_taken_0x1ecb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB3Cu;
        // 0x1ecb40: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb3c) {
            ctx->pc = 0x1ECB64u;
            return;
        }
    }
    ctx->pc = 0x1ECB44u;
    // 0x1ecb44: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1ecb44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1ecb48u;
}
