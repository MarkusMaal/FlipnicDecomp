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

// Function: FUN_001c8170
// Address: 0x1c8170 - 0x1c8618
void FUN_001c8170_0x1c8170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c8170_0x1c8170");
#endif

    switch (ctx->pc) {
        case 0x1c8198u: goto label_1c8198;
        case 0x1c81a0u: goto label_1c81a0;
        case 0x1c81b0u: goto label_1c81b0;
        case 0x1c81b8u: goto label_1c81b8;
        case 0x1c81d8u: goto label_1c81d8;
        case 0x1c81e4u: goto label_1c81e4;
        case 0x1c81f8u: goto label_1c81f8;
        case 0x1c8204u: goto label_1c8204;
        case 0x1c8250u: goto label_1c8250;
        case 0x1c8270u: goto label_1c8270;
        case 0x1c8288u: goto label_1c8288;
        case 0x1c8290u: goto label_1c8290;
        case 0x1c82a0u: goto label_1c82a0;
        case 0x1c82a8u: goto label_1c82a8;
        case 0x1c82c0u: goto label_1c82c0;
        case 0x1c82d4u: goto label_1c82d4;
        case 0x1c82dcu: goto label_1c82dc;
        case 0x1c82ecu: goto label_1c82ec;
        case 0x1c82f4u: goto label_1c82f4;
        case 0x1c8308u: goto label_1c8308;
        case 0x1c8328u: goto label_1c8328;
        case 0x1c833cu: goto label_1c833c;
        case 0x1c8344u: goto label_1c8344;
        case 0x1c8364u: goto label_1c8364;
        case 0x1c8370u: goto label_1c8370;
        case 0x1c8384u: goto label_1c8384;
        case 0x1c838cu: goto label_1c838c;
        case 0x1c839cu: goto label_1c839c;
        case 0x1c83a4u: goto label_1c83a4;
        case 0x1c83b0u: goto label_1c83b0;
        case 0x1c8400u: goto label_1c8400;
        case 0x1c8418u: goto label_1c8418;
        case 0x1c8420u: goto label_1c8420;
        case 0x1c8430u: goto label_1c8430;
        case 0x1c8438u: goto label_1c8438;
        case 0x1c8450u: goto label_1c8450;
        case 0x1c8464u: goto label_1c8464;
        case 0x1c846cu: goto label_1c846c;
        case 0x1c847cu: goto label_1c847c;
        case 0x1c8484u: goto label_1c8484;
        case 0x1c849cu: goto label_1c849c;
        case 0x1c84b0u: goto label_1c84b0;
        case 0x1c84c0u: goto label_1c84c0;
        case 0x1c84d0u: goto label_1c84d0;
        case 0x1c84e0u: goto label_1c84e0;
        case 0x1c84f0u: goto label_1c84f0;
        case 0x1c8500u: goto label_1c8500;
        case 0x1c8508u: goto label_1c8508;
        case 0x1c851cu: goto label_1c851c;
        case 0x1c8530u: goto label_1c8530;
        case 0x1c8548u: goto label_1c8548;
        case 0x1c8558u: goto label_1c8558;
        case 0x1c856cu: goto label_1c856c;
        case 0x1c857cu: goto label_1c857c;
        case 0x1c85b8u: goto label_1c85b8;
        case 0x1c85c4u: goto label_1c85c4;
        case 0x1c85d8u: goto label_1c85d8;
        case 0x1c85e4u: goto label_1c85e4;
        case 0x1c85f8u: goto label_1c85f8;
        case 0x1c8604u: goto label_1c8604;
        default: break;
    }

    ctx->pc = 0x1c8170u;

    // 0x1c8170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c8174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c8174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c8178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c817c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c817cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c8180: 0x8c860060  lw          $a2, 0x60($a0)
    ctx->pc = 0x1c8180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1c8184: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x1c8184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1c8188: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C8188u;
    {
        const bool branch_taken_0x1c8188 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8188u;
        // 0x1c818c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8188) {
            ctx->pc = 0x1C81B8u;
            goto label_1c81b8;
        }
    }
    ctx->pc = 0x1C8190u;
    // 0x1c8190: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8190u;
    SET_GPR_U32(ctx, 31, 0x1C8198u);
    ctx->pc = 0x1C8194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8190u;
    // 0x1c8194: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8190u, 0x1C8198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8198u;
