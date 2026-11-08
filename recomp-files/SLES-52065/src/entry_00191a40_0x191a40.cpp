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

// Function: entry_00191a40
// Address: 0x191a40 - 0x191a74
void entry_00191a40_0x191a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191a40_0x191a40");
#endif

    ctx->pc = 0x191a40u;

    // 0x191a40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x191a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x191a44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x191a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x191a48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191a4c: 0x10450235  beq         $v0, $a1, . + 4 + (0x235 << 2)
    ctx->pc = 0x191A4Cu;
    {
        const bool branch_taken_0x191a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x191a4c) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191A54u;
    // 0x191a54: 0x8cc72c10  lw          $a3, 0x2C10($a2)
    ctx->pc = 0x191a54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11280)));
    // 0x191a58: 0x14470006  bne         $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x191A58u;
    {
        const bool branch_taken_0x191a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x191a58) {
            ctx->pc = 0x191A74u;
            return;
        }
    }
    ctx->pc = 0x191A60u;
    // 0x191a60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191a68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191a6c: 0x1000022d  b           . + 4 + (0x22D << 2)
    ctx->pc = 0x191A6Cu;
    {
        const bool branch_taken_0x191a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A6Cu;
        // 0x191a70: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a6c) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191A74u;
}
