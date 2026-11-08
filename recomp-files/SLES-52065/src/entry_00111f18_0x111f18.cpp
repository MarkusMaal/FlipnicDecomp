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

// Function: entry_00111f18
// Address: 0x111f18 - 0x111f30
void entry_00111f18_0x111f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111f18_0x111f18");
#endif

    ctx->pc = 0x111f18u;

    // 0x111f18: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x111f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x111f1c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x111f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111f20: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x111F20u;
    {
        const bool branch_taken_0x111f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F20u;
        // 0x111f24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f20) {
            ctx->pc = 0x111EE8u;
            return;
        }
    }
    ctx->pc = 0x111F28u;
    // 0x111f28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x111F28u;
    {
        const bool branch_taken_0x111f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F28u;
        // 0x111f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f28) {
            ctx->pc = 0x111F88u;
            return;
        }
    }
    ctx->pc = 0x111F30u;
}
