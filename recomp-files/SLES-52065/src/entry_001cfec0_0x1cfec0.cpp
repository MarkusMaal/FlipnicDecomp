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

// Function: entry_001cfec0
// Address: 0x1cfec0 - 0x1cfee8
void entry_001cfec0_0x1cfec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfec0_0x1cfec0");
#endif

    ctx->pc = 0x1cfec0u;

    // 0x1cfec0: 0x92630060  lbu         $v1, 0x60($s3)
    ctx->pc = 0x1cfec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1cfec4: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1CFEC4u;
    {
        const bool branch_taken_0x1cfec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfec4) {
            ctx->pc = 0x1CFFD0u;
            return;
        }
    }
    ctx->pc = 0x1CFECCu;
    // 0x1cfecc: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1cfeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1cfed0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1cfed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1cfed4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFED4u;
    {
        const bool branch_taken_0x1cfed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFED4u;
        // 0x1cfed8: 0x26420034  addiu       $v0, $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfed4) {
            ctx->pc = 0x1CFEE8u;
            return;
        }
    }
    ctx->pc = 0x1CFEDCu;
    // 0x1cfedc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFEDCu;
    {
        const bool branch_taken_0x1cfedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEDCu;
        // 0x1cfee0: 0x27a2005c  addiu       $v0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfedc) {
            ctx->pc = 0x1CFEE8u;
            return;
        }
    }
    ctx->pc = 0x1CFEE4u;
    // 0x1cfee4: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x1cfee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    ctx->pc = 0x1cfee8u;
}
