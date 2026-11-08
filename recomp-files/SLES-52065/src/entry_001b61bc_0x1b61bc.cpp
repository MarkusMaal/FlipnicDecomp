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

// Function: entry_001b61bc
// Address: 0x1b61bc - 0x1b61f8
void entry_001b61bc_0x1b61bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b61bc_0x1b61bc");
#endif

    ctx->pc = 0x1b61bcu;

    // 0x1b61bc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b61c0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B61C0u;
    {
        const bool branch_taken_0x1b61c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b61c0) {
            ctx->pc = 0x1B6230u;
            return;
        }
    }
    ctx->pc = 0x1B61C8u;
    // 0x1b61c8: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1b61c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1b61cc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B61CCu;
    {
        const bool branch_taken_0x1b61cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b61cc) {
            ctx->pc = 0x1B6230u;
            return;
        }
    }
    ctx->pc = 0x1B61D4u;
    // 0x1b61d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b61d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b61dc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B61DCu;
    {
        const bool branch_taken_0x1b61dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61DCu;
        // 0x1b61e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61dc) {
            ctx->pc = 0x1B6214u;
            return;
        }
    }
    ctx->pc = 0x1B61E4u;
    // 0x1b61e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b61e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b61e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B61E8u;
    {
        const bool branch_taken_0x1b61e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b61e8) {
            ctx->pc = 0x1B61F8u;
            return;
        }
    }
    ctx->pc = 0x1B61F0u;
    // 0x1b61f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B61F0u;
    {
        const bool branch_taken_0x1b61f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61F0u;
        // 0x1b61f4: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61f0) {
            ctx->pc = 0x1B6220u;
            return;
        }
    }
    ctx->pc = 0x1B61F8u;
}
