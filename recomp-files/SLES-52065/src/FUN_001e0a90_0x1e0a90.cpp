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

// Function: FUN_001e0a90
// Address: 0x1e0a90 - 0x1e0af8
void FUN_001e0a90_0x1e0a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0a90_0x1e0a90");
#endif

    switch (ctx->pc) {
        case 0x1e0adcu: goto label_1e0adc;
        default: break;
    }

    ctx->pc = 0x1e0a90u;

    // 0x1e0a90: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1e0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1e0a94: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1e0a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a98: 0x3442ee00  ori         $v0, $v0, 0xEE00
    ctx->pc = 0x1e0a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60928);
    // 0x1e0a9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0aa0: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1e0aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1e0aa4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E0AA4u;
    {
        const bool branch_taken_0x1e0aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AA4u;
        // 0x1e0aa8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0aa4) {
            ctx->pc = 0x1E0AE8u;
            goto label_1e0ae8;
        }
    }
    ctx->pc = 0x1E0AACu;
    // 0x1e0aac: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E0AACu;
    {
        const bool branch_taken_0x1e0aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AACu;
        // 0x1e0ab0: 0x4363a  dsrl        $a2, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) >> 24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0aac) {
            ctx->pc = 0x1E0AE8u;
            goto label_1e0ae8;
        }
    }
    ctx->pc = 0x1E0AB4u;
    // 0x1e0ab4: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x1e0ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x1e0ab8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1e0ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1e0abc: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1e0abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1e0ac0: 0x852824  and         $a1, $a0, $a1
    ctx->pc = 0x1e0ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e0ac4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1e0ac4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e0ac8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e0ac8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1e0acc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1e0accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1e0ad0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1e0ad0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1e0ad4: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1E0AD4u;
    SET_GPR_U32(ctx, 31, 0x1E0ADCu);
    ctx->pc = 0x1E0AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0AD4u;
    // 0x1e0ad8: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1E0AD4u, 0x1E0ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0ADCu;
label_1e0adc:
    // 0x1e0adc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0ADCu;
    {
        const bool branch_taken_0x1e0adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0ADCu;
        // 0x1e0ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0adc) {
            ctx->pc = 0x1E0AECu;
            goto label_1e0aec;
        }
    }
    ctx->pc = 0x1E0AE4u;
    // 0x1e0ae4: 0x0  nop
    ctx->pc = 0x1e0ae4u;
    // NOP
label_1e0ae8:
    // 0x1e0ae8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e0aec:
    // 0x1e0aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AF0u;
        // 0x1e0af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0AF8u;
}
