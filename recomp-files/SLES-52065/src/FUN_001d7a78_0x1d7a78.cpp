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

// Function: FUN_001d7a78
// Address: 0x1d7a78 - 0x1d7af0
void FUN_001d7a78_0x1d7a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d7a78_0x1d7a78");
#endif

    switch (ctx->pc) {
        case 0x1d7abcu: goto label_1d7abc;
        case 0x1d7ad0u: goto label_1d7ad0;
        case 0x1d7adcu: goto label_1d7adc;
        default: break;
    }

    ctx->pc = 0x1d7a78u;

    // 0x1d7a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7a7c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7a80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7a84: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d7a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d7a88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7a8c: 0x8c45054c  lw          $a1, 0x54C($v0)
    ctx->pc = 0x1d7a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d7a90: 0x8c660550  lw          $a2, 0x550($v1)
    ctx->pc = 0x1d7a90u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x370550u));
    // 0x1d7a94: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1d7a94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7a98: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1d7a98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1d7a9c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1d7a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1d7aa0: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x1d7aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d7aa4: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1d7aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d7aa8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1d7aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d7aac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d7aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d7ab0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1d7ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d7ab4: 0xc08218c  jal         func_208630
    ctx->pc = 0x1D7AB4u;
    SET_GPR_U32(ctx, 31, 0x1D7ABCu);
    ctx->pc = 0x1D7AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AB4u;
    // 0x1d7ab8: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1D7AB4u, 0x1D7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7ABCu;
label_1d7abc:
    // 0x1d7abc: 0x34058050  ori         $a1, $zero, 0x8050
    ctx->pc = 0x1d7abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32848);
    // 0x1d7ac0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d7ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d7ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d7ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ac8: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1D7AC8u;
    SET_GPR_U32(ctx, 31, 0x1D7AD0u);
    ctx->pc = 0x1D7ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AC8u;
    // 0x1d7acc: 0x261002e0  addiu       $s0, $s0, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1D7AC8u, 0x1D7AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7AD0u;
label_1d7ad0:
    // 0x1d7ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d7ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ad4: 0xc082222  jal         func_208888
    ctx->pc = 0x1D7AD4u;
    SET_GPR_U32(ctx, 31, 0x1D7ADCu);
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x1D7AD4u, 0x1D7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7ADCu;
label_1d7adc:
    // 0x1d7adc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d7adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d7ae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AE8u;
        // 0x1d7aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7AF0u;
}
