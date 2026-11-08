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

// Function: entry_0019f3bc
// Address: 0x19f3bc - 0x19f3e8
void entry_0019f3bc_0x19f3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f3bc_0x19f3bc");
#endif

    ctx->pc = 0x19f3bcu;

    // 0x19f3bc: 0x10600181  beqz        $v1, . + 4 + (0x181 << 2)
    ctx->pc = 0x19F3BCu;
    {
        const bool branch_taken_0x19f3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f3bc) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F3C4u;
    // 0x19f3c4: 0x8e83068c  lw          $v1, 0x68C($s4)
    ctx->pc = 0x19f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
    // 0x19f3c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f3cc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F3CCu;
    {
        const bool branch_taken_0x19f3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3CCu;
        // 0x19f3d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3cc) {
            ctx->pc = 0x19F3E8u;
            return;
        }
    }
    ctx->pc = 0x19F3D4u;
    // 0x19f3d4: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x19f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x19f3d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f3dc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F3DCu;
    {
        const bool branch_taken_0x19f3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3DCu;
        // 0x19f3e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3dc) {
            ctx->pc = 0x19F3FCu;
            return;
        }
    }
    ctx->pc = 0x19F3E4u;
    // 0x19f3e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f3e8u;
}
