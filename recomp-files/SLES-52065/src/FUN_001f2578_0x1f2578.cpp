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

// Function: FUN_001f2578
// Address: 0x1f2578 - 0x1f2600
void FUN_001f2578_0x1f2578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2578_0x1f2578");
#endif

    switch (ctx->pc) {
        case 0x1f2590u: goto label_1f2590;
        case 0x1f2598u: goto label_1f2598;
        case 0x1f25ccu: goto label_1f25cc;
        default: break;
    }

    ctx->pc = 0x1f2578u;

    // 0x1f2578: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f257c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f257cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f2580: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f2580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f2584: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f2584u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1f2588: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F2588u;
    {
        const bool branch_taken_0x1f2588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2588u;
        // 0x1f258c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2588) {
            ctx->pc = 0x1F25B4u;
            goto label_1f25b4;
        }
    }
    ctx->pc = 0x1F2590u;
label_1f2590:
    // 0x1f2590: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f2590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1f2594: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f2594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f2598:
    // 0x1f2598: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f2598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f259c: 0x0  nop
    ctx->pc = 0x1f259cu;
    // NOP
    // 0x1f25a0: 0x0  nop
    ctx->pc = 0x1f25a0u;
    // NOP
    // 0x1f25a4: 0x0  nop
    ctx->pc = 0x1f25a4u;
    // NOP
    // 0x1f25a8: 0x0  nop
    ctx->pc = 0x1f25a8u;
    // NOP
    // 0x1f25ac: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F25ACu;
    {
        const bool branch_taken_0x1f25ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f25ac) {
            ctx->pc = 0x1F2598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2598;
        }
    }
    ctx->pc = 0x1F25B4u;
label_1f25b4:
    // 0x1f25b4: 0x2630f9c0  addiu       $s0, $s1, -0x640
    ctx->pc = 0x1f25b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965696));
    // 0x1f25b8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f25b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f25bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f25bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25c0: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x1f25c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x1f25c4: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F25C4u;
    SET_GPR_U32(ctx, 31, 0x1F25CCu);
    ctx->pc = 0x1F25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25C4u;
    // 0x1f25c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F25C4u, 0x1F25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25CCu;
label_1f25cc:
    // 0x1f25cc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F25CCu;
    {
        const bool branch_taken_0x1f25cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f25cc) {
            ctx->pc = 0x1F25D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F25CCu;
            // 0x1f25d0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F25DCu;
            goto label_1f25dc;
        }
    }
    ctx->pc = 0x1F25D4u;
    // 0x1f25d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F25D4u;
    {
        const bool branch_taken_0x1f25d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25D4u;
        // 0x1f25d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25d4) {
            ctx->pc = 0x1F25ECu;
            goto label_1f25ec;
        }
    }
    ctx->pc = 0x1F25DCu;
label_1f25dc:
    // 0x1f25dc: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F25DCu;
    {
        const bool branch_taken_0x1f25dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25DCu;
        // 0x1f25e0: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25dc) {
            ctx->pc = 0x1F2590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2590;
        }
    }
    ctx->pc = 0x1F25E4u;
    // 0x1f25e4: 0xac40a478  sw          $zero, -0x5B88($v0)
    ctx->pc = 0x1f25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943864), GPR_U32(ctx, 0));
    // 0x1f25e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f25e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f25ec:
    // 0x1f25ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f25ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f25f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f25f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f25f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f25f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f25f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F25F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25F8u;
        // 0x1f25fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F25F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2600u;
}