label_1c8198:
    // 0x1c8198: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C8198u;
    SET_GPR_U32(ctx, 31, 0x1C81A0u);
    ctx->pc = 0x1C819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8198u;
    // 0x1c819c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C8198u, 0x1C81A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81A0u;
label_1c81a0:
    // 0x1c81a0: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1c81a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c81a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c81a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81a8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C81A8u;
    SET_GPR_U32(ctx, 31, 0x1C81B0u);
    ctx->pc = 0x1C81ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81A8u;
    // 0x1c81ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C81A8u, 0x1C81B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81B0u;
label_1c81b0:
    // 0x1c81b0: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C81B0u;
    SET_GPR_U32(ctx, 31, 0x1C81B8u);
    ctx->pc = 0x1C81B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81B0u;
    // 0x1c81b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C81B0u, 0x1C81B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81B8u;
label_1c81b8:
    // 0x1c81b8: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c81b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c81bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c81c0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C81C0u;
    {
        const bool branch_taken_0x1c81c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81C0u;
        // 0x1c81c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81c0) {
            ctx->pc = 0x1C81ECu;
            goto label_1c81ec;
        }
    }
    ctx->pc = 0x1C81C8u;
    // 0x1c81c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c81c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c81ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c81d0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C81D0u;
    SET_GPR_U32(ctx, 31, 0x1C81D8u);
    ctx->pc = 0x1C81D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81D0u;
    // 0x1c81d4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C81D0u, 0x1C81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81D8u;
label_1c81d8:
    // 0x1c81d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c81d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81dc: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C81DCu;
    SET_GPR_U32(ctx, 31, 0x1C81E4u);
    ctx->pc = 0x1C81E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81DCu;
    // 0x1c81e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C81DCu, 0x1C81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81E4u;
label_1c81e4:
    // 0x1c81e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C81E4u;
    {
        const bool branch_taken_0x1c81e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81E4u;
        // 0x1c81e8: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81e4) {
            ctx->pc = 0x1C8208u;
            goto label_1c8208;
        }
    }
    ctx->pc = 0x1C81ECu;
label_1c81ec:
    // 0x1c81ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c81ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c81f0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C81F0u;
    SET_GPR_U32(ctx, 31, 0x1C81F8u);
    ctx->pc = 0x1C81F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81F0u;
    // 0x1c81f4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C81F0u, 0x1C81F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81F8u;
label_1c81f8:
    // 0x1c81f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c81f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81fc: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C81FCu;
    SET_GPR_U32(ctx, 31, 0x1C8204u);
    ctx->pc = 0x1C8200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81FCu;
    // 0x1c8200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C81FCu, 0x1C8204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8204u;
label_1c8204:
    // 0x1c8204: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c8204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1c8208:
    // 0x1c8208: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c8208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c820c: 0x1062009d  beq         $v1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1C820Cu;
    {
        const bool branch_taken_0x1c820c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C820Cu;
        // 0x1c8210: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c820c) {
            ctx->pc = 0x1C8484u;
            goto label_1c8484;
        }
    }
    ctx->pc = 0x1C8214u;
    // 0x1c8214: 0x1068009b  beq         $v1, $t0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1C8214u;
    {
        const bool branch_taken_0x1c8214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1C8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8214u;
        // 0x1c8218: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8214) {
            ctx->pc = 0x1C8484u;
            goto label_1c8484;
        }
    }
    ctx->pc = 0x1C821Cu;
    // 0x1c821c: 0x1069004b  beq         $v1, $t1, . + 4 + (0x4B << 2)
    ctx->pc = 0x1C821Cu;
    {
        const bool branch_taken_0x1c821c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x1C8220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C821Cu;
        // 0x1c8220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c821c) {
            ctx->pc = 0x1C834Cu;
            goto label_1c834c;
        }
    }
    ctx->pc = 0x1C8224u;
    // 0x1c8224: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8224u;
    {
        const bool branch_taken_0x1c8224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8224u;
        // 0x1c8228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8224) {
            ctx->pc = 0x1C8234u;
            goto label_1c8234;
        }
    }
    ctx->pc = 0x1C822Cu;
    // 0x1c822c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1C822Cu;
    {
        const bool branch_taken_0x1c822c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C822Cu;
        // 0x1c8230: 0x8e02006c  lw          $v0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c822c) {
            ctx->pc = 0x1C8488u;
            goto label_1c8488;
        }
    }
    ctx->pc = 0x1C8234u;
