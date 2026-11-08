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

// Function: FUN_001aa250
// Address: 0x1aa250 - 0x1aa368
void FUN_001aa250_0x1aa250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa250_0x1aa250");
#endif

    switch (ctx->pc) {
        case 0x1aa250u: goto label_1aa250;
        case 0x1aa254u: goto label_1aa254;
        case 0x1aa258u: goto label_1aa258;
        case 0x1aa25cu: goto label_1aa25c;
        case 0x1aa260u: goto label_1aa260;
        case 0x1aa264u: goto label_1aa264;
        case 0x1aa268u: goto label_1aa268;
        case 0x1aa26cu: goto label_1aa26c;
        case 0x1aa270u: goto label_1aa270;
        case 0x1aa274u: goto label_1aa274;
        case 0x1aa278u: goto label_1aa278;
        case 0x1aa27cu: goto label_1aa27c;
        case 0x1aa280u: goto label_1aa280;
        case 0x1aa284u: goto label_1aa284;
        case 0x1aa288u: goto label_1aa288;
        case 0x1aa28cu: goto label_1aa28c;
        case 0x1aa290u: goto label_1aa290;
        case 0x1aa294u: goto label_1aa294;
        case 0x1aa298u: goto label_1aa298;
        case 0x1aa29cu: goto label_1aa29c;
        case 0x1aa2a0u: goto label_1aa2a0;
        case 0x1aa2a4u: goto label_1aa2a4;
        case 0x1aa2a8u: goto label_1aa2a8;
        case 0x1aa2acu: goto label_1aa2ac;
        case 0x1aa2b0u: goto label_1aa2b0;
        case 0x1aa2b4u: goto label_1aa2b4;
        case 0x1aa2b8u: goto label_1aa2b8;
        case 0x1aa2bcu: goto label_1aa2bc;
        case 0x1aa2c0u: goto label_1aa2c0;
        case 0x1aa2c4u: goto label_1aa2c4;
        case 0x1aa2c8u: goto label_1aa2c8;
        case 0x1aa2ccu: goto label_1aa2cc;
        case 0x1aa2d0u: goto label_1aa2d0;
        case 0x1aa2d4u: goto label_1aa2d4;
        case 0x1aa2d8u: goto label_1aa2d8;
        case 0x1aa2dcu: goto label_1aa2dc;
        case 0x1aa2e0u: goto label_1aa2e0;
        case 0x1aa2e4u: goto label_1aa2e4;
        case 0x1aa2e8u: goto label_1aa2e8;
        case 0x1aa2ecu: goto label_1aa2ec;
        case 0x1aa2f0u: goto label_1aa2f0;
        case 0x1aa2f4u: goto label_1aa2f4;
        case 0x1aa2f8u: goto label_1aa2f8;
        case 0x1aa2fcu: goto label_1aa2fc;
        case 0x1aa300u: goto label_1aa300;
        case 0x1aa304u: goto label_1aa304;
        case 0x1aa308u: goto label_1aa308;
        case 0x1aa30cu: goto label_1aa30c;
        case 0x1aa310u: goto label_1aa310;
        case 0x1aa314u: goto label_1aa314;
        case 0x1aa318u: goto label_1aa318;
        case 0x1aa31cu: goto label_1aa31c;
        case 0x1aa320u: goto label_1aa320;
        case 0x1aa324u: goto label_1aa324;
        case 0x1aa328u: goto label_1aa328;
        case 0x1aa32cu: goto label_1aa32c;
        case 0x1aa330u: goto label_1aa330;
        case 0x1aa334u: goto label_1aa334;
        case 0x1aa338u: goto label_1aa338;
        case 0x1aa33cu: goto label_1aa33c;
        case 0x1aa340u: goto label_1aa340;
        case 0x1aa344u: goto label_1aa344;
        case 0x1aa348u: goto label_1aa348;
        case 0x1aa34cu: goto label_1aa34c;
        case 0x1aa350u: goto label_1aa350;
        case 0x1aa354u: goto label_1aa354;
        case 0x1aa358u: goto label_1aa358;
        case 0x1aa35cu: goto label_1aa35c;
        case 0x1aa360u: goto label_1aa360;
        case 0x1aa364u: goto label_1aa364;
        default: break;
    }

    ctx->pc = 0x1aa250u;

