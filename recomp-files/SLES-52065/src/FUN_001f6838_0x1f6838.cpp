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

// Function: FUN_001f6838
// Address: 0x1f6838 - 0x1f68e8
void FUN_001f6838_0x1f6838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6838_0x1f6838");
#endif

    switch (ctx->pc) {
        case 0x1f689cu: goto label_1f689c;
        case 0x1f68c8u: goto label_1f68c8;
        default: break;
    }

    ctx->pc = 0x1f6838u;

    // 0x1f6838: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f6838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f683c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f683cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f6840: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f6840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f6844: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f6844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f6848: 0x245012c0  addiu       $s0, $v0, 0x12C0
    ctx->pc = 0x1f6848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1f684c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f684cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f6850: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f6850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f6854: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f6854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f6858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f685c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f685cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6860: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x1f6860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3912CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912CCu, _value); } while (0);
    // 0x1f6864: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f6864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f6868: 0xac4312c0  sw          $v1, 0x12C0($v0)
    ctx->pc = 0x1f6868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3912C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C0u, _value); } while (0);
    // 0x1f686c: 0x24841080  addiu       $a0, $a0, 0x1080
    ctx->pc = 0x1f686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4224));
    // 0x1f6870: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1f6870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3912C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C4u, _value); } while (0);
    // 0x1f6874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f6874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6878: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1f6878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3912C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C8u, _value); } while (0);
    // 0x1f687c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f687cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6880: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f6880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f6884: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f6884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6888: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f688c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f688cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6890: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f6890u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6894: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F6894u;
    SET_GPR_U32(ctx, 31, 0x1F689Cu);
    ctx->pc = 0x1F6898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6894u;
    // 0x1f6898: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F6894u, 0x1F689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F689Cu;
label_1f689c:
    // 0x1f689c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F689Cu;
    {
        const bool branch_taken_0x1f689c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f689c) {
            ctx->pc = 0x1F68A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F689Cu;
            // 0x1f68a0: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F68ACu;
            goto label_1f68ac;
        }
    }
    ctx->pc = 0x1F68A4u;
    // 0x1f68a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F68A4u;
    {
        const bool branch_taken_0x1f68a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68A4u;
        // 0x1f68a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68a4) {
            ctx->pc = 0x1F68D0u;
            goto label_1f68d0;
        }
    }
    ctx->pc = 0x1F68ACu;
label_1f68ac:
    // 0x1f68ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f68acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f68b0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F68B0u;
    {
        const bool branch_taken_0x1f68b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F68B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68B0u;
        // 0x1f68b4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68b0) {
            ctx->pc = 0x1F68D0u;
            goto label_1f68d0;
        }
    }
    ctx->pc = 0x1F68B8u;
    // 0x1f68b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f68b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f68bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68c0: 0xc07d832  jal         func_1F60C8
    ctx->pc = 0x1F68C0u;
    SET_GPR_U32(ctx, 31, 0x1F68C8u);
    ctx->pc = 0x1F68C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68C0u;
    // 0x1f68c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F60C8u, 0x1F68C0u, 0x1F68C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68C8u;
label_1f68c8:
    // 0x1f68c8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f68c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f68cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f68ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f68d0:
    // 0x1f68d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f68d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f68d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f68d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f68d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f68d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f68dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f68dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f68e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F68E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68E0u;
        // 0x1f68e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F68E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F68E8u;
}
