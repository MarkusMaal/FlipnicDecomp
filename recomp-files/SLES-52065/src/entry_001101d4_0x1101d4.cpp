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

// Function: entry_001101d4
// Address: 0x1101d4 - 0x1101f4
void entry_001101d4_0x1101d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001101d4_0x1101d4");
#endif

    ctx->pc = 0x1101d4u;

    // 0x1101d4: 0x0  nop
    ctx->pc = 0x1101d4u;
    // NOP
    // 0x1101d8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1101d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1101dc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1101dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1101e0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1101E0u;
    {
        const bool branch_taken_0x1101e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1101E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101E0u;
        // 0x1101e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101e0) {
            ctx->pc = 0x1101A4u;
            return;
        }
    }
    ctx->pc = 0x1101E8u;
    // 0x1101e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1101e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1101ECu;
    {
        const bool branch_taken_0x1101ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101ECu;
        // 0x1101f0: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101ec) {
            ctx->pc = 0x110238u;
            return;
        }
    }
    ctx->pc = 0x1101F4u;
}
