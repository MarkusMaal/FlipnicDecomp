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

// Function: entry_002034dc
// Address: 0x2034dc - 0x2034f8
void entry_002034dc_0x2034dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002034dc_0x2034dc");
#endif

    ctx->pc = 0x2034dcu;

    // 0x2034dc: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2034DCu;
    {
        const bool branch_taken_0x2034dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2034E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034DCu;
        // 0x2034e0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034dc) {
            ctx->pc = 0x2034F8u;
            return;
        }
    }
    ctx->pc = 0x2034E4u;
    // 0x2034e4: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x2034e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2034e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2034e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2034ec: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x2034ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x2034f0: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x2034f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x2034f4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2034f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2034f8u;
}
