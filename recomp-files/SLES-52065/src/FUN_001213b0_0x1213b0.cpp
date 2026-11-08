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

// Function: FUN_001213b0
// Address: 0x1213b0 - 0x121688
void FUN_001213b0_0x1213b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001213b0_0x1213b0");
#endif

    switch (ctx->pc) {
        case 0x121430u: goto label_121430;
        case 0x121438u: goto label_121438;
        case 0x1214a4u: goto label_1214a4;
        case 0x1214c8u: goto label_1214c8;
        case 0x121534u: goto label_121534;
        case 0x121574u: goto label_121574;
        case 0x121594u: goto label_121594;
        case 0x12159cu: goto label_12159c;
        case 0x1215b4u: goto label_1215b4;
        case 0x1215e8u: goto label_1215e8;
        case 0x121628u: goto label_121628;
        case 0x121650u: goto label_121650;
        default: break;
    }

    ctx->pc = 0x1213b0u;

    // 0x1213b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1213b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1213b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1213b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1213b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1213b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1213bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1213bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1213c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1213c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1213c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1213c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1213c8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1213c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1213ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1213d0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1213d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1213d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1213d8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1213d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1213dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1213e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1213e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1213e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1213e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1213e8: 0x12a0009b  beqz        $s5, . + 4 + (0x9B << 2)
    ctx->pc = 0x1213E8u;
    {
        const bool branch_taken_0x1213e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1213ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213E8u;
        // 0x1213ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213e8) {
            ctx->pc = 0x121658u;
            goto label_121658;
        }
    }
    ctx->pc = 0x1213F0u;
    // 0x1213f0: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x1213f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x1213f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1213f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1213f8: 0x75082b  sltu        $at, $v1, $s5
    ctx->pc = 0x1213f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1213fc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1213FCu;
    {
        const bool branch_taken_0x1213fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1213fc) {
            ctx->pc = 0x121418u;
            goto label_121418;
        }
    }
    ctx->pc = 0x121404u;
    // 0x121404: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x121404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x121408: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x121408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x12140c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x12140cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x121410: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x121410u;
    {
        const bool branch_taken_0x121410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x121410) {
            ctx->pc = 0x121438u;
            goto label_121438;
        }
    }
    ctx->pc = 0x121418u;
label_121418:
    // 0x121418: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x121418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x12141c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12141cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x121420: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x121420u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x121424: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x121424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x121428: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x121428u;
    SET_GPR_U32(ctx, 31, 0x121430u);
    ctx->pc = 0x12142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121428u;
    // 0x12142c: 0x24a5e950  addiu       $a1, $a1, -0x16B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x121428u, 0x121430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121430u;
label_121430:
    // 0x121430: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x121430u;
    SET_GPR_U32(ctx, 31, 0x121438u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x121430u, 0x121438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121438u;
label_121438:
    // 0x121438: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x121438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x12143c: 0x8ed30000  lw          $s3, 0x0($s6)
    ctx->pc = 0x12143cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x121440: 0x759021  addu        $s2, $v1, $s5
    ctx->pc = 0x121440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x121444: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x121444u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x121448: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x121448u;
    {
        const bool branch_taken_0x121448 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121448u;
        // 0x12144c: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121448) {
            ctx->pc = 0x1214F8u;
            goto label_1214f8;
        }
    }
    ctx->pc = 0x121450u;
    // 0x121450: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x121450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x121454: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x121454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x121458: 0xb01823  subu        $v1, $a1, $s0
    ctx->pc = 0x121458u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x12145c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12145Cu;
    {
        const bool branch_taken_0x12145c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x121460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12145Cu;
        // 0x121460: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12145c) {
            ctx->pc = 0x12146Cu;
            goto label_12146c;
        }
    }
    ctx->pc = 0x121464u;
    // 0x121464: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x121464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x121468: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x121468u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
label_12146c:
    // 0x12146c: 0x951823  subu        $v1, $a0, $s5
    ctx->pc = 0x12146cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x121470: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x121470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x121474: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x121474u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x121478: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x121478u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12147c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x12147Cu;
    {
        const bool branch_taken_0x12147c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x121480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12147Cu;
        // 0x121480: 0x285082b  sltu        $at, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12147c) {
            ctx->pc = 0x121490u;
            goto label_121490;
        }
    }
    ctx->pc = 0x121484u;
    // 0x121484: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x121484u;
    {
        const bool branch_taken_0x121484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x121488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121484u;
        // 0x121488: 0x151880  sll         $v1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121484) {
            ctx->pc = 0x121490u;
            goto label_121490;
        }
    }
    ctx->pc = 0x12148Cu;
    // 0x12148c: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x12148cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_121490:
    // 0x121490: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x121490u;
    {
        const bool branch_taken_0x121490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x121494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121490u;
        // 0x121494: 0x151880  sll         $v1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121490) {
            ctx->pc = 0x1214C0u;
            goto label_1214c0;
        }
    }
    ctx->pc = 0x121498u;
    // 0x121498: 0x205082b  sltu        $at, $s0, $a1
    ctx->pc = 0x121498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12149c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x12149Cu;
    {
        const bool branch_taken_0x12149c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12149Cu;
        // 0x1214a0: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12149c) {
            ctx->pc = 0x1214C0u;
            goto label_1214c0;
        }
    }
    ctx->pc = 0x1214A4u;
