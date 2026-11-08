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

// Function: FUN_001d4528
// Address: 0x1d4528 - 0x1d458c
void FUN_001d4528_0x1d4528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4528_0x1d4528");
#endif

    switch (ctx->pc) {
        case 0x1d4540u: goto label_1d4540;
        case 0x1d4570u: goto label_1d4570;
        default: break;
    }

    ctx->pc = 0x1d4528u;

    // 0x1d4528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d4528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d452c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d452cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4534: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d4534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4538: 0xdc8700a0  ld          $a3, 0xA0($a0)
    ctx->pc = 0x1d4538u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1d453c: 0x0  nop
    ctx->pc = 0x1d453cu;
    // NOP
label_1d4540:
    // 0x1d4540: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x1d4540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1d4544: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d4544u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d4548: 0x64c60001  daddiu      $a2, $a2, 0x1
    ctx->pc = 0x1d4548u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x1d454c: 0x881014  dsllv       $v0, $t0, $a0
    ctx->pc = 0x1d454cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1d4550: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1d4550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1d4554: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4554u;
    {
        const bool branch_taken_0x1d4554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4554u;
        // 0x1d4558: 0x2cc30030  sltiu       $v1, $a2, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4554) {
            ctx->pc = 0x1D4578u;
            goto label_1d4578;
        }
    }
    ctx->pc = 0x1D455Cu;
    // 0x1d455c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d455cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d4560: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4560u;
    {
        const bool branch_taken_0x1d4560 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1d4560) {
            ctx->pc = 0x1D4578u;
            goto label_1d4578;
        }
    }
    ctx->pc = 0x1D4568u;
    // 0x1d4568: 0xc0782e6  jal         func_1E0B98
    ctx->pc = 0x1D4568u;
    SET_GPR_U32(ctx, 31, 0x1D4570u);
    ctx->pc = 0x1E0B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0B98u, 0x1D4568u, 0x1D4570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4570u;
label_1d4570:
    // 0x1d4570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4570u;
    {
        const bool branch_taken_0x1d4570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4570u;
        // 0x1d4574: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4570) {
            ctx->pc = 0x1D4584u;
            goto label_1d4584;
        }
    }
    ctx->pc = 0x1D4578u;
label_1d4578:
    // 0x1d4578: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1D4578u;
    {
        const bool branch_taken_0x1d4578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4578u;
        // 0x1d457c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4578) {
            ctx->pc = 0x1D4540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4540;
        }
    }
    ctx->pc = 0x1D4580u;
    // 0x1d4580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4584:
    // 0x1d4584: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4584u;
        // 0x1d4588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D458Cu;
}
