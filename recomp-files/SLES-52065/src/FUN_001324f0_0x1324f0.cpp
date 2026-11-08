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

// Function: FUN_001324f0
// Address: 0x1324f0 - 0x132630
void FUN_001324f0_0x1324f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001324f0_0x1324f0");
#endif

    switch (ctx->pc) {
        case 0x132548u: goto label_132548;
        case 0x132568u: goto label_132568;
        case 0x132570u: goto label_132570;
        case 0x132594u: goto label_132594;
        case 0x1325f4u: goto label_1325f4;
        case 0x1325fcu: goto label_1325fc;
        case 0x132604u: goto label_132604;
        default: break;
    }

    ctx->pc = 0x1324f0u;

    // 0x1324f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1324f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1324f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1324f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1324f8: 0x27a3009c  addiu       $v1, $sp, 0x9C
    ctx->pc = 0x1324f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1324fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1324fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x132500: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x132500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x132504: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x132504u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132508: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x132508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13250c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x132510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x132510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x132514: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x132514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132518: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x132518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13251c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132520: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x132520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132524: 0x93828520  lbu         $v0, -0x7AE0($gp)
    ctx->pc = 0x132524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935840)));
    // 0x132528: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x132528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x13252c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13252cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132530: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x132530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x132534: 0x26340004  addiu       $s4, $s1, 0x4
    ctx->pc = 0x132534u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x132538: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x132538u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13253c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x13253cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x132540: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x132540u;
    SET_GPR_U32(ctx, 31, 0x132548u);
    ctx->pc = 0x132544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132540u;
    // 0x132544: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x132540u, 0x132548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132548u;
label_132548:
    // 0x132548: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x132548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13254c: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x13254Cu;
    {
        const bool branch_taken_0x13254c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x132550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13254Cu;
        // 0x132550: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13254c) {
            ctx->pc = 0x132570u;
            goto label_132570;
        }
    }
    ctx->pc = 0x132554u;
    // 0x132554: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x132554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x132558: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x132558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13255c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13255cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x132560: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x132560u;
    SET_GPR_U32(ctx, 31, 0x132568u);
    ctx->pc = 0x132564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132560u;
    // 0x132564: 0x24a5ee10  addiu       $a1, $a1, -0x11F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x132560u, 0x132568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132568u;
label_132568:
    // 0x132568: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x132568u;
    SET_GPR_U32(ctx, 31, 0x132570u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x132568u, 0x132570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132570u;
label_132570:
    // 0x132570: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x132570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x132574: 0x27b5008c  addiu       $s5, $sp, 0x8C
    ctx->pc = 0x132574u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x132578: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x132578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13257c: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x13257cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x132580: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x132580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132584: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x132584u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x132588: 0xafb30098  sw          $s3, 0x98($sp)
    ctx->pc = 0x132588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 19));
    // 0x13258c: 0xc04c994  jal         func_132650
    ctx->pc = 0x13258Cu;
    SET_GPR_U32(ctx, 31, 0x132594u);
    ctx->pc = 0x132590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13258Cu;
    // 0x132590: 0xafb40088  sw          $s4, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132650u, 0x13258Cu, 0x132594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132594u;
label_132594:
    // 0x132594: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x132594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x132598: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x132598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13259c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13259Cu;
    {
        const bool branch_taken_0x13259c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13259c) {
            ctx->pc = 0x1325ACu;
            goto label_1325ac;
        }
    }
    ctx->pc = 0x1325A4u;
    // 0x1325a4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1325a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1325a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1325a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1325ac:
    // 0x1325ac: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1325acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1325b0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1325b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1325b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1325b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1325b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1325b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1325bc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1325bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1325c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1325c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1325c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1325c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1325c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1325c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1325cc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1325ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1325d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1325d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1325d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1325d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1325d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1325d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1325dc: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1325dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1325e0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1325e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1325e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1325E4u;
    {
        const bool branch_taken_0x1325e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1325E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325E4u;
        // 0x1325e8: 0x27a40088  addiu       $a0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325e4) {
            ctx->pc = 0x132604u;
            goto label_132604;
        }
    }
    ctx->pc = 0x1325ECu;
    // 0x1325ec: 0xc04c990  jal         func_132640
    ctx->pc = 0x1325ECu;
    SET_GPR_U32(ctx, 31, 0x1325F4u);
    ctx->pc = 0x132640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132640u, 0x1325ECu, 0x1325F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325F4u;
label_1325f4:
    // 0x1325f4: 0xc04c98c  jal         func_132630
    ctx->pc = 0x1325F4u;
    SET_GPR_U32(ctx, 31, 0x1325FCu);
    ctx->pc = 0x1325F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1325F4u;
    // 0x1325f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132630u, 0x1325F4u, 0x1325FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325FCu;
label_1325fc:
    // 0x1325fc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1325FCu;
    SET_GPR_U32(ctx, 31, 0x132604u);
    ctx->pc = 0x132600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1325FCu;
    // 0x132600: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1325FCu, 0x132604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132604u;
label_132604:
    // 0x132604: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x132604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x132608: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13260c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13260cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x132610: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x132610u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132614: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x132614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132618: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x132618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13261c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13261cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132628: 0x3e00008  jr          $ra
    ctx->pc = 0x132628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132628u;
        // 0x13262c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132630u;
}
