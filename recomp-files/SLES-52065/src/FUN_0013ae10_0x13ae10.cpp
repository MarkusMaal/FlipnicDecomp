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

// Function: FUN_0013ae10
// Address: 0x13ae10 - 0x13aed4
void FUN_0013ae10_0x13ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ae10_0x13ae10");
#endif

    switch (ctx->pc) {
        case 0x13ae44u: goto label_13ae44;
        case 0x13aea0u: goto label_13aea0;
        default: break;
    }

    ctx->pc = 0x13ae10u;

    // 0x13ae10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ae14: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x13ae14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ae1c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x13ae1cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13ae20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ae24: 0x24a90004  addiu       $t1, $a1, 0x4
    ctx->pc = 0x13ae24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13ae28: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x13ae28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13ae2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ae2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13ae30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae34: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x13AE34u;
    {
        const bool branch_taken_0x13ae34 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE34u;
        // 0x13ae38: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae34) {
            ctx->pc = 0x13AE78u;
            goto label_13ae78;
        }
    }
    ctx->pc = 0x13AE3Cu;
    // 0x13ae3c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x13ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13ae40: 0x0  nop
    ctx->pc = 0x13ae40u;
    // NOP
label_13ae44:
    // 0x13ae44: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x13ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x13ae48: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x13ae48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13ae4c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AE4Cu;
    {
        const bool branch_taken_0x13ae4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE4Cu;
        // 0x13ae50: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae4c) {
            ctx->pc = 0x13AE60u;
            goto label_13ae60;
        }
    }
    ctx->pc = 0x13AE54u;
    // 0x13ae54: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x13ae54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x13ae58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13AE58u;
    {
        const bool branch_taken_0x13ae58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE58u;
        // 0x13ae5c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae58) {
            ctx->pc = 0x13AE70u;
            goto label_13ae70;
        }
    }
    ctx->pc = 0x13AE60u;
label_13ae60:
    // 0x13ae60: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x13ae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae64: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x13ae64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x13ae68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ae68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13ae6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ae70:
    // 0x13ae70: 0x1540fff4  bnez        $t2, . + 4 + (-0xC << 2)
    ctx->pc = 0x13AE70u;
    {
        const bool branch_taken_0x13ae70 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ae70) {
            ctx->pc = 0x13AE44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ae44;
        }
    }
    ctx->pc = 0x13AE78u;
label_13ae78:
    // 0x13ae78: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13AE78u;
    {
        const bool branch_taken_0x13ae78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae78) {
            ctx->pc = 0x13AE94u;
            goto label_13ae94;
        }
    }
    ctx->pc = 0x13AE80u;
    // 0x13ae80: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x13ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13ae84: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x13ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13ae88: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x13ae88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13ae8c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13AE8Cu;
    {
        const bool branch_taken_0x13ae8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae8c) {
            ctx->pc = 0x13AEB4u;
            goto label_13aeb4;
        }
    }
    ctx->pc = 0x13AE94u;
label_13ae94:
    // 0x13ae94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13ae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae98: 0xc04eee0  jal         func_13BB80
    ctx->pc = 0x13AE98u;
    SET_GPR_U32(ctx, 31, 0x13AEA0u);
    ctx->pc = 0x13AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE98u;
    // 0x13ae9c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB80u, 0x13AE98u, 0x13AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AEA0u;
label_13aea0:
    // 0x13aea0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13aea4: 0x93838090  lbu         $v1, -0x7F70($gp)
    ctx->pc = 0x13aea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x13aea8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13aea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aeac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13AEACu;
    {
        const bool branch_taken_0x13aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEACu;
        // 0x13aeb0: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aeac) {
            ctx->pc = 0x13AEC4u;
            goto label_13aec4;
        }
    }
    ctx->pc = 0x13AEB4u;
label_13aeb4:
    // 0x13aeb4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x13aeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x13aeb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13aeb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aebc: 0x93838094  lbu         $v1, -0x7F6C($gp)
    ctx->pc = 0x13aebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934676)));
    // 0x13aec0: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x13aec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_13aec4:
    // 0x13aec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13aec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13aec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13aec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13aecc: 0x3e00008  jr          $ra
    ctx->pc = 0x13AECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AECCu;
        // 0x13aed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AED4u;
}
