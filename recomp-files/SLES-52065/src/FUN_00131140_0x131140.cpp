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

// Function: FUN_00131140
// Address: 0x131140 - 0x1312a8
void FUN_00131140_0x131140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131140_0x131140");
#endif

    switch (ctx->pc) {
        case 0x131198u: goto label_131198;
        case 0x1311b8u: goto label_1311b8;
        case 0x1311c0u: goto label_1311c0;
        case 0x1311e4u: goto label_1311e4;
        case 0x1311fcu: goto label_1311fc;
        case 0x13126cu: goto label_13126c;
        case 0x131274u: goto label_131274;
        case 0x13127cu: goto label_13127c;
        default: break;
    }

    ctx->pc = 0x131140u;

    // 0x131140: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x131140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x131144: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x131144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x131148: 0x27a3009c  addiu       $v1, $sp, 0x9C
    ctx->pc = 0x131148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x13114c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x131150: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x131150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x131154: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x131154u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x131158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13115c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13115cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x131160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x131160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x131164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131168: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x131168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13116c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13116cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131170: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x131170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131174: 0x93828518  lbu         $v0, -0x7AE8($gp)
    ctx->pc = 0x131174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935832)));
    // 0x131178: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x131178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x13117c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x13117cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131180: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x131180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x131184: 0x26340004  addiu       $s4, $s1, 0x4
    ctx->pc = 0x131184u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x131188: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x131188u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13118c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x13118cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131190: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x131190u;
    SET_GPR_U32(ctx, 31, 0x131198u);
    ctx->pc = 0x131194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131190u;
    // 0x131194: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x131190u, 0x131198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131198u;
label_131198:
    // 0x131198: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x131198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13119c: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x13119Cu;
    {
        const bool branch_taken_0x13119c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1311A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13119Cu;
        // 0x1311a0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13119c) {
            ctx->pc = 0x1311C0u;
            goto label_1311c0;
        }
    }
    ctx->pc = 0x1311A4u;
    // 0x1311a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1311a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1311a8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1311a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1311ac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1311acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1311b0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1311B0u;
    SET_GPR_U32(ctx, 31, 0x1311B8u);
    ctx->pc = 0x1311B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1311B0u;
    // 0x1311b4: 0x24a5ede0  addiu       $a1, $a1, -0x1220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1311B0u, 0x1311B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311B8u;
label_1311b8:
    // 0x1311b8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1311B8u;
    SET_GPR_U32(ctx, 31, 0x1311C0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1311B8u, 0x1311C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311C0u;
label_1311c0:
    // 0x1311c0: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x1311c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1311c4: 0x27b5008c  addiu       $s5, $sp, 0x8C
    ctx->pc = 0x1311c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1311c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1311c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1311cc: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1311ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1311d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1311d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311d4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1311d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1311d8: 0xafb30098  sw          $s3, 0x98($sp)
    ctx->pc = 0x1311d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 19));
    // 0x1311dc: 0xc04c4b4  jal         func_1312D0
    ctx->pc = 0x1311DCu;
    SET_GPR_U32(ctx, 31, 0x1311E4u);
    ctx->pc = 0x1311E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1311DCu;
    // 0x1311e0: 0xafb40088  sw          $s4, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312D0u, 0x1311DCu, 0x1311E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311E4u;
label_1311e4:
    // 0x1311e4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1311e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1311e8: 0x24470008  addiu       $a3, $v0, 0x8
    ctx->pc = 0x1311e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1311ec: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1311ECu;
    {
        const bool branch_taken_0x1311ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1311F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311ECu;
        // 0x1311f0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311ec) {
            ctx->pc = 0x131224u;
            goto label_131224;
        }
    }
    ctx->pc = 0x1311F4u;
    // 0x1311f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1311f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311f8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1311f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1311fc:
    // 0x1311fc: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1311fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x131200: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x131200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x131204: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x131204u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x131208: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x131208u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13120c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x13120cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x131210: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x131210u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131214: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x131214u;
    {
        const bool branch_taken_0x131214 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x131218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131214u;
        // 0x131218: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131214) {
            ctx->pc = 0x1311FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1311fc;
        }
    }
    ctx->pc = 0x13121Cu;
    // 0x13121c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x13121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x131220: 0xace20040  sw          $v0, 0x40($a3)
    ctx->pc = 0x131220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 2));
label_131224:
    // 0x131224: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x131224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x131228: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x131228u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x13122c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x13122cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x131230: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x131230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131234: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x131234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x131238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x131238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13123c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13123cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x131240: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x131240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x131244: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x131244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x131248: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x131248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13124c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13124cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131250: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x131250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x131254: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x131254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x131258: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x131258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13125c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13125Cu;
    {
        const bool branch_taken_0x13125c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13125Cu;
        // 0x131260: 0x27a40088  addiu       $a0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13125c) {
            ctx->pc = 0x13127Cu;
            goto label_13127c;
        }
    }
    ctx->pc = 0x131264u;
    // 0x131264: 0xc04c4b0  jal         func_1312C0
    ctx->pc = 0x131264u;
    SET_GPR_U32(ctx, 31, 0x13126Cu);
    ctx->pc = 0x1312C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312C0u, 0x131264u, 0x13126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13126Cu;
label_13126c:
    // 0x13126c: 0xc04c4ac  jal         func_1312B0
    ctx->pc = 0x13126Cu;
    SET_GPR_U32(ctx, 31, 0x131274u);
    ctx->pc = 0x131270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13126Cu;
    // 0x131270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312B0u, 0x13126Cu, 0x131274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131274u;
label_131274:
    // 0x131274: 0xc0401a4  jal         func_100690
    ctx->pc = 0x131274u;
    SET_GPR_U32(ctx, 31, 0x13127Cu);
    ctx->pc = 0x131278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131274u;
    // 0x131278: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x131274u, 0x13127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13127Cu;
label_13127c:
    // 0x13127c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13127cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x131280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x131280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131284: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x131284u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131288: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x131288u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13128c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13128cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131290: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x131290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13129c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13129cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1312a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1312A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1312A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312A0u;
        // 0x1312a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1312A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1312A8u;
}
