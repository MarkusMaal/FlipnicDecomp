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

// Function: FUN_001a6aa0
// Address: 0x1a6aa0 - 0x1a6afc
void FUN_001a6aa0_0x1a6aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6aa0_0x1a6aa0");
#endif

    switch (ctx->pc) {
        case 0x1a6accu: goto label_1a6acc;
        case 0x1a6ae4u: goto label_1a6ae4;
        default: break;
    }

    ctx->pc = 0x1a6aa0u;

    // 0x1a6aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6aa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a6aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a6ab0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ab4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6AB4u;
    {
        const bool branch_taken_0x1a6ab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AB4u;
        // 0x1a6ab8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ab4) {
            ctx->pc = 0x1A6AE4u;
            goto label_1a6ae4;
        }
    }
    ctx->pc = 0x1A6ABCu;
    // 0x1a6abc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a6ac0: 0x2442b4d0  addiu       $v0, $v0, -0x4B30
    ctx->pc = 0x1a6ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948048));
    // 0x1a6ac4: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x1A6AC4u;
    SET_GPR_U32(ctx, 31, 0x1A6ACCu);
    ctx->pc = 0x1A6AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6AC4u;
    // 0x1a6ac8: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1A6AC4u, 0x1A6ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6ACCu;
label_1a6acc:
    // 0x1a6acc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a6accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a6ad0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a6ad0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a6ad4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6AD4u;
    {
        const bool branch_taken_0x1a6ad4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AD4u;
        // 0x1a6ad8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ad4) {
            ctx->pc = 0x1A6AE8u;
            goto label_1a6ae8;
        }
    }
    ctx->pc = 0x1A6ADCu;
    // 0x1a6adc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A6ADCu;
    SET_GPR_U32(ctx, 31, 0x1A6AE4u);
    ctx->pc = 0x1A6AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6ADCu;
    // 0x1a6ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A6ADCu, 0x1A6AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6AE4u;
label_1a6ae4:
    // 0x1a6ae4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a6ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6ae8:
    // 0x1a6ae8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6af4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AF4u;
        // 0x1a6af8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6AFCu;
}
