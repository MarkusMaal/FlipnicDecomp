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

// Function: entry_001d4f40
// Address: 0x1d4f40 - 0x1d4f5c
void entry_001d4f40_0x1d4f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4f40_0x1d4f40");
#endif

    ctx->pc = 0x1d4f40u;

    // 0x1d4f40: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d4f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d4f44: 0x28430018  slti        $v1, $v0, 0x18
    ctx->pc = 0x1d4f44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d4f48: 0x2446ffe8  addiu       $a2, $v0, -0x18
    ctx->pc = 0x1d4f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1d4f4c: 0x522804  sllv        $a1, $s2, $v0
    ctx->pc = 0x1d4f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4f50: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4F50u;
    {
        const bool branch_taken_0x1d4f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F50u;
        // 0x1d4f54: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f50) {
            ctx->pc = 0x1D4F5Cu;
            return;
        }
    }
    ctx->pc = 0x1D4F58u;
    // 0x1d4f58: 0xd22804  sllv        $a1, $s2, $a2
    ctx->pc = 0x1d4f58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 6) & 0x1F));
    ctx->pc = 0x1d4f5cu;
}
