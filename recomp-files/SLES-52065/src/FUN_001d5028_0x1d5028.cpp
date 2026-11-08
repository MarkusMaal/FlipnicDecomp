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

// Function: FUN_001d5028
// Address: 0x1d5028 - 0x1d50a0
void FUN_001d5028_0x1d5028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d5028_0x1d5028");
#endif

    switch (ctx->pc) {
        case 0x1d505cu: goto label_1d505c;
        case 0x1d5070u: goto label_1d5070;
        case 0x1d5080u: goto label_1d5080;
        default: break;
    }

    ctx->pc = 0x1d5028u;

    // 0x1d5028: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d5028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d502c: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d502cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d5030: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1d5030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5034: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1d5034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1d5038: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d5038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d503c: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1d503cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1d5040: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1d5040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1d5044: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d5044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d5048: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d504c: 0x8ca5055c  lw          $a1, 0x55C($a1)
    ctx->pc = 0x1d504cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1372)));
    // 0x1d5050: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1d5050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1d5054: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5054u;
    SET_GPR_U32(ctx, 31, 0x1D505Cu);
    ctx->pc = 0x1D5058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5054u;
    // 0x1d5058: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5054u, 0x1D505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D505Cu;
label_1d505c:
    // 0x1d505c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d505cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5060: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5060u;
    {
        const bool branch_taken_0x1d5060 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5060u;
        // 0x1d5064: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5060) {
            ctx->pc = 0x1D5088u;
            goto label_1d5088;
        }
    }
    ctx->pc = 0x1D5068u;
    // 0x1d5068: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d5068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d506c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5070:
    // 0x1d5070: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d5070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d5074: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5078: 0xc0774c2  jal         func_1DD308
    ctx->pc = 0x1D5078u;
    SET_GPR_U32(ctx, 31, 0x1D5080u);
    ctx->pc = 0x1D507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5078u;
    // 0x1d507c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD308u, 0x1D5078u, 0x1D5080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5080u;
label_1d5080:
    // 0x1d5080: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5080u;
    {
        const bool branch_taken_0x1d5080 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5080) {
            ctx->pc = 0x1D5084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5080u;
            // 0x1d5084: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5070;
        }
    }
    ctx->pc = 0x1D5088u;
label_1d5088:
    // 0x1d5088: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d5088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d508c: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d508cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d5090: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d5090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d5094: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d5094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d5098: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5098u;
        // 0x1d509c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D50A0u;
}
