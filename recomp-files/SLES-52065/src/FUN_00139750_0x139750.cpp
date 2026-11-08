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

// Function: FUN_00139750
// Address: 0x139750 - 0x1397b0
void FUN_00139750_0x139750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00139750_0x139750");
#endif

    switch (ctx->pc) {
        case 0x13976cu: goto label_13976c;
        default: break;
    }

    ctx->pc = 0x139750u;

    // 0x139750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x139758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13975c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x13975cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x139760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139764: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x139764u;
    SET_GPR_U32(ctx, 31, 0x13976Cu);
    ctx->pc = 0x139768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139764u;
    // 0x139768: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x139764u, 0x13976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13976Cu;
label_13976c:
    // 0x13976c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13976cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x139770: 0x34048003  ori         $a0, $zero, 0x8003
    ctx->pc = 0x139770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x139774: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x139774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x139778: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x139778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x13977c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x13977cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x139780: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x139780u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x139784: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x139784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x139788: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x139788u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x13978c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x13978cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x139790: 0xfe050018  sd          $a1, 0x18($s0)
    ctx->pc = 0x139790u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 5));
    // 0x139794: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x139794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x139798: 0xfe040028  sd          $a0, 0x28($s0)
    ctx->pc = 0x139798u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 4));
    // 0x13979c: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x13979cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
    // 0x1397a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1397a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1397a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1397a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1397a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1397A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1397ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397A8u;
        // 0x1397ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1397A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1397B0u;
}
