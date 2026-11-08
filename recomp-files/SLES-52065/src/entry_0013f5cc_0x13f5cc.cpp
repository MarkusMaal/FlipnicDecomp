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

// Function: entry_0013f5cc
// Address: 0x13f5cc - 0x13f608
void entry_0013f5cc_0x13f5cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f5cc_0x13f5cc");
#endif

    ctx->pc = 0x13f5ccu;

    // 0x13f5cc: 0x0  nop
    ctx->pc = 0x13f5ccu;
    // NOP
    // 0x13f5d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x13f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f5d4: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x13f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x13f5d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x13f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13f5dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f5e0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x13f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x13f5e4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x13f5e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13f5e8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13F5E8u;
    {
        const bool branch_taken_0x13f5e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f5e8) {
            ctx->pc = 0x13F59Cu;
            return;
        }
    }
    ctx->pc = 0x13F5F0u;
    // 0x13f5f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13f5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f5f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f5f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f5fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f600: 0x3e00008  jr          $ra
    ctx->pc = 0x13F600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F600u;
        // 0x13f604: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F608u;
}