label_1aa250:
    // 0x1aa250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1aa250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1aa254:
    // 0x1aa254: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1aa254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1aa258:
    // 0x1aa258: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1aa258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1aa25c:
    // 0x1aa25c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1aa25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1aa260:
    // 0x1aa260: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1aa260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa264:
    // 0x1aa264: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1aa264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1aa268:
    // 0x1aa268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aa268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1aa26c:
    // 0x1aa26c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aa26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1aa270:
    // 0x1aa270: 0x908306cd  lbu         $v1, 0x6CD($a0)
    ctx->pc = 0x1aa270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1741)));
label_1aa274:
    // 0x1aa274: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_1aa278:
    if (ctx->pc == 0x1AA278u) {
        ctx->pc = 0x1AA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA274u;
        // 0x1aa278: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA27Cu;
        goto label_1aa27c;
    }
    ctx->pc = 0x1AA274u;
    {
        const bool branch_taken_0x1aa274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA274u;
        // 0x1aa278: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa274) {
            ctx->pc = 0x1AA348u;
            goto label_1aa348;
        }
    }
    ctx->pc = 0x1AA27Cu;
label_1aa27c:
    // 0x1aa27c: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x1aa27cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1aa280:
    // 0x1aa280: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_1aa284:
    if (ctx->pc == 0x1AA284u) {
        ctx->pc = 0x1AA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA280u;
        // 0x1aa284: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA288u;
        goto label_1aa288;
    }
    ctx->pc = 0x1AA280u;
    {
        const bool branch_taken_0x1aa280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA280u;
        // 0x1aa284: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa280) {
            ctx->pc = 0x1AA2F0u;
            goto label_1aa2f0;
        }
    }
    ctx->pc = 0x1AA288u;
label_1aa288:
    // 0x1aa288: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1aa288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa28c:
    // 0x1aa28c: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x1aa28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1aa290:
    // 0x1aa290: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1aa290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1aa294:
    // 0x1aa294: 0x247206b8  addiu       $s2, $v1, 0x6B8
    ctx->pc = 0x1aa294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1720));
label_1aa298:
    // 0x1aa298: 0x8c6306b8  lw          $v1, 0x6B8($v1)
    ctx->pc = 0x1aa298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1720)));
label_1aa29c:
    // 0x1aa29c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1aa2a0:
    // 0x1aa2a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa2a4:
    // 0x1aa2a4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1aa2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1aa2a8:
    // 0x1aa2a8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1aa2a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1aa2ac:
    // 0x1aa2ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1aa2acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1aa2b0:
    // 0x1aa2b0: 0x320f809  jalr        $t9
label_1aa2b4:
    if (ctx->pc == 0x1AA2B4u) {
        ctx->pc = 0x1AA2B8u;
        goto label_1aa2b8;
    }
    ctx->pc = 0x1AA2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA2B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA2B0u, 0x1AA2B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA2B8u;
label_1aa2b8:
    // 0x1aa2b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1aa2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1aa2bc:
    // 0x1aa2bc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1aa2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1aa2c0:
    // 0x1aa2c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1aa2c4:
    // 0x1aa2c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa2c8:
    // 0x1aa2c8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1aa2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1aa2cc:
    // 0x1aa2cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1aa2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1aa2d0:
    // 0x1aa2d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1aa2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aa2d4:
    // 0x1aa2d4: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1aa2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1aa2d8:
    // 0x1aa2d8: 0x320f809  jalr        $t9
label_1aa2dc:
    if (ctx->pc == 0x1AA2DCu) {
        ctx->pc = 0x1AA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2D8u;
        // 0x1aa2dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2E0u;
        goto label_1aa2e0;
    }
    ctx->pc = 0x1AA2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA2E0u);
        ctx->pc = 0x1AA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2D8u;
        // 0x1aa2dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA2D8u, 0x1AA2E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA2E0u;
