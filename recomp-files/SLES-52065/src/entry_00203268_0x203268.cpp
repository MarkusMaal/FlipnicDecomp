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

// Function: entry_00203268
// Address: 0x203268 - 0x20327c
void entry_00203268_0x203268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203268_0x203268");
#endif

    ctx->pc = 0x203268u;

    // 0x203268: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x203268u;
    {
        const bool branch_taken_0x203268 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x20326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203268u;
        // 0x20326c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203268) {
            ctx->pc = 0x20327Cu;
            return;
        }
    }
    ctx->pc = 0x203270u;
    // 0x203270: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x203270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x203274: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x203274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x203278: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x203278u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    ctx->pc = 0x20327cu;
}
