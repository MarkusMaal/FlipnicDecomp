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

// Function: FUN_00105c50
// Address: 0x105c50 - 0x105ce0
void FUN_00105c50_0x105c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105c50_0x105c50");
#endif

    switch (ctx->pc) {
        case 0x105cb0u: goto label_105cb0;
        case 0x105cc8u: goto label_105cc8;
        default: break;
    }

    ctx->pc = 0x105c50u;

    // 0x105c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x105c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x105c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x105c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x105c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105c60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c64: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x105C64u;
    {
        const bool branch_taken_0x105c64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C64u;
        // 0x105c68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c64) {
            ctx->pc = 0x105CC8u;
            goto label_105cc8;
        }
    }
    ctx->pc = 0x105C6Cu;
    // 0x105c6c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105c70: 0x2442af40  addiu       $v0, $v0, -0x50C0
    ctx->pc = 0x105c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946624));
    // 0x105c74: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x105C74u;
    {
        const bool branch_taken_0x105c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C74u;
        // 0x105c78: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c74) {
            ctx->pc = 0x105CB0u;
            goto label_105cb0;
        }
    }
    ctx->pc = 0x105C7Cu;
    // 0x105c7c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105c80: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x105c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x105c84: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x105C84u;
    {
        const bool branch_taken_0x105c84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C84u;
        // 0x105c88: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c84) {
            ctx->pc = 0x105CB0u;
            goto label_105cb0;
        }
    }
    ctx->pc = 0x105C8Cu;
    // 0x105c8c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105c90: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x105c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x105c94: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x105C94u;
    {
        const bool branch_taken_0x105c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C94u;
        // 0x105c98: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c94) {
            ctx->pc = 0x105CB0u;
            goto label_105cb0;
        }
    }
    ctx->pc = 0x105C9Cu;
    // 0x105c9c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ca4: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x105ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x105ca8: 0xc0416c8  jal         func_105B20
    ctx->pc = 0x105CA8u;
    SET_GPR_U32(ctx, 31, 0x105CB0u);
    ctx->pc = 0x105CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105CA8u;
    // 0x105cac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B20u, 0x105CA8u, 0x105CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CB0u;
label_105cb0:
    // 0x105cb0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x105cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x105cb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105cb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105cb8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105CB8u;
    {
        const bool branch_taken_0x105cb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CB8u;
        // 0x105cbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cb8) {
            ctx->pc = 0x105CCCu;
            goto label_105ccc;
        }
    }
    ctx->pc = 0x105CC0u;
    // 0x105cc0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105CC0u;
    SET_GPR_U32(ctx, 31, 0x105CC8u);
    ctx->pc = 0x105CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105CC0u;
    // 0x105cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105CC0u, 0x105CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CC8u;
label_105cc8:
    // 0x105cc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x105cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_105ccc:
    // 0x105ccc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x105cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105cd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x105cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x105CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CD8u;
        // 0x105cdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105CE0u;
}
