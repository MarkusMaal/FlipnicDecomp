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

// Function: FUN_0013ef80
// Address: 0x13ef80 - 0x13f040
void FUN_0013ef80_0x13ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ef80_0x13ef80");
#endif

    switch (ctx->pc) {
        case 0x13efb0u: goto label_13efb0;
        case 0x13efe0u: goto label_13efe0;
        case 0x13efe8u: goto label_13efe8;
        case 0x13effcu: goto label_13effc;
        default: break;
    }

    ctx->pc = 0x13ef80u;

    // 0x13ef80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ef84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ef88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ef8c: 0x8f8385c8  lw          $v1, -0x7A38($gp)
    ctx->pc = 0x13ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936008)));
    // 0x13ef90: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x13EF90u;
    {
        const bool branch_taken_0x13ef90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ef90) {
            ctx->pc = 0x13F030u;
            goto label_13f030;
        }
    }
    ctx->pc = 0x13EF98u;
    // 0x13ef98: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x13ef98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13ef9c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x13ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13efa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13efa4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x13efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x13efa8: 0x1203001f  beq         $s0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x13EFA8u;
    {
        const bool branch_taken_0x13efa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x13efa8) {
            ctx->pc = 0x13F028u;
            goto label_13f028;
        }
    }
    ctx->pc = 0x13EFB0u;
label_13efb0:
    // 0x13efb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13efb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13efb4: 0x9083018c  lbu         $v1, 0x18C($a0)
    ctx->pc = 0x13efb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x13efb8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13EFB8u;
    {
        const bool branch_taken_0x13efb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13efb8) {
            ctx->pc = 0x13EFFCu;
            goto label_13effc;
        }
    }
    ctx->pc = 0x13EFC0u;
    // 0x13efc0: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x13efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13efc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EFC4u;
    {
        const bool branch_taken_0x13efc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13efc4) {
            ctx->pc = 0x13EFE0u;
            goto label_13efe0;
        }
    }
    ctx->pc = 0x13EFCCu;
    // 0x13efcc: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x13efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x13efd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EFD0u;
    {
        const bool branch_taken_0x13efd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13efd0) {
            ctx->pc = 0x13EFE0u;
            goto label_13efe0;
        }
    }
    ctx->pc = 0x13EFD8u;
    // 0x13efd8: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13EFD8u;
    SET_GPR_U32(ctx, 31, 0x13EFE0u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13EFD8u, 0x13EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EFE0u;
label_13efe0:
    // 0x13efe0: 0xc04c888  jal         func_132220
    ctx->pc = 0x13EFE0u;
    SET_GPR_U32(ctx, 31, 0x13EFE8u);
    ctx->pc = 0x13EFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EFE0u;
    // 0x13efe4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132220u, 0x13EFE0u, 0x13EFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EFE8u;
label_13efe8:
    // 0x13efe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13efec: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x13efecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x13eff0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13eff4: 0xc05068c  jal         func_141A30
    ctx->pc = 0x13EFF4u;
    SET_GPR_U32(ctx, 31, 0x13EFFCu);
    ctx->pc = 0x13EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EFF4u;
    // 0x13eff8: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A30u, 0x13EFF4u, 0x13EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EFFCu;
label_13effc:
    // 0x13effc: 0x0  nop
    ctx->pc = 0x13effcu;
    // NOP
    // 0x13f000: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f004: 0xa060018c  sb          $zero, 0x18C($v1)
    ctx->pc = 0x13f004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 396), (uint8_t)GPR_U32(ctx, 0));
    // 0x13f008: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13f008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13f00c: 0x8f8385c8  lw          $v1, -0x7A38($gp)
    ctx->pc = 0x13f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936008)));
    // 0x13f010: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x13f010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13f014: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x13f014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13f018: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13f018u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13f01c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f020: 0x1603ffe3  bne         $s0, $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x13F020u;
    {
        const bool branch_taken_0x13f020 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x13f020) {
            ctx->pc = 0x13EFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13efb0;
        }
    }
    ctx->pc = 0x13F028u;
label_13f028:
    // 0x13f028: 0x8f8385c8  lw          $v1, -0x7A38($gp)
    ctx->pc = 0x13f028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936008)));
    // 0x13f02c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_13f030:
    // 0x13f030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f038: 0x3e00008  jr          $ra
    ctx->pc = 0x13F038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F038u;
        // 0x13f03c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F040u;
}
