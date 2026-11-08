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

// Function: entry_001cd558
// Address: 0x1cd558 - 0x1cd57c
void entry_001cd558_0x1cd558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd558_0x1cd558");
#endif

    ctx->pc = 0x1cd558u;

    // 0x1cd558: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1cd558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1cd55c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1cd55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd560: 0x14450019  bne         $v0, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD560u;
    {
        const bool branch_taken_0x1cd560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1cd560) {
            ctx->pc = 0x1CD5C8u;
            return;
        }
    }
    ctx->pc = 0x1CD568u;
    // 0x1cd568: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cd568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cd56c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD56Cu;
    {
        const bool branch_taken_0x1cd56c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1CD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD56Cu;
        // 0x1cd570: 0x28a2000c  slti        $v0, $a1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd56c) {
            ctx->pc = 0x1CD57Cu;
            return;
        }
    }
    ctx->pc = 0x1CD574u;
    // 0x1cd574: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd578: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x1cd578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    ctx->pc = 0x1cd57cu;
}