label_1c8234:
    // 0x1c8234: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c8234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c8238: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c8238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c823c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c823cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8240: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1c8240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8244: 0x260a0070  addiu       $t2, $s0, 0x70
    ctx->pc = 0x1c8244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1c8248: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C8248u;
    SET_GPR_U32(ctx, 31, 0x1C8250u);
    ctx->pc = 0x1C824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8248u;
    // 0x1c824c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C8248u, 0x1C8250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8250u;
label_1c8250:
    // 0x1c8250: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c8250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c8254: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1c8254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1c8258: 0x1062008a  beq         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1C8258u;
    {
        const bool branch_taken_0x1c8258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8258u;
        // 0x1c825c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8258) {
            ctx->pc = 0x1C8484u;
            goto label_1c8484;
        }
    }
    ctx->pc = 0x1C8260u;
    // 0x1c8260: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c8260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c8264: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c8264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c8268: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1C8268u;
    SET_GPR_U32(ctx, 31, 0x1C8270u);
    ctx->pc = 0x1C826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8268u;
    // 0x1c826c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1C8268u, 0x1C8270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8270u;
label_1c8270:
    // 0x1c8270: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C8270u;
    {
        const bool branch_taken_0x1c8270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8270u;
        // 0x1c8274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8270) {
            ctx->pc = 0x1C82B0u;
            goto label_1c82b0;
        }
    }
    ctx->pc = 0x1C8278u;
    // 0x1c8278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c827c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c827cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c8280: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8280u;
    SET_GPR_U32(ctx, 31, 0x1C8288u);
    ctx->pc = 0x1C8284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8280u;
    // 0x1c8284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8280u, 0x1C8288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8288u;
label_1c8288:
    // 0x1c8288: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C8288u;
    SET_GPR_U32(ctx, 31, 0x1C8290u);
    ctx->pc = 0x1C828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8288u;
    // 0x1c828c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C8288u, 0x1C8290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8290u;
label_1c8290:
    // 0x1c8290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8294: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c8294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c8298: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8298u;
    SET_GPR_U32(ctx, 31, 0x1C82A0u);
    ctx->pc = 0x1C829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8298u;
    // 0x1c829c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8298u, 0x1C82A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82A0u;
label_1c82a0:
    // 0x1c82a0: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C82A0u;
    SET_GPR_U32(ctx, 31, 0x1C82A8u);
    ctx->pc = 0x1C82A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82A0u;
    // 0x1c82a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C82A0u, 0x1C82A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82A8u;
label_1c82a8:
    // 0x1c82a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C82A8u;
    {
        const bool branch_taken_0x1c82a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82A8u;
        // 0x1c82ac: 0x8e060070  lw          $a2, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82a8) {
            ctx->pc = 0x1C82F8u;
            goto label_1c82f8;
        }
    }
    ctx->pc = 0x1C82B0u;
label_1c82b0:
    // 0x1c82b0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c82b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c82b4: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c82b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c82b8: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1C82B8u;
    SET_GPR_U32(ctx, 31, 0x1C82C0u);
    ctx->pc = 0x1C82BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82B8u;
    // 0x1c82bc: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1C82B8u, 0x1C82C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82C0u;
label_1c82c0:
    // 0x1c82c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C82C0u;
    {
        const bool branch_taken_0x1c82c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82C0u;
        // 0x1c82c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82c0) {
            ctx->pc = 0x1C82F4u;
            goto label_1c82f4;
        }
    }
    ctx->pc = 0x1C82C8u;
    // 0x1c82c8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c82c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c82cc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C82CCu;
    SET_GPR_U32(ctx, 31, 0x1C82D4u);
    ctx->pc = 0x1C82D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82CCu;
    // 0x1c82d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C82CCu, 0x1C82D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82D4u;
label_1c82d4:
    // 0x1c82d4: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C82D4u;
    SET_GPR_U32(ctx, 31, 0x1C82DCu);
    ctx->pc = 0x1C82D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82D4u;
    // 0x1c82d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C82D4u, 0x1C82DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82DCu;
