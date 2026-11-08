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

// Function: FUN_001cc760
// Address: 0x1cc760 - 0x1cc7c0
void FUN_001cc760_0x1cc760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc760_0x1cc760");
#endif

    switch (ctx->pc) {
        case 0x1cc790u: goto label_1cc790;
        case 0x1cc7a8u: goto label_1cc7a8;
        default: break;
    }

    ctx->pc = 0x1cc760u;

    // 0x1cc760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cc764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cc768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc770: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc774: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CC774u;
    {
        const bool branch_taken_0x1cc774 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC774u;
        // 0x1cc778: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc774) {
            ctx->pc = 0x1CC7A8u;
            goto label_1cc7a8;
        }
    }
    ctx->pc = 0x1CC77Cu;
    // 0x1cc77c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1cc77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1cc780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc784: 0x2442bda0  addiu       $v0, $v0, -0x4260
    ctx->pc = 0x1cc784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950304));
    // 0x1cc788: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1CC788u;
    SET_GPR_U32(ctx, 31, 0x1CC790u);
    ctx->pc = 0x1CC78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC788u;
    // 0x1cc78c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1CC788u, 0x1CC790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC790u;
label_1cc790:
    // 0x1cc790: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1cc790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1cc794: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1cc794u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1cc798: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC798u;
    {
        const bool branch_taken_0x1cc798 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC798u;
        // 0x1cc79c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc798) {
            ctx->pc = 0x1CC7ACu;
            goto label_1cc7ac;
        }
    }
    ctx->pc = 0x1CC7A0u;
    // 0x1cc7a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1CC7A0u;
    SET_GPR_U32(ctx, 31, 0x1CC7A8u);
    ctx->pc = 0x1CC7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC7A0u;
    // 0x1cc7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1CC7A0u, 0x1CC7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7A8u;
label_1cc7a8:
    // 0x1cc7a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cc7a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7ac:
    // 0x1cc7ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc7b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc7b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc7b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7B8u;
        // 0x1cc7bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC7C0u;
}
