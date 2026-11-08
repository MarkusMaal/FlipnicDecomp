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

// Function: FUN_001aacd0
// Address: 0x1aacd0 - 0x1aad30
void FUN_001aacd0_0x1aacd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aacd0_0x1aacd0");
#endif

    switch (ctx->pc) {
        case 0x1aad00u: goto label_1aad00;
        case 0x1aad18u: goto label_1aad18;
        default: break;
    }

    ctx->pc = 0x1aacd0u;

    // 0x1aacd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aacd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aacd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aacd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aacd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aacd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aacdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aacdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aace0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aace0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aace4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AACE4u;
    {
        const bool branch_taken_0x1aace4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACE4u;
        // 0x1aace8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aace4) {
            ctx->pc = 0x1AAD18u;
            goto label_1aad18;
        }
    }
    ctx->pc = 0x1AACECu;
    // 0x1aacec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aacecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aacf0: 0x2442b670  addiu       $v0, $v0, -0x4990
    ctx->pc = 0x1aacf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948464));
    // 0x1aacf4: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1aacf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1aacf8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1AACF8u;
    SET_GPR_U32(ctx, 31, 0x1AAD00u);
    ctx->pc = 0x1AACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACF8u;
    // 0x1aacfc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1AACF8u, 0x1AAD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD00u;
label_1aad00:
    // 0x1aad00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1aad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1aad04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1aad04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1aad08: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAD08u;
    {
        const bool branch_taken_0x1aad08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AAD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD08u;
        // 0x1aad0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad08) {
            ctx->pc = 0x1AAD1Cu;
            goto label_1aad1c;
        }
    }
    ctx->pc = 0x1AAD10u;
    // 0x1aad10: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1AAD10u;
    SET_GPR_U32(ctx, 31, 0x1AAD18u);
    ctx->pc = 0x1AAD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD10u;
    // 0x1aad14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1AAD10u, 0x1AAD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD18u;
label_1aad18:
    // 0x1aad18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1aad18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aad1c:
    // 0x1aad1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aad1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aad20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aad20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aad24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aad24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aad28: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD28u;
        // 0x1aad2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAD30u;
}
