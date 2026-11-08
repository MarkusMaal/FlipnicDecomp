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

// Function: FUN_001be790
// Address: 0x1be790 - 0x1be818
void FUN_001be790_0x1be790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001be790_0x1be790");
#endif

    switch (ctx->pc) {
        case 0x1be7c0u: goto label_1be7c0;
        case 0x1be804u: goto label_1be804;
        default: break;
    }

    ctx->pc = 0x1be790u;

    // 0x1be790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be794: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1be794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be79c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x1be79cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1be7a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be7a4: 0x24a90004  addiu       $t1, $a1, 0x4
    ctx->pc = 0x1be7a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1be7a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7ac: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1be7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1be7b0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BE7B0u;
    {
        const bool branch_taken_0x1be7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7B0u;
        // 0x1be7b4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7b0) {
            ctx->pc = 0x1BE7F8u;
            goto label_1be7f8;
        }
    }
    ctx->pc = 0x1BE7B8u;
    // 0x1be7b8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1be7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1be7bc: 0x0  nop
    ctx->pc = 0x1be7bcu;
    // NOP
label_1be7c0:
    // 0x1be7c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1be7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1be7c4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1be7c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1be7c8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE7C8u;
    {
        const bool branch_taken_0x1be7c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7C8u;
        // 0x1be7cc: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7c8) {
            ctx->pc = 0x1BE7DCu;
            goto label_1be7dc;
        }
    }
    ctx->pc = 0x1BE7D0u;
    // 0x1be7d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1be7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be7d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE7D4u;
    {
        const bool branch_taken_0x1be7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7D4u;
        // 0x1be7d8: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7d4) {
            ctx->pc = 0x1BE7ECu;
            goto label_1be7ec;
        }
    }
    ctx->pc = 0x1BE7DCu;
label_1be7dc:
    // 0x1be7dc: 0x0  nop
    ctx->pc = 0x1be7dcu;
    // NOP
    // 0x1be7e0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1be7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1be7e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1be7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1be7e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be7ec:
    // 0x1be7ec: 0x0  nop
    ctx->pc = 0x1be7ecu;
    // NOP
    // 0x1be7f0: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1BE7F0u;
    {
        const bool branch_taken_0x1be7f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be7f0) {
            ctx->pc = 0x1BE7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be7c0;
        }
    }
    ctx->pc = 0x1BE7F8u;
label_1be7f8:
    // 0x1be7f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1be7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7fc: 0xc06fa10  jal         func_1BE840
    ctx->pc = 0x1BE7FCu;
    SET_GPR_U32(ctx, 31, 0x1BE804u);
    ctx->pc = 0x1BE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE7FCu;
    // 0x1be800: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE840u, 0x1BE7FCu, 0x1BE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE804u;
label_1be804:
    // 0x1be804: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1be804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1be808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be810: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE810u;
        // 0x1be814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE818u;
}
