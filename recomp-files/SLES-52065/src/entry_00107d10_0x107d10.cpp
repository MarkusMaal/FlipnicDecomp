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

// Function: entry_00107d10
// Address: 0x107d10 - 0x107d44
void entry_00107d10_0x107d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107d10_0x107d10");
#endif

    ctx->pc = 0x107d10u;

    // 0x107d10: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x107d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x107d14: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x107d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x107d18: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x107d18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107d1c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x107D1Cu;
    {
        const bool branch_taken_0x107d1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D1Cu;
        // 0x107d20: 0x24a6000c  addiu       $a2, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d1c) {
            ctx->pc = 0x107D44u;
            return;
        }
    }
    ctx->pc = 0x107D24u;
    // 0x107d24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x107d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x107d28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x107d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x107d2c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x107d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x107d30: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x107d30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x107d34: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x107d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107d38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x107d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x107d3c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x107D3Cu;
    {
        const bool branch_taken_0x107d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D3Cu;
        // 0x107d40: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d3c) {
            ctx->pc = 0x107DA4u;
            return;
        }
    }
    ctx->pc = 0x107D44u;
}
