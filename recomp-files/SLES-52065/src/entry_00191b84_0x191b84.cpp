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

// Function: entry_00191b84
// Address: 0x191b84 - 0x191bb8
void entry_00191b84_0x191b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191b84_0x191b84");
#endif

    ctx->pc = 0x191b84u;

    // 0x191b84: 0x0  nop
    ctx->pc = 0x191b84u;
    // NOP
    // 0x191b88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x191b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x191b8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x191b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x191b90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191b94: 0x104501e3  beq         $v0, $a1, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x191B94u;
    {
        const bool branch_taken_0x191b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x191b94) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191B9Cu;
    // 0x191b9c: 0x8cc72c10  lw          $a3, 0x2C10($a2)
    ctx->pc = 0x191b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11280)));
    // 0x191ba0: 0x14470005  bne         $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x191BA0u;
    {
        const bool branch_taken_0x191ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x191ba0) {
            ctx->pc = 0x191BB8u;
            return;
        }
    }
    ctx->pc = 0x191BA8u;
    // 0x191ba8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191bac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191bb0: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x191BB0u;
    {
        const bool branch_taken_0x191bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BB0u;
        // 0x191bb4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bb0) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191BB8u;
}
