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

// Function: entry_00176c84
// Address: 0x176c84 - 0x176cbc
void entry_00176c84_0x176c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176c84_0x176c84");
#endif

    ctx->pc = 0x176c84u;

    // 0x176c84: 0x8e030c20  lw          $v1, 0xC20($s0)
    ctx->pc = 0x176c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3104)));
    // 0x176c88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x176c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176c8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x176c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176c90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x176c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176c98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176c9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x176c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x176ca0: 0xac450040  sw          $a1, 0x40($v0)
    ctx->pc = 0x176ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 5));
    // 0x176ca4: 0x8e020c20  lw          $v0, 0xC20($s0)
    ctx->pc = 0x176ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3104)));
    // 0x176ca8: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x176ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176cac: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x176cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x176cb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x176cb4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x176CB4u;
    {
        const bool branch_taken_0x176cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CB4u;
        // 0x176cb8: 0x29100  sll         $s2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176cb4) {
            ctx->pc = 0x176D3Cu;
            return;
        }
    }
    ctx->pc = 0x176CBCu;
}
