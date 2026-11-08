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

// Function: FUN_00190c90
// Address: 0x190c90 - 0x190cf0
void FUN_00190c90_0x190c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190c90_0x190c90");
#endif

    switch (ctx->pc) {
        case 0x190cc0u: goto label_190cc0;
        case 0x190cd8u: goto label_190cd8;
        default: break;
    }

    ctx->pc = 0x190c90u;

    // 0x190c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190c94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x190c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190ca0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x190ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ca4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x190CA4u;
    {
        const bool branch_taken_0x190ca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x190CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CA4u;
        // 0x190ca8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ca4) {
            ctx->pc = 0x190CD8u;
            goto label_190cd8;
        }
    }
    ctx->pc = 0x190CACu;
    // 0x190cac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x190cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x190cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cb4: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x190cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x190cb8: 0xc063d60  jal         func_18F580
    ctx->pc = 0x190CB8u;
    SET_GPR_U32(ctx, 31, 0x190CC0u);
    ctx->pc = 0x190CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CB8u;
    // 0x190cbc: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F580u, 0x190CB8u, 0x190CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190CC0u;
label_190cc0:
    // 0x190cc0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x190cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x190cc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x190cc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x190cc8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190CC8u;
    {
        const bool branch_taken_0x190cc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x190CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CC8u;
        // 0x190ccc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190cc8) {
            ctx->pc = 0x190CDCu;
            goto label_190cdc;
        }
    }
    ctx->pc = 0x190CD0u;
    // 0x190cd0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x190CD0u;
    SET_GPR_U32(ctx, 31, 0x190CD8u);
    ctx->pc = 0x190CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CD0u;
    // 0x190cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x190CD0u, 0x190CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190CD8u;
label_190cd8:
    // 0x190cd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x190cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_190cdc:
    // 0x190cdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x190cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190ce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x190CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CE8u;
        // 0x190cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190CF0u;
}
