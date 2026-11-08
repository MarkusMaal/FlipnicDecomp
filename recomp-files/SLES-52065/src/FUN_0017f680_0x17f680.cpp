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

// Function: FUN_0017f680
// Address: 0x17f680 - 0x17f708
void FUN_0017f680_0x17f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f680_0x17f680");
#endif

    switch (ctx->pc) {
        case 0x17f6b0u: goto label_17f6b0;
        case 0x17f6f4u: goto label_17f6f4;
        default: break;
    }

    ctx->pc = 0x17f680u;

    // 0x17f680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f684: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x17f684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f68c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x17f68cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x17f690: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f694: 0x24a90004  addiu       $t1, $a1, 0x4
    ctx->pc = 0x17f694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x17f698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f69c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x17f69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17f6a0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17F6A0u;
    {
        const bool branch_taken_0x17f6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6A0u;
        // 0x17f6a4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6a0) {
            ctx->pc = 0x17F6E8u;
            goto label_17f6e8;
        }
    }
    ctx->pc = 0x17F6A8u;
    // 0x17f6a8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x17f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17f6ac: 0x0  nop
    ctx->pc = 0x17f6acu;
    // NOP
label_17f6b0:
    // 0x17f6b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f6b4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x17f6b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17f6b8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F6B8u;
    {
        const bool branch_taken_0x17f6b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6B8u;
        // 0x17f6bc: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6b8) {
            ctx->pc = 0x17F6CCu;
            goto label_17f6cc;
        }
    }
    ctx->pc = 0x17F6C0u;
    // 0x17f6c0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x17f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f6c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17F6C4u;
    {
        const bool branch_taken_0x17f6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6C4u;
        // 0x17f6c8: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6c4) {
            ctx->pc = 0x17F6DCu;
            goto label_17f6dc;
        }
    }
    ctx->pc = 0x17F6CCu;
label_17f6cc:
    // 0x17f6cc: 0x0  nop
    ctx->pc = 0x17f6ccu;
    // NOP
    // 0x17f6d0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x17f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17f6d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17f6d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f6dc:
    // 0x17f6dc: 0x0  nop
    ctx->pc = 0x17f6dcu;
    // NOP
    // 0x17f6e0: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17F6E0u;
    {
        const bool branch_taken_0x17f6e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f6e0) {
            ctx->pc = 0x17F6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f6b0;
        }
    }
    ctx->pc = 0x17F6E8u;
label_17f6e8:
    // 0x17f6e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17f6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6ec: 0xc05fde0  jal         func_17F780
    ctx->pc = 0x17F6ECu;
    SET_GPR_U32(ctx, 31, 0x17F6F4u);
    ctx->pc = 0x17F6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F6ECu;
    // 0x17f6f0: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F780u, 0x17F6ECu, 0x17F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F6F4u;
label_17f6f4:
    // 0x17f6f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17f6f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f700: 0x3e00008  jr          $ra
    ctx->pc = 0x17F700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F700u;
        // 0x17f704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F708u;
}
