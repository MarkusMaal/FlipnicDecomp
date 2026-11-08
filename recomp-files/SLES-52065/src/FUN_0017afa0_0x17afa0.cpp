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

// Function: FUN_0017afa0
// Address: 0x17afa0 - 0x17b018
void FUN_0017afa0_0x17afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017afa0_0x17afa0");
#endif

    switch (ctx->pc) {
        case 0x17afd0u: goto label_17afd0;
        case 0x17aff0u: goto label_17aff0;
        default: break;
    }

    ctx->pc = 0x17afa0u;

    // 0x17afa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17afa4: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x17afa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x17afa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17afac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17afb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17afb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17afb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afb8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x17afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x17afbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17afbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afc0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17afc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17afc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afc8: 0xc057090  jal         func_15C240
    ctx->pc = 0x17AFC8u;
    SET_GPR_U32(ctx, 31, 0x17AFD0u);
    ctx->pc = 0x17AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AFC8u;
    // 0x17afcc: 0x24a5f898  addiu       $a1, $a1, -0x768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C240u, 0x17AFC8u, 0x17AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFD0u;
label_17afd0:
    // 0x17afd0: 0xae220414  sw          $v0, 0x414($s1)
    ctx->pc = 0x17afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 2));
    // 0x17afd4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17afd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17afd8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x17afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x17afdc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17afdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afe0: 0x24a5f898  addiu       $a1, $a1, -0x768
    ctx->pc = 0x17afe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965400));
    // 0x17afe4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17afe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17afe8: 0xc05704c  jal         func_15C130
    ctx->pc = 0x17AFE8u;
    SET_GPR_U32(ctx, 31, 0x17AFF0u);
    ctx->pc = 0x17AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AFE8u;
    // 0x17afec: 0x2408003d  addiu       $t0, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x17AFE8u, 0x17AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFF0u;
label_17aff0:
    // 0x17aff0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x17aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x17aff4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x17aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17aff8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17affc: 0x24632cd8  addiu       $v1, $v1, 0x2CD8
    ctx->pc = 0x17affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11480));
    // 0x17b000: 0xae230410  sw          $v1, 0x410($s1)
    ctx->pc = 0x17b000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1040), GPR_U32(ctx, 3));
    // 0x17b004: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b00c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b010: 0x3e00008  jr          $ra
    ctx->pc = 0x17B010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B010u;
        // 0x17b014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B018u;
}
