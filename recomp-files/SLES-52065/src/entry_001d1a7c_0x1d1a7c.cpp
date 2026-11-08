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

// Function: entry_001d1a7c
// Address: 0x1d1a7c - 0x1d1aa4
void entry_001d1a7c_0x1d1a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1a7c_0x1d1a7c");
#endif

    ctx->pc = 0x1d1a7cu;

    // 0x1d1a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1a80: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1d1a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1d1a84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1a88: 0xa20201e0  sb          $v0, 0x1E0($s0)
    ctx->pc = 0x1d1a88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 480), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d1a8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d1a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d1a90: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x1d1a90u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1d1a94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1a98: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1a9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1A9Cu;
    {
        const bool branch_taken_0x1d1a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A9Cu;
        // 0x1d1aa0: 0xac640020  sw          $a0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a9c) {
            ctx->pc = 0x1D1ABCu;
            return;
        }
    }
    ctx->pc = 0x1D1AA4u;
}
