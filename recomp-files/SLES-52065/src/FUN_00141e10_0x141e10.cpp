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

// Function: FUN_00141e10
// Address: 0x141e10 - 0x141f34
void FUN_00141e10_0x141e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00141e10_0x141e10");
#endif

    switch (ctx->pc) {
        case 0x141e4cu: goto label_141e4c;
        case 0x141ed0u: goto label_141ed0;
        case 0x141ef0u: goto label_141ef0;
        case 0x141f00u: goto label_141f00;
        case 0x141f20u: goto label_141f20;
        default: break;
    }

    ctx->pc = 0x141e10u;

    // 0x141e10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x141e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x141e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x141e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x141e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141e20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x141e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e24: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x141e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x141e28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x141e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e2c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x141e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x141e30: 0xac510020  sw          $s1, 0x20($v0)
    ctx->pc = 0x141e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    // 0x141e34: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x141e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x141e38: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x141e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x141e3c: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x141e3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x141e40: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x141E40u;
    {
        const bool branch_taken_0x141e40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x141E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E40u;
        // 0x141e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e40) {
            ctx->pc = 0x141EC8u;
            goto label_141ec8;
        }
    }
    ctx->pc = 0x141E48u;
    // 0x141e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141e4c:
    // 0x141e4c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x141e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x141e50: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x141e50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x141e54: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x141e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x141e58: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x141e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x141e5c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x141e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x141e60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x141e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x141e64: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x141E64u;
    {
        const bool branch_taken_0x141e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e64) {
            ctx->pc = 0x141E9Cu;
            goto label_141e9c;
        }
    }
    ctx->pc = 0x141E6Cu;
    // 0x141e6c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x141e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x141e70: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x141E70u;
    {
        const bool branch_taken_0x141e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e70) {
            ctx->pc = 0x141E9Cu;
            goto label_141e9c;
        }
    }
    ctx->pc = 0x141E78u;
    // 0x141e78: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x141e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x141e7c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x141E7Cu;
    {
        const bool branch_taken_0x141e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e7c) {
            ctx->pc = 0x141E9Cu;
            goto label_141e9c;
        }
    }
    ctx->pc = 0x141E84u;
    // 0x141e84: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x141e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x141e88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141E88u;
    {
        const bool branch_taken_0x141e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e88) {
            ctx->pc = 0x141E9Cu;
            goto label_141e9c;
        }
    }
    ctx->pc = 0x141E90u;
    // 0x141e90: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x141e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x141e94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141E94u;
    {
        const bool branch_taken_0x141e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e94) {
            ctx->pc = 0x141EACu;
            goto label_141eac;
        }
    }
    ctx->pc = 0x141E9Cu;
label_141e9c:
    // 0x141e9c: 0x0  nop
    ctx->pc = 0x141e9cu;
    // NOP
    // 0x141ea0: 0xa0e30018  sb          $v1, 0x18($a3)
    ctx->pc = 0x141ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x141ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x141EA4u;
    {
        const bool branch_taken_0x141ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EA4u;
        // 0x141ea8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ea4) {
            ctx->pc = 0x141EB4u;
            goto label_141eb4;
        }
    }
    ctx->pc = 0x141EACu;
label_141eac:
    // 0x141eac: 0x0  nop
    ctx->pc = 0x141eacu;
    // NOP
    // 0x141eb0: 0xa0e00018  sb          $zero, 0x18($a3)
    ctx->pc = 0x141eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 24), (uint8_t)GPR_U32(ctx, 0));
label_141eb4:
    // 0x141eb4: 0x0  nop
    ctx->pc = 0x141eb4u;
    // NOP
    // 0x141eb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x141eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x141ebc: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x141ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x141ec0: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x141EC0u;
    {
        const bool branch_taken_0x141ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141ec0) {
            ctx->pc = 0x141E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141e4c;
        }
    }
    ctx->pc = 0x141EC8u;
label_141ec8:
    // 0x141ec8: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x141EC8u;
    SET_GPR_U32(ctx, 31, 0x141ED0u);
    ctx->pc = 0x141ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141EC8u;
    // 0x141ecc: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x141EC8u, 0x141ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141ED0u;
label_141ed0:
    // 0x141ed0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x141ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x141ed4: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x141ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x141ed8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141edc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x141edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141ee0: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x141ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x141ee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141ee8: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x141EE8u;
    SET_GPR_U32(ctx, 31, 0x141EF0u);
    ctx->pc = 0x141EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141EE8u;
    // 0x141eec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x141EE8u, 0x141EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141EF0u;
label_141ef0:
    // 0x141ef0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x141EF0u;
    {
        const bool branch_taken_0x141ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x141EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EF0u;
        // 0x141ef4: 0x2624003c  addiu       $a0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ef0) {
            ctx->pc = 0x141F20u;
            goto label_141f20;
        }
    }
    ctx->pc = 0x141EF8u;
    // 0x141ef8: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x141EF8u;
    SET_GPR_U32(ctx, 31, 0x141F00u);
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x141EF8u, 0x141F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F00u;
label_141f00:
    // 0x141f00: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x141f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x141f04: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x141f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x141f08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141f0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x141f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141f10: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x141f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x141f14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141f18: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x141F18u;
    SET_GPR_U32(ctx, 31, 0x141F20u);
    ctx->pc = 0x141F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141F18u;
    // 0x141f1c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x141F18u, 0x141F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F20u;
label_141f20:
    // 0x141f20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x141F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F2Cu;
        // 0x141f30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141F34u;
}
