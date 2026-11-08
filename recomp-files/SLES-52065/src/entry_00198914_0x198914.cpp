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

// Function: entry_00198914
// Address: 0x198914 - 0x198940
void entry_00198914_0x198914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198914_0x198914");
#endif

    ctx->pc = 0x198914u;

    // 0x198914: 0x0  nop
    ctx->pc = 0x198914u;
    // NOP
    // 0x198918: 0x8e240450  lw          $a0, 0x450($s1)
    ctx->pc = 0x198918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x19891c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x198920: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x198924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x198928: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x198928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x19892c: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x198930: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x198930u;
    {
        const bool branch_taken_0x198930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198930) {
            ctx->pc = 0x1989D4u;
            return;
        }
    }
    ctx->pc = 0x198938u;
    // 0x198938: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x198938u;
    {
        const bool branch_taken_0x198938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198938u;
        // 0x19893c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198938) {
            ctx->pc = 0x1989D4u;
            return;
        }
    }
    ctx->pc = 0x198940u;
}
