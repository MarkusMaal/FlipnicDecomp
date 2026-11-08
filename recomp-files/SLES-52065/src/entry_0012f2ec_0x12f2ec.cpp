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

// Function: entry_0012f2ec
// Address: 0x12f2ec - 0x12f318
void entry_0012f2ec_0x12f2ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f2ec_0x12f2ec");
#endif

    ctx->pc = 0x12f2ecu;

    // 0x12f2ec: 0x0  nop
    ctx->pc = 0x12f2ecu;
    // NOP
    // 0x12f2f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x12f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12f2f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12f2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12f2f8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x12f2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12f2fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F2FCu;
    {
        const bool branch_taken_0x12f2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f2fc) {
            ctx->pc = 0x12F318u;
            return;
        }
    }
    ctx->pc = 0x12F304u;
    // 0x12f304: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x12f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12f308: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12f308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12f30c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f310: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12F310u;
    {
        const bool branch_taken_0x12f310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F310u;
        // 0x12f314: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f310) {
            ctx->pc = 0x12F364u;
            return;
        }
    }
    ctx->pc = 0x12F318u;
}
