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

// Function: FUN_001d44b0
// Address: 0x1d44b0 - 0x1d4528
void FUN_001d44b0_0x1d44b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d44b0_0x1d44b0");
#endif

    switch (ctx->pc) {
        case 0x1d44d0u: goto label_1d44d0;
        default: break;
    }

    ctx->pc = 0x1d44b0u;

    // 0x1d44b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d44b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d44b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d44b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d44b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d44bc: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x1d44bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1d44c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d44c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d44c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d44c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d44c8: 0xdc8900a0  ld          $t1, 0xA0($a0)
    ctx->pc = 0x1d44c8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1d44cc: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1d44ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1d44d0:
    // 0x1d44d0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1d44d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d44d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d44d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d44d8: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x1d44d8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x1d44dc: 0x471014  dsllv       $v0, $a3, $v0
    ctx->pc = 0x1d44dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x1d44e0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1d44e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1d44e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D44E4u;
    {
        const bool branch_taken_0x1d44e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44E4u;
        // 0x1d44e8: 0x2ca30030  sltiu       $v1, $a1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44e4) {
            ctx->pc = 0x1D44F0u;
            goto label_1d44f0;
        }
    }
    ctx->pc = 0x1D44ECu;
    // 0x1d44ec: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1d44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_1d44f0:
    // 0x1d44f0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D44F0u;
    {
        const bool branch_taken_0x1d44f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44F0u;
        // 0x1d44f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44f0) {
            ctx->pc = 0x1D44D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d44d0;
        }
    }
    ctx->pc = 0x1D44F8u;
    // 0x1d44f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d44fc: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d44fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d4500: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4500u;
    {
        const bool branch_taken_0x1d4500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4500u;
        // 0x1d4504: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4500) {
            ctx->pc = 0x1D4518u;
            goto label_1d4518;
        }
    }
    ctx->pc = 0x1D4508u;
    // 0x1d4508: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d4508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d450c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d450cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d4510: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4510u;
        // 0x1d4514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4518u;
label_1d4518:
    // 0x1d4518: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d4518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d451c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1d451cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4520: 0x80782d2  j           func_1E0B48
    ctx->pc = 0x1D4520u;
    ctx->pc = 0x1D4524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4520u;
    // 0x1d4524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0B48u;
    FUN_001e0b48_0x1e0b48(rdram, ctx, runtime); return;
    ctx->pc = 0x1D4528u;
}
