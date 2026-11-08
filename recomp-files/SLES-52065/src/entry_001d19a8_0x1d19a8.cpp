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

// Function: entry_001d19a8
// Address: 0x1d19a8 - 0x1d19cc
void entry_001d19a8_0x1d19a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d19a8_0x1d19a8");
#endif

    ctx->pc = 0x1d19a8u;

    // 0x1d19a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d19ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d19acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d19b0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1d19b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d19b4: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1d19b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1d19b8: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x1d19b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1d19bc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D19BCu;
    {
        const bool branch_taken_0x1d19bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19BCu;
        // 0x1d19c0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19bc) {
            ctx->pc = 0x1D19CCu;
            return;
        }
    }
    ctx->pc = 0x1D19C4u;
    // 0x1d19c4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D19C4u;
    {
        const bool branch_taken_0x1d19c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19C4u;
        // 0x1d19c8: 0xaca30020  sw          $v1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19c4) {
            ctx->pc = 0x1D1A24u;
            return;
        }
    }
    ctx->pc = 0x1D19CCu;
}
