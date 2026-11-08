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

// Function: FUN_00106a70
// Address: 0x106a70 - 0x106af0
void FUN_00106a70_0x106a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106a70_0x106a70");
#endif

    switch (ctx->pc) {
        case 0x106adcu: goto label_106adc;
        default: break;
    }

    ctx->pc = 0x106a70u;

    // 0x106a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a80: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x106A80u;
    {
        const bool branch_taken_0x106a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A80u;
        // 0x106a84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a80) {
            ctx->pc = 0x106AE0u;
            goto label_106ae0;
        }
    }
    ctx->pc = 0x106A88u;
    // 0x106a88: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106a8c: 0x24427d50  addiu       $v0, $v0, 0x7D50
    ctx->pc = 0x106a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32080));
    // 0x106a90: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x106A90u;
    {
        const bool branch_taken_0x106a90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A90u;
        // 0x106a94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a90) {
            ctx->pc = 0x106AC4u;
            goto label_106ac4;
        }
    }
    ctx->pc = 0x106A98u;
    // 0x106a98: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106a9c: 0x2442a550  addiu       $v0, $v0, -0x5AB0
    ctx->pc = 0x106a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944080));
    // 0x106aa0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106AA0u;
    {
        const bool branch_taken_0x106aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AA0u;
        // 0x106aa4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106aa0) {
            ctx->pc = 0x106AC4u;
            goto label_106ac4;
        }
    }
    ctx->pc = 0x106AA8u;
    // 0x106aa8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106aac: 0x24427db0  addiu       $v0, $v0, 0x7DB0
    ctx->pc = 0x106aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32176));
    // 0x106ab0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106AB0u;
    {
        const bool branch_taken_0x106ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AB0u;
        // 0x106ab4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ab0) {
            ctx->pc = 0x106AC4u;
            goto label_106ac4;
        }
    }
    ctx->pc = 0x106AB8u;
    // 0x106ab8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106abc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x106abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x106ac0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x106ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_106ac4:
    // 0x106ac4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x106ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x106ac8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106ac8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x106acc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106ACCu;
    {
        const bool branch_taken_0x106acc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x106AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106ACCu;
        // 0x106ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106acc) {
            ctx->pc = 0x106ADCu;
            goto label_106adc;
        }
    }
    ctx->pc = 0x106AD4u;
    // 0x106ad4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x106AD4u;
    SET_GPR_U32(ctx, 31, 0x106ADCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106AD4u, 0x106ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106ADCu;
label_106adc:
    // 0x106adc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x106adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106ae0:
    // 0x106ae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x106AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AE8u;
        // 0x106aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106AF0u;
}
