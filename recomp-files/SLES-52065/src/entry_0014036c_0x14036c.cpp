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

// Function: entry_0014036c
// Address: 0x14036c - 0x1403a8
void entry_0014036c_0x14036c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014036c_0x14036c");
#endif

    ctx->pc = 0x14036cu;

    // 0x14036c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x14036cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x140370: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x140370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x140374: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x140374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x140378: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x140378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14037c: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x14037cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
    // 0x140380: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x140380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140384: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x140384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x140388: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x140388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x14038c: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x14038cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x140390: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x140390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14039c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14039cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1403a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1403A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1403A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1403A0u;
        // 0x1403a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1403A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1403A8u;
}
