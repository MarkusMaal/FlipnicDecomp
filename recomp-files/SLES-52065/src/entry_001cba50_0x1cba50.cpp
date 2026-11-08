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

// Function: entry_001cba50
// Address: 0x1cba50 - 0x1cba6c
void entry_001cba50_0x1cba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cba50_0x1cba50");
#endif

    ctx->pc = 0x1cba50u;

    // 0x1cba50: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1cba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1cba54: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cba58: 0x9042275c  lbu         $v0, 0x275C($v0)
    ctx->pc = 0x1cba58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10076)));
    // 0x1cba5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1cba5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1cba60: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBA60u;
    {
        const bool branch_taken_0x1cba60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA60u;
        // 0x1cba64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba60) {
            ctx->pc = 0x1CBA6Cu;
            return;
        }
    }
    ctx->pc = 0x1CBA68u;
    // 0x1cba68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1cba6cu;
}