label_1214a4:
    // 0x1214a4: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x1214a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x1214a8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1214a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1214ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1214acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1214b0: 0x205082b  sltu        $at, $s0, $a1
    ctx->pc = 0x1214b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1214b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1214b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1214b8: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1214B8u;
    {
        const bool branch_taken_0x1214b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1214b8) {
            ctx->pc = 0x1214A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1214a4;
        }
    }
    ctx->pc = 0x1214C0u;
label_1214c0:
    // 0x1214c0: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1214C0u;
    {
        const bool branch_taken_0x1214c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214C0u;
        // 0x1214c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214c0) {
            ctx->pc = 0x1214E4u;
            goto label_1214e4;
        }
    }
    ctx->pc = 0x1214C8u;
label_1214c8:
    // 0x1214c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1214c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1214cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1214ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1214d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1214d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1214d4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1214d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1214d8: 0x0  nop
    ctx->pc = 0x1214d8u;
    // NOP
    // 0x1214dc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1214DCu;
    {
        const bool branch_taken_0x1214dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1214dc) {
            ctx->pc = 0x1214C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1214c8;
        }
    }
    ctx->pc = 0x1214E4u;
label_1214e4:
    // 0x1214e4: 0x0  nop
    ctx->pc = 0x1214e4u;
    // NOP
    // 0x1214e8: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x1214e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1214ec: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1214ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1214f0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1214F0u;
    {
        const bool branch_taken_0x1214f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214F0u;
        // 0x1214f4: 0xaec30004  sw          $v1, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214f0) {
            ctx->pc = 0x121658u;
            goto label_121658;
        }
    }
    ctx->pc = 0x1214F8u;
label_1214f8:
    // 0x1214f8: 0x8ed10008  lw          $s1, 0x8($s6)
    ctx->pc = 0x1214f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1214fc: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x1214fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x121500: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121500u;
    {
        const bool branch_taken_0x121500 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x121504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121500u;
        // 0x121504: 0x2f083  sra         $fp, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121500) {
            ctx->pc = 0x121510u;
            goto label_121510;
        }
    }
    ctx->pc = 0x121508u;
    // 0x121508: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x121508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x12150c: 0x2f083  sra         $fp, $v0, 2
    ctx->pc = 0x12150cu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 2));
label_121510:
    // 0x121510: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x121510u;
    {
        const bool branch_taken_0x121510 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x121510) {
            ctx->pc = 0x121520u;
            goto label_121520;
        }
    }
    ctx->pc = 0x121518u;
    // 0x121518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121518u;
    {
        const bool branch_taken_0x121518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121518u;
        // 0x12151c: 0x272082b  sltu        $at, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121518) {
            ctx->pc = 0x121528u;
            goto label_121528;
        }
    }
    ctx->pc = 0x121520u;
label_121520:
    // 0x121520: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x121520u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121524: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x121524u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_121528:
    // 0x121528: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x121528u;
    {
        const bool branch_taken_0x121528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121528u;
        // 0x12152c: 0x3c023fff  lui         $v0, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121528) {
            ctx->pc = 0x121564u;
            goto label_121564;
        }
    }
    ctx->pc = 0x121530u;
    // 0x121530: 0x3c011fff  lui         $at, 0x1FFF
    ctx->pc = 0x121530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
label_121534:
    // 0x121534: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x121534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x121538: 0x261082b  sltu        $at, $s3, $at
    ctx->pc = 0x121538u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x12153c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12153Cu;
    {
        const bool branch_taken_0x12153c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12153c) {
            ctx->pc = 0x12154Cu;
            goto label_12154c;
        }
    }
    ctx->pc = 0x121544u;
    // 0x121544: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121544u;
    {
        const bool branch_taken_0x121544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121544u;
        // 0x121548: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121544) {
            ctx->pc = 0x121554u;
            goto label_121554;
        }
    }
    ctx->pc = 0x12154Cu;
label_12154c:
    // 0x12154c: 0x0  nop
    ctx->pc = 0x12154cu;
    // NOP
    // 0x121550: 0x3453ffff  ori         $s3, $v0, 0xFFFF
    ctx->pc = 0x121550u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_121554:
    // 0x121554: 0x0  nop
    ctx->pc = 0x121554u;
    // NOP
    // 0x121558: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x121558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x12155c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x12155Cu;
    {
        const bool branch_taken_0x12155c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x121560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12155Cu;
        // 0x121560: 0x3c011fff  lui         $at, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12155c) {
            ctx->pc = 0x121534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121534;
        }
    }
    ctx->pc = 0x121564u;
