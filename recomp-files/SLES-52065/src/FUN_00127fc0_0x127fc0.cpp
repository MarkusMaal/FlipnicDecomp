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

// Function: FUN_00127fc0
// Address: 0x127fc0 - 0x128024
void FUN_00127fc0_0x127fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127fc0_0x127fc0");
#endif

    switch (ctx->pc) {
        case 0x127ff4u: goto label_127ff4;
        case 0x128008u: goto label_128008;
        default: break;
    }

    ctx->pc = 0x127fc0u;

    // 0x127fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x127fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x127fc4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x127fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x127fc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x127fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x127fcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x127fd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x127fd4: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x127fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x127fd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x127fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x127fdc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x127fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127fe0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x127FE0u;
    {
        const bool branch_taken_0x127fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FE0u;
        // 0x127fe4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fe0) {
            ctx->pc = 0x128010u;
            goto label_128010;
        }
    }
    ctx->pc = 0x127FE8u;
    // 0x127fe8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x127fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x127fec: 0xc049b0c  jal         func_126C30
    ctx->pc = 0x127FECu;
    SET_GPR_U32(ctx, 31, 0x127FF4u);
    ctx->pc = 0x127FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127FECu;
    // 0x127ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C30u, 0x127FECu, 0x127FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127FF4u;
label_127ff4:
    // 0x127ff4: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x127ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
    // 0x127ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x127ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ffc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x127ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x128000: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x128000u;
    SET_GPR_U32(ctx, 31, 0x128008u);
    ctx->pc = 0x128004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128000u;
    // 0x128004: 0xae300020  sw          $s0, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x128000u, 0x128008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128008u;
label_128008:
    // 0x128008: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x128008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x12800c: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x12800cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_128010:
    // 0x128010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x128010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12801c: 0x3e00008  jr          $ra
    ctx->pc = 0x12801Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12801Cu;
        // 0x128020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12801Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128024u;
}
