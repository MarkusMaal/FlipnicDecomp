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

// Function: entry_00208c24
// Address: 0x208c24 - 0x208c48
void entry_00208c24_0x208c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208c24_0x208c24");
#endif

    ctx->pc = 0x208c24u;

    // 0x208c24: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x208c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x208c28: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x208c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x208c2c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x208c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x208c30: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x208c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x208c34: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x208c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x208c38: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x208C38u;
    {
        const bool branch_taken_0x208c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C38u;
        // 0x208c3c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c38) {
            ctx->pc = 0x208C84u;
            return;
        }
    }
    ctx->pc = 0x208C40u;
    // 0x208c40: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x208c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x208c44: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x208c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    ctx->pc = 0x208c48u;
}