label_1c82dc:
    // 0x1c82dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82e0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c82e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c82e4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C82E4u;
    SET_GPR_U32(ctx, 31, 0x1C82ECu);
    ctx->pc = 0x1C82E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82E4u;
    // 0x1c82e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C82E4u, 0x1C82ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82ECu;
label_1c82ec:
    // 0x1c82ec: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C82ECu;
    SET_GPR_U32(ctx, 31, 0x1C82F4u);
    ctx->pc = 0x1C82F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82ECu;
    // 0x1c82f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C82ECu, 0x1C82F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82F4u;
label_1c82f4:
    // 0x1c82f4: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1c82f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1c82f8:
    // 0x1c82f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82fc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c82fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c8300: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8300u;
    SET_GPR_U32(ctx, 31, 0x1C8308u);
    ctx->pc = 0x1C8304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8300u;
    // 0x1c8304: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8300u, 0x1C8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8308u;
label_1c8308:
    // 0x1c8308: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c8308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c830c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c830cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8310: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1c8310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c8314: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c8314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c8318: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c8318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c831c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c831cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c8320: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8320u;
    SET_GPR_U32(ctx, 31, 0x1C8328u);
    ctx->pc = 0x1C8324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8320u;
    // 0x1c8324: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8320u, 0x1C8328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8328u;
label_1c8328:
    // 0x1c8328: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c8328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c832c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c832cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8330: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1c8330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c8334: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8334u;
    SET_GPR_U32(ctx, 31, 0x1C833Cu);
    ctx->pc = 0x1C8338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8334u;
    // 0x1c8338: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8334u, 0x1C833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C833Cu;
label_1c833c:
    // 0x1c833c: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1C833Cu;
    SET_GPR_U32(ctx, 31, 0x1C8344u);
    ctx->pc = 0x1C8340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C833Cu;
    // 0x1c8340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1C833Cu, 0x1C8344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8344u;
label_1c8344:
    // 0x1c8344: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1C8344u;
    {
        const bool branch_taken_0x1c8344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8344) {
            ctx->pc = 0x1C8484u;
            goto label_1c8484;
        }
    }
    ctx->pc = 0x1C834Cu;
label_1c834c:
    // 0x1c834c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c834cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c8350: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c8350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c8354: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8358: 0x260a0068  addiu       $t2, $s0, 0x68
    ctx->pc = 0x1c8358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1c835c: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C835Cu;
    SET_GPR_U32(ctx, 31, 0x1C8364u);
    ctx->pc = 0x1C8360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C835Cu;
    // 0x1c8360: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C835Cu, 0x1C8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8364u;
label_1c8364:
    // 0x1c8364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8368: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C8368u;
    SET_GPR_U32(ctx, 31, 0x1C8370u);
    ctx->pc = 0x1C836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8368u;
    // 0x1c836c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C8368u, 0x1C8370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8370u;
label_1c8370:
    // 0x1c8370: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C8370u;
    {
        const bool branch_taken_0x1c8370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8370u;
        // 0x1c8374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8370) {
            ctx->pc = 0x1C83D0u;
            goto label_1c83d0;
        }
    }
    ctx->pc = 0x1C8378u;
    // 0x1c8378: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c8378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c837c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C837Cu;
    SET_GPR_U32(ctx, 31, 0x1C8384u);
    ctx->pc = 0x1C8380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C837Cu;
    // 0x1c8380: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C837Cu, 0x1C8384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8384u;
label_1c8384:
    // 0x1c8384: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C8384u;
    SET_GPR_U32(ctx, 31, 0x1C838Cu);
    ctx->pc = 0x1C8388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8384u;
    // 0x1c8388: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C8384u, 0x1C838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C838Cu;
label_1c838c:
    // 0x1c838c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c838cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8390: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c8390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8394: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8394u;
    SET_GPR_U32(ctx, 31, 0x1C839Cu);
    ctx->pc = 0x1C8398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8394u;
    // 0x1c8398: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8394u, 0x1C839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C839Cu;
label_1c839c:
    // 0x1c839c: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C839Cu;
    SET_GPR_U32(ctx, 31, 0x1C83A4u);
    ctx->pc = 0x1C83A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C839Cu;
    // 0x1c83a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C839Cu, 0x1C83A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83A4u;
