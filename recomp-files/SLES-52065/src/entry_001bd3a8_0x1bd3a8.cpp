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

// Function: entry_001bd3a8
// Address: 0x1bd3a8 - 0x1bd3d0
void entry_001bd3a8_0x1bd3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd3a8_0x1bd3a8");
#endif

    switch (ctx->pc) {
        case 0x1bd3b0u: goto label_1bd3b0;
        default: break;
    }

    ctx->pc = 0x1bd3a8u;

    // 0x1bd3a8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BD3A8u;
    SET_GPR_U32(ctx, 31, 0x1BD3B0u);
    ctx->pc = 0x1BD3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD3A8u;
    // 0x1bd3ac: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BD3A8u, 0x1BD3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD3B0u;
label_1bd3b0:
    // 0x1bd3b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bd3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd3b4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1bd3b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1bd3b8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1bd3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bd3bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd3c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bd3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bd3c4: 0x16630002  bne         $s3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD3C4u;
    {
        const bool branch_taken_0x1bd3c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3C4u;
        // 0x1bd3c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd3c4) {
            ctx->pc = 0x1BD3D0u;
            return;
        }
    }
    ctx->pc = 0x1BD3CCu;
    // 0x1bd3cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bd3ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bd3d0u;
}
