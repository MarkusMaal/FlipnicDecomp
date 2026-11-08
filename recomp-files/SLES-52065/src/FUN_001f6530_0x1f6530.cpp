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

// Function: FUN_001f6530
// Address: 0x1f6530 - 0x1f65e4
void FUN_001f6530_0x1f6530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6530_0x1f6530");
#endif

    switch (ctx->pc) {
        case 0x1f6598u: goto label_1f6598;
        case 0x1f65c4u: goto label_1f65c4;
        default: break;
    }

    ctx->pc = 0x1f6530u;

    // 0x1f6530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f6530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f6534: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f6534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f6538: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f6538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f653c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f6540: 0x247012c0  addiu       $s0, $v1, 0x12C0
    ctx->pc = 0x1f6540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1f6544: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f6544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f6548: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f6548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f654c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f654cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6550: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f6550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f6554: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f6554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6558: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x1f6558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3912CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912CCu, _value); } while (0);
    // 0x1f655c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f655cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f6560: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x1f6560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3912D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912D0u, _value); } while (0);
    // 0x1f6564: 0x24841080  addiu       $a0, $a0, 0x1080
    ctx->pc = 0x1f6564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4224));
    // 0x1f6568: 0xac6212c0  sw          $v0, 0x12C0($v1)
    ctx->pc = 0x1f6568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3912C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C0u, _value); } while (0);
    // 0x1f656c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f656cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6570: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1f6570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3912C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C4u, _value); } while (0);
    // 0x1f6574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6578: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1f6578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3912C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C8u, _value); } while (0);
    // 0x1f657c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f657cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6580: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f6580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f6584: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6588: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f6588u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f658c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f658cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6590: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F6590u;
    SET_GPR_U32(ctx, 31, 0x1F6598u);
    ctx->pc = 0x1F6594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6590u;
    // 0x1f6594: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F6590u, 0x1F6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6598u;
label_1f6598:
    // 0x1f6598: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6598u;
    {
        const bool branch_taken_0x1f6598 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f6598) {
            ctx->pc = 0x1F659Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6598u;
            // 0x1f659c: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F65A8u;
            goto label_1f65a8;
        }
    }
    ctx->pc = 0x1F65A0u;
    // 0x1f65a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F65A0u;
    {
        const bool branch_taken_0x1f65a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65A0u;
        // 0x1f65a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65a0) {
            ctx->pc = 0x1F65CCu;
            goto label_1f65cc;
        }
    }
    ctx->pc = 0x1F65A8u;
label_1f65a8:
    // 0x1f65a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f65ac: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F65ACu;
    {
        const bool branch_taken_0x1f65ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65ACu;
        // 0x1f65b0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65ac) {
            ctx->pc = 0x1F65CCu;
            goto label_1f65cc;
        }
    }
    ctx->pc = 0x1F65B4u;
    // 0x1f65b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f65b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f65b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f65b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f65bc: 0xc07d832  jal         func_1F60C8
    ctx->pc = 0x1F65BCu;
    SET_GPR_U32(ctx, 31, 0x1F65C4u);
    ctx->pc = 0x1F65C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F65BCu;
    // 0x1f65c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F60C8u, 0x1F65BCu, 0x1F65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F65C4u;
label_1f65c4:
    // 0x1f65c4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1f65c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f65c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f65c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f65cc:
    // 0x1f65cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f65ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f65d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f65d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f65d4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f65d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f65d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f65d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f65dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F65DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F65E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65DCu;
        // 0x1f65e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F65DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F65E4u;
}