label_1c83a4:
    // 0x1c83a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c83a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83a8: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C83A8u;
    SET_GPR_U32(ctx, 31, 0x1C83B0u);
    ctx->pc = 0x1C83ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83A8u;
    // 0x1c83ac: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C83A8u, 0x1C83B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83B0u;
label_1c83b0:
    // 0x1c83b0: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1c83b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c83b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c83b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c83b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c83bc: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x1c83bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x1c83c0: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1c83c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c83c4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C83C4u;
    {
        const bool branch_taken_0x1c83c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c83c4) {
            ctx->pc = 0x1C83D0u;
            goto label_1c83d0;
        }
    }
    ctx->pc = 0x1C83CCu;
    // 0x1c83cc: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1c83ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_1c83d0:
    // 0x1c83d0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1c83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c83d4: 0x9042006b  lbu         $v0, 0x6B($v0)
    ctx->pc = 0x1c83d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 107)));
    // 0x1c83d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C83D8u;
    {
        const bool branch_taken_0x1c83d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C83DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83D8u;
        // 0x1c83dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83d8) {
            ctx->pc = 0x1C83F0u;
            goto label_1c83f0;
        }
    }
    ctx->pc = 0x1C83E0u;
    // 0x1c83e0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c83e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c83e4: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1c83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c83e8: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c83ec: 0xac432830  sw          $v1, 0x2830($v0)
    ctx->pc = 0x1c83ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10288), GPR_U32(ctx, 3));
label_1c83f0:
    // 0x1c83f0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c83f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c83f4: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c83f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c83f8: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1C83F8u;
    SET_GPR_U32(ctx, 31, 0x1C8400u);
    ctx->pc = 0x1C83FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83F8u;
    // 0x1c83fc: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1C83F8u, 0x1C8400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8400u;
label_1c8400:
    // 0x1c8400: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C8400u;
    {
        const bool branch_taken_0x1c8400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8400u;
        // 0x1c8404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8400) {
            ctx->pc = 0x1C8440u;
            goto label_1c8440;
        }
    }
    ctx->pc = 0x1C8408u;
    // 0x1c8408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c840c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8410: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8410u;
    SET_GPR_U32(ctx, 31, 0x1C8418u);
    ctx->pc = 0x1C8414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8410u;
    // 0x1c8414: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8410u, 0x1C8418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8418u;
label_1c8418:
    // 0x1c8418: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C8418u;
    SET_GPR_U32(ctx, 31, 0x1C8420u);
    ctx->pc = 0x1C841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8418u;
    // 0x1c841c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C8418u, 0x1C8420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8420u;
label_1c8420:
    // 0x1c8420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8424: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c8424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8428: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8428u;
    SET_GPR_U32(ctx, 31, 0x1C8430u);
    ctx->pc = 0x1C842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8428u;
    // 0x1c842c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8428u, 0x1C8430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8430u;
label_1c8430:
    // 0x1c8430: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C8430u;
    SET_GPR_U32(ctx, 31, 0x1C8438u);
    ctx->pc = 0x1C8434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8430u;
    // 0x1c8434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C8430u, 0x1C8438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8438u;
label_1c8438:
    // 0x1c8438: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8438u;
    {
        const bool branch_taken_0x1c8438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8438) {
            ctx->pc = 0x1C8484u;
            goto label_1c8484;
        }
    }
    ctx->pc = 0x1C8440u;
label_1c8440:
    // 0x1c8440: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c8440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c8444: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c8444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c8448: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1C8448u;
    SET_GPR_U32(ctx, 31, 0x1C8450u);
    ctx->pc = 0x1C844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8448u;
    // 0x1c844c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1C8448u, 0x1C8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8450u;
label_1c8450:
    // 0x1c8450: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8450u;
    {
        const bool branch_taken_0x1c8450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8450u;
        // 0x1c8454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8450) {
            ctx->pc = 0x1C8484u;
            goto label_1c8484;
        }
    }
    ctx->pc = 0x1C8458u;
    // 0x1c8458: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c8458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c845c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C845Cu;
    SET_GPR_U32(ctx, 31, 0x1C8464u);
    ctx->pc = 0x1C8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C845Cu;
    // 0x1c8460: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C845Cu, 0x1C8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8464u;
