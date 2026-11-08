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

// Function: FUN_001ec3f8
// Address: 0x1ec3f8 - 0x1ec4cc
void FUN_001ec3f8_0x1ec3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec3f8_0x1ec3f8");
#endif

    switch (ctx->pc) {
        case 0x1ec428u: goto label_1ec428;
        case 0x1ec46cu: goto label_1ec46c;
        case 0x1ec480u: goto label_1ec480;
        case 0x1ec4a0u: goto label_1ec4a0;
        case 0x1ec4a8u: goto label_1ec4a8;
        case 0x1ec4b4u: goto label_1ec4b4;
        default: break;
    }

    ctx->pc = 0x1ec3f8u;

    // 0x1ec3f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ec3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ec3fc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1ec3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1ec400: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1ec400u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1ec404: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ec404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ec408: 0x8e02a3b8  lw          $v0, -0x5C48($s0)
    ctx->pc = 0x1ec408u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A3B8u));
    // 0x1ec40c: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EC40Cu;
    {
        const bool branch_taken_0x1ec40c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1EC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC40Cu;
        // 0x1ec410: 0xffb10060  sd          $s1, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec40c) {
            ctx->pc = 0x1EC480u;
            goto label_1ec480;
        }
    }
    ctx->pc = 0x1EC414u;
    // 0x1ec414: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ec414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ec418: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1ec418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1ec41c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1ec41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1ec420: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EC420u;
    SET_GPR_U32(ctx, 31, 0x1EC428u);
    ctx->pc = 0x1EC424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC420u;
    // 0x1ec424: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EC420u, 0x1EC428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC428u;
label_1ec428:
    // 0x1ec428: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1ec428u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1ec42c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EC42Cu;
    {
        const bool branch_taken_0x1ec42c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC42Cu;
        // 0x1ec430: 0xae22be50  sw          $v0, -0x41B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294950480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec42c) {
            ctx->pc = 0x1EC480u;
            goto label_1ec480;
        }
    }
    ctx->pc = 0x1EC434u;
    // 0x1ec434: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ec434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ec438: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ec438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ec43c: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x1ec43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x1ec440: 0x2442c320  addiu       $v0, $v0, -0x3CE0
    ctx->pc = 0x1ec440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951712));
    // 0x1ec444: 0x2463ba50  addiu       $v1, $v1, -0x45B0
    ctx->pc = 0x1ec444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949456));
    // 0x1ec448: 0x24a54370  addiu       $a1, $a1, 0x4370
    ctx->pc = 0x1ec448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17264));
    // 0x1ec44c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1ec44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1ec450: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1ec450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1ec454: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1ec454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1ec458: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ec458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec45c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1ec45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1ec460: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1ec460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1ec464: 0xc07ad08  jal         func_1EB420
    ctx->pc = 0x1EC464u;
    SET_GPR_U32(ctx, 31, 0x1EC46Cu);
    ctx->pc = 0x1EC468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC464u;
    // 0x1ec468: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB420u, 0x1EC464u, 0x1EC46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC46Cu;
label_1ec46c:
    // 0x1ec46c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ec46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec470: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC470u;
    {
        const bool branch_taken_0x1ec470 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1EC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC470u;
        // 0x1ec474: 0xae04a3b8  sw          $a0, -0x5C48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943672), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec470) {
            ctx->pc = 0x1EC488u;
            goto label_1ec488;
        }
    }
    ctx->pc = 0x1EC478u;
    // 0x1ec478: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EC478u;
    SET_GPR_U32(ctx, 31, 0x1EC480u);
    ctx->pc = 0x1EC47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC478u;
    // 0x1ec47c: 0x8e24be50  lw          $a0, -0x41B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EC478u, 0x1EC480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC480u;
label_1ec480:
    // 0x1ec480: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1EC480u;
    {
        const bool branch_taken_0x1ec480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC480u;
        // 0x1ec484: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec480) {
            ctx->pc = 0x1EC4B8u;
            goto label_1ec4b8;
        }
    }
    ctx->pc = 0x1EC488u;
label_1ec488:
    // 0x1ec488: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ec488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ec48c: 0x2443be58  addiu       $v1, $v0, -0x41A8
    ctx->pc = 0x1ec48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950488));
    // 0x1ec490: 0xac40be58  sw          $zero, -0x41A8($v0)
    ctx->pc = 0x1ec490u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38BE58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38BE58u, _value); } while (0);
    // 0x1ec494: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1ec494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec498: 0xc07ad10  jal         func_1EB440
    ctx->pc = 0x1EC498u;
    SET_GPR_U32(ctx, 31, 0x1EC4A0u);
    ctx->pc = 0x1EC49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC498u;
    // 0x1ec49c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB440u, 0x1EC498u, 0x1EC4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4A0u;
label_1ec4a0:
    // 0x1ec4a0: 0xc07ad44  jal         func_1EB510
    ctx->pc = 0x1EC4A0u;
    SET_GPR_U32(ctx, 31, 0x1EC4A8u);
    ctx->pc = 0x1EB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB510u, 0x1EC4A0u, 0x1EC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4A8u;
label_1ec4a8:
    // 0x1ec4a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ec4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4ac: 0xc07ad2c  jal         func_1EB4B0
    ctx->pc = 0x1EC4ACu;
    SET_GPR_U32(ctx, 31, 0x1EC4B4u);
    ctx->pc = 0x1EC4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC4ACu;
    // 0x1ec4b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB4B0u, 0x1EC4ACu, 0x1EC4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4B4u;
label_1ec4b4:
    // 0x1ec4b4: 0x8e02a3b8  lw          $v0, -0x5C48($s0)
    ctx->pc = 0x1ec4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943672)));
label_1ec4b8:
    // 0x1ec4b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ec4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ec4bc: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1ec4bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec4c0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1ec4c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4C4u;
        // 0x1ec4c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC4CCu;
}
