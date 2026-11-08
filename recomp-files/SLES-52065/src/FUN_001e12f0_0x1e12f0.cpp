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

// Function: FUN_001e12f0
// Address: 0x1e12f0 - 0x1e1344
void FUN_001e12f0_0x1e12f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e12f0_0x1e12f0");
#endif

    switch (ctx->pc) {
        case 0x1e1304u: goto label_1e1304;
        case 0x1e1328u: goto label_1e1328;
        case 0x1e1330u: goto label_1e1330;
        default: break;
    }

    ctx->pc = 0x1e12f0u;

    // 0x1e12f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e12f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e12f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e12f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e12f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e12f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e12fc: 0xc07837a  jal         func_1E0DE8
    ctx->pc = 0x1E12FCu;
    SET_GPR_U32(ctx, 31, 0x1E1304u);
    ctx->pc = 0x1E1300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E12FCu;
    // 0x1e1300: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0DE8u, 0x1E12FCu, 0x1E1304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1304u;
label_1e1304:
    // 0x1e1304: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1304u;
    {
        const bool branch_taken_0x1e1304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1304u;
        // 0x1e1308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1304) {
            ctx->pc = 0x1E1320u;
            goto label_1e1320;
        }
    }
    ctx->pc = 0x1E130Cu;
    // 0x1e130c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e130cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1310: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e1310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1314: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1318: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1318u;
        // 0x1e131c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1320u;
label_1e1320:
    // 0x1e1320: 0xc077cbc  jal         func_1DF2F0
    ctx->pc = 0x1E1320u;
    SET_GPR_U32(ctx, 31, 0x1E1328u);
    ctx->pc = 0x1DF2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF2F0u, 0x1E1320u, 0x1E1328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1328u;
label_1e1328:
    // 0x1e1328: 0xc07657c  jal         func_1D95F0
    ctx->pc = 0x1E1328u;
    SET_GPR_U32(ctx, 31, 0x1E1330u);
    ctx->pc = 0x1E132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1328u;
    // 0x1e132c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95F0u, 0x1E1328u, 0x1E1330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1330u;
label_1e1330:
    // 0x1e1330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1334: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e133c: 0x80784d2  j           func_1E1348
    ctx->pc = 0x1E133Cu;
    ctx->pc = 0x1E1340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E133Cu;
    // 0x1e1340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1348u;
    FUN_001e1348_0x1e1348(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1344u;
}