label_1c8464:
    // 0x1c8464: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C8464u;
    SET_GPR_U32(ctx, 31, 0x1C846Cu);
    ctx->pc = 0x1C8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8464u;
    // 0x1c8468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C8464u, 0x1C846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C846Cu;
label_1c846c:
    // 0x1c846c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c846cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8470: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c8470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8474: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8474u;
    SET_GPR_U32(ctx, 31, 0x1C847Cu);
    ctx->pc = 0x1C8478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8474u;
    // 0x1c8478: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8474u, 0x1C847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C847Cu;
label_1c847c:
    // 0x1c847c: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C847Cu;
    SET_GPR_U32(ctx, 31, 0x1C8484u);
    ctx->pc = 0x1C8480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C847Cu;
    // 0x1c8480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C847Cu, 0x1C8484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8484u;
label_1c8484:
    // 0x1c8484: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1c8484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_1c8488:
    // 0x1c8488: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c8488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c848c: 0x1046003b  beq         $v0, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x1C848Cu;
    {
        const bool branch_taken_0x1c848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C848Cu;
        // 0x1c8490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c848c) {
            ctx->pc = 0x1C857Cu;
            goto label_1c857c;
        }
    }
    ctx->pc = 0x1C8494u;
    // 0x1c8494: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8494u;
    SET_GPR_U32(ctx, 31, 0x1C849Cu);
    ctx->pc = 0x1C8498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8494u;
    // 0x1c8498: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8494u, 0x1C849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C849Cu;
label_1c849c:
    // 0x1c849c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c84a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c84a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84a8: 0xc06ea38  jal         func_1BA8E0
    ctx->pc = 0x1C84A8u;
    SET_GPR_U32(ctx, 31, 0x1C84B0u);
    ctx->pc = 0x1C84ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84A8u;
    // 0x1c84ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA8E0u, 0x1C84A8u, 0x1C84B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84B0u;
label_1c84b0:
    // 0x1c84b0: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c84b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c84b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c84b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84b8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C84B8u;
    SET_GPR_U32(ctx, 31, 0x1C84C0u);
    ctx->pc = 0x1C84BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84B8u;
    // 0x1c84bc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C84B8u, 0x1C84C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84C0u;
label_1c84c0:
    // 0x1c84c0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c84c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c84c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c84c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84c8: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C84C8u;
    SET_GPR_U32(ctx, 31, 0x1C84D0u);
    ctx->pc = 0x1C84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84C8u;
    // 0x1c84cc: 0x24a559e0  addiu       $a1, $a1, 0x59E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C84C8u, 0x1C84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84D0u;
label_1c84d0:
    // 0x1c84d0: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c84d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c84d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c84d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84d8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C84D8u;
    SET_GPR_U32(ctx, 31, 0x1C84E0u);
    ctx->pc = 0x1C84DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84D8u;
    // 0x1c84dc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C84D8u, 0x1C84E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84E0u;
label_1c84e0:
    // 0x1c84e0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c84e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c84e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c84e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84e8: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C84E8u;
    SET_GPR_U32(ctx, 31, 0x1C84F0u);
    ctx->pc = 0x1C84ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84E8u;
    // 0x1c84ec: 0x24a559d0  addiu       $a1, $a1, 0x59D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C84E8u, 0x1C84F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84F0u;
label_1c84f0:
    // 0x1c84f0: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c84f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c84f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c84f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84f8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C84F8u;
    SET_GPR_U32(ctx, 31, 0x1C8500u);
    ctx->pc = 0x1C84FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84F8u;
    // 0x1c84fc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C84F8u, 0x1C8500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8500u;
label_1c8500:
    // 0x1c8500: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1C8500u;
    SET_GPR_U32(ctx, 31, 0x1C8508u);
    ctx->pc = 0x1C8504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8500u;
    // 0x1c8504: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1C8500u, 0x1C8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8508u;
label_1c8508:
    // 0x1c8508: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c8508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c850c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c850cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8510: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c8510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c8514: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8514u;
    SET_GPR_U32(ctx, 31, 0x1C851Cu);
    ctx->pc = 0x1C8518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8514u;
    // 0x1c8518: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8514u, 0x1C851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C851Cu;
label_1c851c:
    // 0x1c851c: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c851cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c8520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8524: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c8524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c8528: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8528u;
    SET_GPR_U32(ctx, 31, 0x1C8530u);
    ctx->pc = 0x1C852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8528u;
    // 0x1c852c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8528u, 0x1C8530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8530u;
