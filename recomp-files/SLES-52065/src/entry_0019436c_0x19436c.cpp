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

// Function: entry_0019436c
// Address: 0x19436c - 0x194398
void entry_0019436c_0x19436c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019436c_0x19436c");
#endif

    ctx->pc = 0x19436cu;

    // 0x19436c: 0x0  nop
    ctx->pc = 0x19436cu;
    // NOP
    // 0x194370: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x194370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x194374: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x194374u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x194378: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x194378u;
    {
        const bool branch_taken_0x194378 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194378u;
        // 0x19437c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194378) {
            ctx->pc = 0x1943A0u;
            return;
        }
    }
    ctx->pc = 0x194380u;
    // 0x194380: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x194380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x194384: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x194384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x194388: 0x14c0ffb2  bnez        $a2, . + 4 + (-0x4E << 2)
    ctx->pc = 0x194388u;
    {
        const bool branch_taken_0x194388 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x194388) {
            ctx->pc = 0x194254u;
            return;
        }
    }
    ctx->pc = 0x194390u;
    // 0x194390: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x194390u;
    {
        const bool branch_taken_0x194390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194390) {
            ctx->pc = 0x1943A0u;
            return;
        }
    }
    ctx->pc = 0x194398u;
}
