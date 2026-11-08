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

// Function: entry_00141b04
// Address: 0x141b04 - 0x141b30
void entry_00141b04_0x141b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141b04_0x141b04");
#endif

    ctx->pc = 0x141b04u;

    // 0x141b04: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x141b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x141b08: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x141B08u;
    {
        const bool branch_taken_0x141b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b08) {
            ctx->pc = 0x141B94u;
            return;
        }
    }
    ctx->pc = 0x141B10u;
    // 0x141b10: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x141b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x141b14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x141b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x141b18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x141b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141b1c: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x141b1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x141b20: 0x1065001c  beq         $v1, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x141B20u;
    {
        const bool branch_taken_0x141b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x141b20) {
            ctx->pc = 0x141B94u;
            return;
        }
    }
    ctx->pc = 0x141B28u;
    // 0x141b28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x141B28u;
    {
        const bool branch_taken_0x141b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B28u;
        // 0x141b2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b28) {
            ctx->pc = 0x141B34u;
            return;
        }
    }
    ctx->pc = 0x141B30u;
}
