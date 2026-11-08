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

// Function: FUN_00125f60
// Address: 0x125f60 - 0x125fc0
void FUN_00125f60_0x125f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125f60_0x125f60");
#endif

    switch (ctx->pc) {
        case 0x125f90u: goto label_125f90;
        case 0x125fa8u: goto label_125fa8;
        default: break;
    }

    ctx->pc = 0x125f60u;

    // 0x125f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125f64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x125f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x125f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x125f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125f70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f74: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x125F74u;
    {
        const bool branch_taken_0x125f74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F74u;
        // 0x125f78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f74) {
            ctx->pc = 0x125FA8u;
            goto label_125fa8;
        }
    }
    ctx->pc = 0x125F7Cu;
    // 0x125f7c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x125f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x125f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x125f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f84: 0x24428960  addiu       $v0, $v0, -0x76A0
    ctx->pc = 0x125f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936928));
    // 0x125f88: 0xc04971c  jal         func_125C70
    ctx->pc = 0x125F88u;
    SET_GPR_U32(ctx, 31, 0x125F90u);
    ctx->pc = 0x125F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F88u;
    // 0x125f8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C70u, 0x125F88u, 0x125F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F90u;
label_125f90:
    // 0x125f90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x125f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x125f94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x125f94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x125f98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125F98u;
    {
        const bool branch_taken_0x125f98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x125F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F98u;
        // 0x125f9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f98) {
            ctx->pc = 0x125FACu;
            goto label_125fac;
        }
    }
    ctx->pc = 0x125FA0u;
    // 0x125fa0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x125FA0u;
    SET_GPR_U32(ctx, 31, 0x125FA8u);
    ctx->pc = 0x125FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FA0u;
    // 0x125fa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x125FA0u, 0x125FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FA8u;
label_125fa8:
    // 0x125fa8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x125fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125fac:
    // 0x125fac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125fb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x125fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x125FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FB8u;
        // 0x125fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125FC0u;
}
