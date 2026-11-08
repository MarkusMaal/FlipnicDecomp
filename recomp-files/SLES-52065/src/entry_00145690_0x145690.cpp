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

// Function: entry_00145690
// Address: 0x145690 - 0x1456c4
void entry_00145690_0x145690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145690_0x145690");
#endif

    ctx->pc = 0x145690u;

    // 0x145690: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x145690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145694: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x145694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x145698: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x145698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14569c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14569cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1456a0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1456a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1456a4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1456a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1456a8: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1456A8u;
    {
        const bool branch_taken_0x1456a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1456a8) {
            ctx->pc = 0x145660u;
            return;
        }
    }
    ctx->pc = 0x1456B0u;
    // 0x1456b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1456b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1456b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1456b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1456b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1456b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1456bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1456BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1456C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456BCu;
        // 0x1456c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1456BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1456C4u;
}