label_1c8530:
    // 0x1c8530: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c8530u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8538: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1c8538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c853c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8540: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8540u;
    SET_GPR_U32(ctx, 31, 0x1C8548u);
    ctx->pc = 0x1C8544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8540u;
    // 0x1c8544: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8540u, 0x1C8548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8548u;
label_1c8548:
    // 0x1c8548: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c854c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c854cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8550: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C8550u;
    SET_GPR_U32(ctx, 31, 0x1C8558u);
    ctx->pc = 0x1C8554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8550u;
    // 0x1c8554: 0x24a559e0  addiu       $a1, $a1, 0x59E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C8550u, 0x1C8558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8558u;
label_1c8558:
    // 0x1c8558: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c8558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c855c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c855cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8560: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c8560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8564: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8564u;
    SET_GPR_U32(ctx, 31, 0x1C856Cu);
    ctx->pc = 0x1C8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8564u;
    // 0x1c8568: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8564u, 0x1C856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C856Cu;
label_1c856c:
    // 0x1c856c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c856cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8574: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C8574u;
    SET_GPR_U32(ctx, 31, 0x1C857Cu);
    ctx->pc = 0x1C8578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8574u;
    // 0x1c8578: 0x24a559d0  addiu       $a1, $a1, 0x59D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C8574u, 0x1C857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C857Cu;
label_1c857c:
    // 0x1c857c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c8580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8584: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c8584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c8588: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1c8588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c858c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c858cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8590: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1c8590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8594: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8598: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x1c8598u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c859c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c859cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85a0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1c85a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1c85a4: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c85a8: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1c85a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1c85ac: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1c85acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c85b0: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C85B0u;
    SET_GPR_U32(ctx, 31, 0x1C85B8u);
    ctx->pc = 0x1C85B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85B0u;
    // 0x1c85b4: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C85B0u, 0x1C85B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85B8u;
label_1c85b8:
    // 0x1c85b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c85b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85bc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C85BCu;
    SET_GPR_U32(ctx, 31, 0x1C85C4u);
    ctx->pc = 0x1C85C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85BCu;
    // 0x1c85c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C85BCu, 0x1C85C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85C4u;
label_1c85c4:
    // 0x1c85c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C85C4u;
    {
        const bool branch_taken_0x1c85c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85C4u;
        // 0x1c85c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85c4) {
            ctx->pc = 0x1C85DCu;
            goto label_1c85dc;
        }
    }
    ctx->pc = 0x1C85CCu;
    // 0x1c85cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c85ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85d0: 0xc072188  jal         func_1C8620
    ctx->pc = 0x1C85D0u;
    SET_GPR_U32(ctx, 31, 0x1C85D8u);
    ctx->pc = 0x1C85D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85D0u;
    // 0x1c85d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8620u, 0x1C85D0u, 0x1C85D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85D8u;
label_1c85d8:
    // 0x1c85d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c85d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c85dc:
    // 0x1c85dc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C85DCu;
    SET_GPR_U32(ctx, 31, 0x1C85E4u);
    ctx->pc = 0x1C85E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85DCu;
    // 0x1c85e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C85DCu, 0x1C85E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85E4u;
label_1c85e4:
    // 0x1c85e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C85E4u;
    {
        const bool branch_taken_0x1c85e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85E4u;
        // 0x1c85e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85e4) {
            ctx->pc = 0x1C85FCu;
            goto label_1c85fc;
        }
    }
    ctx->pc = 0x1C85ECu;
    // 0x1c85ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c85ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85f0: 0xc072188  jal         func_1C8620
    ctx->pc = 0x1C85F0u;
    SET_GPR_U32(ctx, 31, 0x1C85F8u);
    ctx->pc = 0x1C85F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85F0u;
    // 0x1c85f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8620u, 0x1C85F0u, 0x1C85F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85F8u;
label_1c85f8:
    // 0x1c85f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c85f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c85fc:
    // 0x1c85fc: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C85FCu;
    SET_GPR_U32(ctx, 31, 0x1C8604u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C85FCu, 0x1C8604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8604u;
label_1c8604:
    // 0x1c8604: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c8604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c860c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c860cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8610: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8610u;
        // 0x1c8614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8618u;
}
