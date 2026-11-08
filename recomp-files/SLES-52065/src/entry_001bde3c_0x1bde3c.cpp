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

// Function: entry_001bde3c
// Address: 0x1bde3c - 0x1bde78
void entry_001bde3c_0x1bde3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bde3c_0x1bde3c");
#endif

    ctx->pc = 0x1bde3cu;

    // 0x1bde3c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1bde3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x1bde40: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1bde40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1bde44: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x1bde44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x1bde48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1bde48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bde4c: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x1bde4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
    // 0x1bde50: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1bde50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde54: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1bde54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1bde58: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x1bde58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x1bde5c: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x1bde5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x1bde60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bde60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bde64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bde64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bde68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bde68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bde6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bde6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bde70: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE70u;
        // 0x1bde74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDE78u;
}
