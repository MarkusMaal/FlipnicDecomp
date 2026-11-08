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

// Function: FUN_00198c60
// Address: 0x198c60 - 0x198cc0
void FUN_00198c60_0x198c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198c60_0x198c60");
#endif

    switch (ctx->pc) {
        case 0x198c90u: goto label_198c90;
        case 0x198ca8u: goto label_198ca8;
        default: break;
    }

    ctx->pc = 0x198c60u;

    // 0x198c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x198c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x198c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x198c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x198c70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c74: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x198C74u;
    {
        const bool branch_taken_0x198c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C74u;
        // 0x198c78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c74) {
            ctx->pc = 0x198CA8u;
            goto label_198ca8;
        }
    }
    ctx->pc = 0x198C7Cu;
    // 0x198c7c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x198c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x198c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c84: 0x2442b2b0  addiu       $v0, $v0, -0x4D50
    ctx->pc = 0x198c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947504));
    // 0x198c88: 0xc064324  jal         func_190C90
    ctx->pc = 0x198C88u;
    SET_GPR_U32(ctx, 31, 0x198C90u);
    ctx->pc = 0x198C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198C88u;
    // 0x198c8c: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x198C88u, 0x198C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C90u;
label_198c90:
    // 0x198c90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x198c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x198c94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198c94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x198c98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198C98u;
    {
        const bool branch_taken_0x198c98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x198C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C98u;
        // 0x198c9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c98) {
            ctx->pc = 0x198CACu;
            goto label_198cac;
        }
    }
    ctx->pc = 0x198CA0u;
    // 0x198ca0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x198CA0u;
    SET_GPR_U32(ctx, 31, 0x198CA8u);
    ctx->pc = 0x198CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198CA0u;
    // 0x198ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x198CA0u, 0x198CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198CA8u;
label_198ca8:
    // 0x198ca8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x198ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198cac:
    // 0x198cac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x198cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x198CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CB8u;
        // 0x198cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198CC0u;
}
