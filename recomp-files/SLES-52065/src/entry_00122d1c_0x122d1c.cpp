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

// Function: entry_00122d1c
// Address: 0x122d1c - 0x122d44
void entry_00122d1c_0x122d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122d1c_0x122d1c");
#endif

    ctx->pc = 0x122d1cu;

    // 0x122d1c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x122d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x122d20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x122d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x122d24: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x122D24u;
    {
        const bool branch_taken_0x122d24 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D24u;
        // 0x122d28: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d24) {
            ctx->pc = 0x122D60u;
            return;
        }
    }
    ctx->pc = 0x122D2Cu;
    // 0x122d2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x122d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122d30: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x122d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x122d34: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x122d34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x122d38: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x122D38u;
    {
        const bool branch_taken_0x122d38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D38u;
        // 0x122d3c: 0x27a2007c  addiu       $v0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d38) {
            ctx->pc = 0x122D44u;
            return;
        }
    }
    ctx->pc = 0x122D40u;
    // 0x122d40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x122d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x122d44u;
}