label_121564:
    // 0x121564: 0x0  nop
    ctx->pc = 0x121564u;
    // NOP
    // 0x121568: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x121568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x12156c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x12156Cu;
    SET_GPR_U32(ctx, 31, 0x121574u);
    ctx->pc = 0x121570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12156Cu;
    // 0x121570: 0x26d00008  addiu       $s0, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12156Cu, 0x121574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121574u;
label_121574:
    // 0x121574: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x121574u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121578: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x121578u;
    {
        const bool branch_taken_0x121578 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x12157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121578u;
        // 0x12157c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121578) {
            ctx->pc = 0x12159Cu;
            goto label_12159c;
        }
    }
    ctx->pc = 0x121580u;
    // 0x121580: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x121580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x121584: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x121584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x121588: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x121588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12158c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12158Cu;
    SET_GPR_U32(ctx, 31, 0x121594u);
    ctx->pc = 0x121590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12158Cu;
    // 0x121590: 0x24a5e970  addiu       $a1, $a1, -0x1690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12158Cu, 0x121594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121594u;
label_121594:
    // 0x121594: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x121594u;
    SET_GPR_U32(ctx, 31, 0x12159Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x121594u, 0x12159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12159Cu;
label_12159c:
    // 0x12159c: 0xae170000  sw          $s7, 0x0($s0)
    ctx->pc = 0x12159cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
    // 0x1215a0: 0x1e3080  sll         $a2, $fp, 2
    ctx->pc = 0x1215a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1215a4: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x1215a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1215a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1215a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215ac: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1215ACu;
    {
        const bool branch_taken_0x1215ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1215B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215ACu;
        // 0x1215b0: 0x662021  addu        $a0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215ac) {
            ctx->pc = 0x1215D0u;
            goto label_1215d0;
        }
    }
    ctx->pc = 0x1215B4u;
label_1215b4:
    // 0x1215b4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1215b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1215b8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1215b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1215bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1215bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1215c0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1215c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1215c4: 0x0  nop
    ctx->pc = 0x1215c4u;
    // NOP
    // 0x1215c8: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1215C8u;
    {
        const bool branch_taken_0x1215c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1215c8) {
            ctx->pc = 0x1215B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1215b4;
        }
    }
    ctx->pc = 0x1215D0u;
label_1215d0:
    // 0x1215d0: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1215D0u;
    {
        const bool branch_taken_0x1215d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1215d0) {
            ctx->pc = 0x121650u;
            goto label_121650;
        }
    }
    ctx->pc = 0x1215D8u;
    // 0x1215d8: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x1215d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1215dc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1215dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1215E0u;
    {
        const bool branch_taken_0x1215e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1215E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215E0u;
        // 0x1215e4: 0x2262821  addu        $a1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215e0) {
            ctx->pc = 0x1215F8u;
            goto label_1215f8;
        }
    }
    ctx->pc = 0x1215E8u;
label_1215e8:
    // 0x1215e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1215e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1215ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1215ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1215f0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1215f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1215f4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1215f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1215f8:
    // 0x1215f8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1215f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1215fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1215FCu;
    {
        const bool branch_taken_0x1215fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1215fc) {
            ctx->pc = 0x1215E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1215e8;
        }
    }
    ctx->pc = 0x121604u;
    // 0x121604: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x121604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x121608: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x121608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x12160c: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x12160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x121610: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x121610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x121614: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x121614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x121618: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x121618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12161c: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x12161cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x121620: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x121620u;
    {
        const bool branch_taken_0x121620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x121624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121620u;
        // 0x121624: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121620) {
            ctx->pc = 0x121644u;
            goto label_121644;
        }
    }
    ctx->pc = 0x121628u;
label_121628:
    // 0x121628: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x121628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12162c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12162cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x121630: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x121630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x121634: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x121634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x121638: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x121638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x12163c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12163Cu;
    {
        const bool branch_taken_0x12163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12163c) {
            ctx->pc = 0x121628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121628;
        }
    }
    ctx->pc = 0x121644u;
label_121644:
    // 0x121644: 0x0  nop
    ctx->pc = 0x121644u;
    // NOP
    // 0x121648: 0xc0401a4  jal         func_100690
    ctx->pc = 0x121648u;
    SET_GPR_U32(ctx, 31, 0x121650u);
    ctx->pc = 0x12164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121648u;
    // 0x12164c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x121648u, 0x121650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121650u;
label_121650:
    // 0x121650: 0xaed20004  sw          $s2, 0x4($s6)
    ctx->pc = 0x121650u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 18));
    // 0x121654: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x121654u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
label_121658:
    // 0x121658: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x121658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12165c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x12165cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x121660: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x121660u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x121664: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x121664u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x121668: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x121668u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12166c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12166cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x121670: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x121670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x121674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12167c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12167cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121680: 0x3e00008  jr          $ra
    ctx->pc = 0x121680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121680u;
        // 0x121684: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121688u;
}
