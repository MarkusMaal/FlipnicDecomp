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

// Function: FUN_0010a450
// Address: 0x10a450 - 0x10a4a4
void FUN_0010a450_0x10a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010a450_0x10a450");
#endif

    switch (ctx->pc) {
        case 0x10a468u: goto label_10a468;
        case 0x10a484u: goto label_10a484;
        default: break;
    }

    ctx->pc = 0x10a450u;

    // 0x10a450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a45c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10a45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10a460: 0xc04292c  jal         func_10A4B0
    ctx->pc = 0x10A460u;
    SET_GPR_U32(ctx, 31, 0x10A468u);
    ctx->pc = 0x10A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A460u;
    // 0x10a464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4B0u, 0x10A460u, 0x10A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A468u;
label_10a468:
    // 0x10a468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a46c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x10a470: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x10a470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x10a474: 0x2484e288  addiu       $a0, $a0, -0x1D78
    ctx->pc = 0x10a474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959752));
    // 0x10a478: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10a478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x10a47c: 0xc046458  jal         func_119160
    ctx->pc = 0x10A47Cu;
    SET_GPR_U32(ctx, 31, 0x10A484u);
    ctx->pc = 0x10A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A47Cu;
    // 0x10a480: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10A47Cu, 0x10A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A484u;
label_10a484:
    // 0x10a484: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x10a484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x10a488: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10a488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a48c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x10a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x10a490: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x10a490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x10a494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10a498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a49c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A49Cu;
        // 0x10a4a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A4A4u;
}
