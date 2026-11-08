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

// Function: entry_00143034
// Address: 0x143034 - 0x143054
void entry_00143034_0x143034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143034_0x143034");
#endif

    ctx->pc = 0x143034u;

    // 0x143034: 0x8ec30034  lw          $v1, 0x34($s6)
    ctx->pc = 0x143034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x143038: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x143038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x14303c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14303cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143040: 0x8c710014  lw          $s1, 0x14($v1)
    ctx->pc = 0x143040u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x143044: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x143044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x143048: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x143048u;
    {
        const bool branch_taken_0x143048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143048u;
        // 0x14304c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143048) {
            ctx->pc = 0x14309Cu;
            return;
        }
    }
    ctx->pc = 0x143050u;
    // 0x143050: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x143050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143054u;
}