label_1aa2e0:
    // 0x1aa2e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1aa2e4:
    // 0x1aa2e4: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x1aa2e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1aa2e8:
    // 0x1aa2e8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_1aa2ec:
    if (ctx->pc == 0x1AA2ECu) {
        ctx->pc = 0x1AA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2E8u;
        // 0x1aa2ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2F0u;
        goto label_1aa2f0;
    }
    ctx->pc = 0x1AA2E8u;
    {
        const bool branch_taken_0x1aa2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2E8u;
        // 0x1aa2ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2e8) {
            ctx->pc = 0x1AA28Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa28c;
        }
    }
    ctx->pc = 0x1AA2F0u;
label_1aa2f0:
    // 0x1aa2f0: 0x2a610003  slti        $at, $s3, 0x3
    ctx->pc = 0x1aa2f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_1aa2f4:
    // 0x1aa2f4: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_1aa2f8:
    if (ctx->pc == 0x1AA2F8u) {
        ctx->pc = 0x1AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2F4u;
        // 0x1aa2f8: 0x138080  sll         $s0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2FCu;
        goto label_1aa2fc;
    }
    ctx->pc = 0x1AA2F4u;
    {
        const bool branch_taken_0x1aa2f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2F4u;
        // 0x1aa2f8: 0x138080  sll         $s0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2f4) {
            ctx->pc = 0x1AA344u;
            goto label_1aa344;
        }
    }
    ctx->pc = 0x1AA2FCu;
label_1aa2fc:
    // 0x1aa2fc: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x1aa2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1aa300:
    // 0x1aa300: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1aa300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1aa304:
    // 0x1aa304: 0x8c8306b8  lw          $v1, 0x6B8($a0)
    ctx->pc = 0x1aa304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1720)));
label_1aa308:
    // 0x1aa308: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa30c:
    // 0x1aa30c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1aa310:
    // 0x1aa310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa314:
    // 0x1aa314: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1aa314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1aa318:
    // 0x1aa318: 0xa04501d3  sb          $a1, 0x1D3($v0)
    ctx->pc = 0x1aa318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 5));
label_1aa31c:
    // 0x1aa31c: 0x8c8306b8  lw          $v1, 0x6B8($a0)
    ctx->pc = 0x1aa31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1720)));
label_1aa320:
    // 0x1aa320: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1aa320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1aa324:
    // 0x1aa324: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1aa328:
    // 0x1aa328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa32c:
    // 0x1aa32c: 0xc042570  jal         func_1095C0
label_1aa330:
    if (ctx->pc == 0x1AA330u) {
        ctx->pc = 0x1AA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA32Cu;
        // 0x1aa330: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA334u;
        goto label_1aa334;
    }
    ctx->pc = 0x1AA32Cu;
    SET_GPR_U32(ctx, 31, 0x1AA334u);
    ctx->pc = 0x1AA330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA32Cu;
    // 0x1aa330: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1AA32Cu, 0x1AA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA334u;
label_1aa334:
    // 0x1aa334: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1aa334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1aa338:
    // 0x1aa338: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x1aa338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_1aa33c:
    // 0x1aa33c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_1aa340:
    if (ctx->pc == 0x1AA340u) {
        ctx->pc = 0x1AA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA33Cu;
        // 0x1aa340: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA344u;
        goto label_1aa344;
    }
    ctx->pc = 0x1AA33Cu;
    {
        const bool branch_taken_0x1aa33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA33Cu;
        // 0x1aa340: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa33c) {
            ctx->pc = 0x1AA2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa2fc;
        }
    }
    ctx->pc = 0x1AA344u;
label_1aa344:
    // 0x1aa344: 0x0  nop
    ctx->pc = 0x1aa344u;
    // NOP
label_1aa348:
    // 0x1aa348: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1aa348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa34c:
    // 0x1aa34c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1aa34cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa350:
    // 0x1aa350: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1aa350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa354:
    // 0x1aa354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1aa354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa358:
    // 0x1aa358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa35c:
    // 0x1aa35c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa360:
    // 0x1aa360: 0x3e00008  jr          $ra
label_1aa364:
    if (ctx->pc == 0x1AA364u) {
        ctx->pc = 0x1AA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA360u;
        // 0x1aa364: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA368u;
        goto label_fallthrough_0x1aa360;
    }
    ctx->pc = 0x1AA360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA360u;
        // 0x1aa364: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa360:
    ctx->pc = 0x1AA368u;
}
