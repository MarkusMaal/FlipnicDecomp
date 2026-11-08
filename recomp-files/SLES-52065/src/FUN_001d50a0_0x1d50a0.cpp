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

// Function: FUN_001d50a0
// Address: 0x1d50a0 - 0x1d5118
void FUN_001d50a0_0x1d50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d50a0_0x1d50a0");
#endif

    switch (ctx->pc) {
        case 0x1d50d4u: goto label_1d50d4;
        case 0x1d50e8u: goto label_1d50e8;
        case 0x1d50f8u: goto label_1d50f8;
        default: break;
    }

    ctx->pc = 0x1d50a0u;

    // 0x1d50a0: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d50a4: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d50a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d50a8: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1d50a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d50ac: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1d50acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1d50b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d50b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d50b4: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1d50b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1d50b8: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1d50b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1d50bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d50bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d50c0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d50c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d50c4: 0x8ca5055c  lw          $a1, 0x55C($a1)
    ctx->pc = 0x1d50c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1372)));
    // 0x1d50c8: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1d50c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1d50cc: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D50CCu;
    SET_GPR_U32(ctx, 31, 0x1D50D4u);
    ctx->pc = 0x1D50D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D50CCu;
    // 0x1d50d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D50CCu, 0x1D50D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50D4u;
label_1d50d4:
    // 0x1d50d4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d50d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d50d8: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D50D8u;
    {
        const bool branch_taken_0x1d50d8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50D8u;
        // 0x1d50dc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50d8) {
            ctx->pc = 0x1D5100u;
            goto label_1d5100;
        }
    }
    ctx->pc = 0x1D50E0u;
    // 0x1d50e0: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d50e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d50e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d50e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d50e8:
    // 0x1d50e8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d50e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d50ec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d50ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d50f0: 0xc0773b8  jal         func_1DCEE0
    ctx->pc = 0x1D50F0u;
    SET_GPR_U32(ctx, 31, 0x1D50F8u);
    ctx->pc = 0x1D50F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D50F0u;
    // 0x1d50f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCEE0u, 0x1D50F0u, 0x1D50F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50F8u;
label_1d50f8:
    // 0x1d50f8: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D50F8u;
    {
        const bool branch_taken_0x1d50f8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d50f8) {
            ctx->pc = 0x1D50FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D50F8u;
            // 0x1d50fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D50E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d50e8;
        }
    }
    ctx->pc = 0x1D5100u;
label_1d5100:
    // 0x1d5100: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d5100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d5104: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d5104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d5108: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d5108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d510c: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d510cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d5110: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5110u;
        // 0x1d5114: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5118u;
}
