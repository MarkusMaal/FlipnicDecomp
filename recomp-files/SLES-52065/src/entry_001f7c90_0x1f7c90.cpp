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

// Function: entry_001f7c90
// Address: 0x1f7c90 - 0x1f7ccc
void entry_001f7c90_0x1f7c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7c90_0x1f7c90");
#endif

    ctx->pc = 0x1f7c90u;

    // 0x1f7c90: 0x24a200ff  addiu       $v0, $a1, 0xFF
    ctx->pc = 0x1f7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x1f7c94: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x1f7c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f7c98: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1f7c98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1f7c9c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1f7c9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1f7ca0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1f7ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7ca4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7CA4u;
    {
        const bool branch_taken_0x1f7ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7ca4) {
            ctx->pc = 0x1F7CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7CA4u;
            // 0x1f7ca8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7CCCu;
            return;
        }
    }
    ctx->pc = 0x1F7CACu;
    // 0x1f7cac: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1f7cacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f7cb0: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x1f7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x1f7cb4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1f7cb4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1f7cb8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1f7cb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1f7cbc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1f7cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7cc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7CC0u;
    {
        const bool branch_taken_0x1f7cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CC0u;
        // 0x1f7cc4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cc0) {
            ctx->pc = 0x1F7CD0u;
            return;
        }
    }
    ctx->pc = 0x1F7CC8u;
    // 0x1f7cc8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1f7cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1f7cccu;
}
