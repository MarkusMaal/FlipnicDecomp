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

// Function: entry_001084e8
// Address: 0x1084e8 - 0x10852c
void entry_001084e8_0x1084e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001084e8_0x1084e8");
#endif

    switch (ctx->pc) {
        case 0x108524u: goto label_108524;
        default: break;
    }

    ctx->pc = 0x1084e8u;

    // 0x1084e8: 0x27b20064  addiu       $s2, $sp, 0x64
    ctx->pc = 0x1084e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1084ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1084ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1084f0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1084f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1084f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1084f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1084f8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1084f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1084fc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1084fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x108500: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x108500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x108504: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x108504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x108508: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x108508u;
    {
        const bool branch_taken_0x108508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x108508) {
            ctx->pc = 0x10853Cu;
            return;
        }
    }
    ctx->pc = 0x108510u;
    // 0x108510: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x108510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x108514: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108514u;
    {
        const bool branch_taken_0x108514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108514u;
        // 0x108518: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108514) {
            ctx->pc = 0x10852Cu;
            return;
        }
    }
    ctx->pc = 0x10851Cu;
    // 0x10851c: 0xc04208c  jal         func_108230
    ctx->pc = 0x10851Cu;
    SET_GPR_U32(ctx, 31, 0x108524u);
    ctx->pc = 0x108520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10851Cu;
    // 0x108520: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108230u, 0x10851Cu, 0x108524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108524u;
label_108524:
    // 0x108524: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x108524u;
    {
        const bool branch_taken_0x108524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108524u;
        // 0x108528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108524) {
            ctx->pc = 0x1086C0u;
            return;
        }
    }
    ctx->pc = 0x10852Cu;
}
