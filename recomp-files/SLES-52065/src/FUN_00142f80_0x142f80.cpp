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

// Function: FUN_00142f80
// Address: 0x142f80 - 0x142ff0
void FUN_00142f80_0x142f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00142f80_0x142f80");
#endif

    switch (ctx->pc) {
        case 0x142fb8u: goto label_142fb8;
        case 0x142fc4u: goto label_142fc4;
        default: break;
    }

    ctx->pc = 0x142f80u;

    // 0x142f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x142f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x142f84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x142f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x142f88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x142f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x142f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142f94: 0x90830029  lbu         $v1, 0x29($a0)
    ctx->pc = 0x142f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
    // 0x142f98: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x142F98u;
    {
        const bool branch_taken_0x142f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F98u;
        // 0x142f9c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f98) {
            ctx->pc = 0x142FD8u;
            goto label_142fd8;
        }
    }
    ctx->pc = 0x142FA0u;
    // 0x142fa0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x142fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x142fa4: 0x8c910038  lw          $s1, 0x38($a0)
    ctx->pc = 0x142fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x142fa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x142fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142fac: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x142facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x142fb0: 0x12300008  beq         $s1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x142FB0u;
    {
        const bool branch_taken_0x142fb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x142fb0) {
            ctx->pc = 0x142FD4u;
            goto label_142fd4;
        }
    }
    ctx->pc = 0x142FB8u;
label_142fb8:
    // 0x142fb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142fbc: 0xc050bfc  jal         func_142FF0
    ctx->pc = 0x142FBCu;
    SET_GPR_U32(ctx, 31, 0x142FC4u);
    ctx->pc = 0x142FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FBCu;
    // 0x142fc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142FF0u, 0x142FBCu, 0x142FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FC4u;
label_142fc4:
    // 0x142fc4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x142fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x142fc8: 0x0  nop
    ctx->pc = 0x142fc8u;
    // NOP
    // 0x142fcc: 0x1630fffa  bne         $s1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x142FCCu;
    {
        const bool branch_taken_0x142fcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x142fcc) {
            ctx->pc = 0x142FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142fb8;
        }
    }
    ctx->pc = 0x142FD4u;
label_142fd4:
    // 0x142fd4: 0x0  nop
    ctx->pc = 0x142fd4u;
    // NOP
label_142fd8:
    // 0x142fd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x142fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142fdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142fe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x142FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FE8u;
        // 0x142fec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142FF0u;
}
