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

// Function: FUN_0018fca0
// Address: 0x18fca0 - 0x18fcfc
void FUN_0018fca0_0x18fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018fca0_0x18fca0");
#endif

    switch (ctx->pc) {
        case 0x18fcccu: goto label_18fccc;
        case 0x18fce4u: goto label_18fce4;
        default: break;
    }

    ctx->pc = 0x18fca0u;

    // 0x18fca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18fca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18fca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18fca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18fcac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18fcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18fcb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18fcb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fcb4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x18FCB4u;
    {
        const bool branch_taken_0x18fcb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCB4u;
        // 0x18fcb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcb4) {
            ctx->pc = 0x18FCE4u;
            goto label_18fce4;
        }
    }
    ctx->pc = 0x18FCBCu;
    // 0x18fcbc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x18fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x18fcc0: 0x2442b1e0  addiu       $v0, $v0, -0x4E20
    ctx->pc = 0x18fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x18fcc4: 0xc063f64  jal         func_18FD90
    ctx->pc = 0x18FCC4u;
    SET_GPR_U32(ctx, 31, 0x18FCCCu);
    ctx->pc = 0x18FCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCC4u;
    // 0x18fcc8: 0xae220234  sw          $v0, 0x234($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD90u, 0x18FCC4u, 0x18FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCCCu;
label_18fccc:
    // 0x18fccc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x18fcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x18fcd0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18fcd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18fcd4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FCD4u;
    {
        const bool branch_taken_0x18fcd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCD4u;
        // 0x18fcd8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcd4) {
            ctx->pc = 0x18FCE8u;
            goto label_18fce8;
        }
    }
    ctx->pc = 0x18FCDCu;
    // 0x18fcdc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x18FCDCu;
    SET_GPR_U32(ctx, 31, 0x18FCE4u);
    ctx->pc = 0x18FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCDCu;
    // 0x18fce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x18FCDCu, 0x18FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCE4u;
label_18fce4:
    // 0x18fce4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18fce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18fce8:
    // 0x18fce8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18fce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fcec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18fcecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fcf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18fcf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x18FCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCF4u;
        // 0x18fcf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FCFCu;
}
