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

// Function: entry_001da440
// Address: 0x1da440 - 0x1da478
void entry_001da440_0x1da440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da440_0x1da440");
#endif

    ctx->pc = 0x1da440u;

    // 0x1da440: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da444: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1da444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1da448: 0x171200  sll         $v0, $s7, 8
    ctx->pc = 0x1da448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 8));
    // 0x1da44c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1da44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1da450: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x1da450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x1da454: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da458: 0xfe050030  sd          $a1, 0x30($s0)
    ctx->pc = 0x1da458u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 5));
    // 0x1da45c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1da45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1da460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da464: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1da464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1da468: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x1da468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x1da46c: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1da46cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1da470: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1DA470u;
    {
        const bool branch_taken_0x1da470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA470u;
        // 0x1da474: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da470) {
            ctx->pc = 0x1DA510u;
            return;
        }
    }
    ctx->pc = 0x1DA478u;
}
