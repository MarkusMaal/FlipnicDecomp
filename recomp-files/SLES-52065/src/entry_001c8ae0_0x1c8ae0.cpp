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

// Function: entry_001c8ae0
// Address: 0x1c8ae0 - 0x1c8bd8
void entry_001c8ae0_0x1c8ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8ae0_0x1c8ae0");
#endif

    switch (ctx->pc) {
        case 0x1c8b08u: goto label_1c8b08;
        case 0x1c8b1cu: goto label_1c8b1c;
        case 0x1c8b30u: goto label_1c8b30;
        case 0x1c8b44u: goto label_1c8b44;
        case 0x1c8b88u: goto label_1c8b88;
        case 0x1c8b94u: goto label_1c8b94;
        case 0x1c8ba0u: goto label_1c8ba0;
        case 0x1c8bacu: goto label_1c8bac;
        case 0x1c8bc0u: goto label_1c8bc0;
        default: break;
    }

    ctx->pc = 0x1c8ae0u;

    // 0x1c8ae0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ae8: 0x8c22f8b0  lw          $v0, -0x750($at)
    ctx->pc = 0x1c8ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F8B0u));
    // 0x1c8aec: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1c8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1c8af0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8af4: 0x8c22f8b8  lw          $v0, -0x748($at)
    ctx->pc = 0x1c8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8af8: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c8af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c8afc: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1c8afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c8b00: 0xc072480  jal         func_1C9200
    ctx->pc = 0x1C8B00u;
    SET_GPR_U32(ctx, 31, 0x1C8B08u);
    ctx->pc = 0x1C8B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B00u;
    // 0x1c8b04: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9200u, 0x1C8B00u, 0x1C8B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B08u;
label_1c8b08:
    // 0x1c8b08: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b10: 0x24a561a0  addiu       $a1, $a1, 0x61A0
    ctx->pc = 0x1c8b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24992));
    // 0x1c8b14: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1C8B14u;
    SET_GPR_U32(ctx, 31, 0x1C8B1Cu);
    ctx->pc = 0x1C8B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B14u;
    // 0x1c8b18: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1C8B14u, 0x1C8B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B1Cu;
label_1c8b1c:
    // 0x1c8b1c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b24: 0x24a564b0  addiu       $a1, $a1, 0x64B0
    ctx->pc = 0x1c8b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25776));
    // 0x1c8b28: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C8B28u;
    SET_GPR_U32(ctx, 31, 0x1C8B30u);
    ctx->pc = 0x1C8B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B28u;
    // 0x1c8b2c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C8B28u, 0x1C8B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B30u;
label_1c8b30:
    // 0x1c8b30: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b38: 0x24a565d0  addiu       $a1, $a1, 0x65D0
    ctx->pc = 0x1c8b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26064));
    // 0x1c8b3c: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C8B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C8B44u);
    ctx->pc = 0x1C8B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B3Cu;
    // 0x1c8b40: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C8B3Cu, 0x1C8B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B44u;
label_1c8b44:
    // 0x1c8b44: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x1c8b44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x1c8b48: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1c8b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c8b4c: 0x250868a0  addiu       $t0, $t0, 0x68A0
    ctx->pc = 0x1c8b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26784));
    // 0x1c8b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b54: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1c8b54u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x2168A0u));
    // 0x1c8b58: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1c8b58u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x2168B0u));
    // 0x1c8b5c: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1c8b5cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2168C0u));
    // 0x1c8b60: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1c8b60u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x2168D0u));
    // 0x1c8b64: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c8b64u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c8b68: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1c8b68u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1c8b6c: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1c8b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1c8b70: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1c8b70u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1c8b74: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x1c8b74u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2168E0u));
    // 0x1c8b78: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x1c8b78u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x2168F0u));
    // 0x1c8b7c: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x1c8b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x1c8b80: 0xc07240c  jal         func_1C9030
    ctx->pc = 0x1C8B80u;
    SET_GPR_U32(ctx, 31, 0x1C8B88u);
    ctx->pc = 0x1C8B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B80u;
    // 0x1c8b84: 0x7ce20050  sq          $v0, 0x50($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9030u, 0x1C8B80u, 0x1C8B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B88u;
label_1c8b88:
    // 0x1c8b88: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1c8b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1c8b8c: 0xc072434  jal         func_1C90D0
    ctx->pc = 0x1C8B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C8B94u);
    ctx->pc = 0x1C8B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B8Cu;
    // 0x1c8b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C90D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C90D0u, 0x1C8B8Cu, 0x1C8B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B94u;
label_1c8b94:
    // 0x1c8b94: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1c8b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x1c8b98: 0xc072448  jal         func_1C9120
    ctx->pc = 0x1C8B98u;
    SET_GPR_U32(ctx, 31, 0x1C8BA0u);
    ctx->pc = 0x1C8B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B98u;
    // 0x1c8b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9120u, 0x1C8B98u, 0x1C8BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8BA0u;
label_1c8ba0:
    // 0x1c8ba0: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1c8ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1c8ba4: 0xc072464  jal         func_1C9190
    ctx->pc = 0x1C8BA4u;
    SET_GPR_U32(ctx, 31, 0x1C8BACu);
    ctx->pc = 0x1C8BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8BA4u;
    // 0x1c8ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9190u, 0x1C8BA4u, 0x1C8BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8BACu;
label_1c8bac:
    // 0x1c8bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8bb0: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1c8bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1c8bb4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1c8bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c8bb8: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C8BB8u;
    SET_GPR_U32(ctx, 31, 0x1C8BC0u);
    ctx->pc = 0x1C8BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8BB8u;
    // 0x1c8bbc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C8BB8u, 0x1C8BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8BC0u;
label_1c8bc0:
    // 0x1c8bc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c8bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8bc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c8bc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8bc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8bcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8BD0u;
        // 0x1c8bd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8BD8u;
}
