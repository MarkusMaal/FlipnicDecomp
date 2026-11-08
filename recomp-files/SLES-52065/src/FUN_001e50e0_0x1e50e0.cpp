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

// Function: FUN_001e50e0
// Address: 0x1e50e0 - 0x1e52e0
void FUN_001e50e0_0x1e50e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e50e0_0x1e50e0");
#endif

    switch (ctx->pc) {
        case 0x1e50e0u: goto label_1e50e0;
        case 0x1e50e4u: goto label_1e50e4;
        case 0x1e50e8u: goto label_1e50e8;
        case 0x1e50ecu: goto label_1e50ec;
        case 0x1e50f0u: goto label_1e50f0;
        case 0x1e50f4u: goto label_1e50f4;
        case 0x1e50f8u: goto label_1e50f8;
        case 0x1e50fcu: goto label_1e50fc;
        case 0x1e5100u: goto label_1e5100;
        case 0x1e5104u: goto label_1e5104;
        case 0x1e5108u: goto label_1e5108;
        case 0x1e510cu: goto label_1e510c;
        case 0x1e5110u: goto label_1e5110;
        case 0x1e5114u: goto label_1e5114;
        case 0x1e5118u: goto label_1e5118;
        case 0x1e511cu: goto label_1e511c;
        case 0x1e5120u: goto label_1e5120;
        case 0x1e5124u: goto label_1e5124;
        case 0x1e5128u: goto label_1e5128;
        case 0x1e512cu: goto label_1e512c;
        case 0x1e5130u: goto label_1e5130;
        case 0x1e5134u: goto label_1e5134;
        case 0x1e5138u: goto label_1e5138;
        case 0x1e513cu: goto label_1e513c;
        case 0x1e5140u: goto label_1e5140;
        case 0x1e5144u: goto label_1e5144;
        case 0x1e5148u: goto label_1e5148;
        case 0x1e514cu: goto label_1e514c;
        case 0x1e5150u: goto label_1e5150;
        case 0x1e5154u: goto label_1e5154;
        case 0x1e5158u: goto label_1e5158;
        case 0x1e515cu: goto label_1e515c;
        case 0x1e5160u: goto label_1e5160;
        case 0x1e5164u: goto label_1e5164;
        case 0x1e5168u: goto label_1e5168;
        case 0x1e516cu: goto label_1e516c;
        case 0x1e5170u: goto label_1e5170;
        case 0x1e5174u: goto label_1e5174;
        case 0x1e5178u: goto label_1e5178;
        case 0x1e517cu: goto label_1e517c;
        case 0x1e5180u: goto label_1e5180;
        case 0x1e5184u: goto label_1e5184;
        case 0x1e5188u: goto label_1e5188;
        case 0x1e518cu: goto label_1e518c;
        case 0x1e5190u: goto label_1e5190;
        case 0x1e5194u: goto label_1e5194;
        case 0x1e5198u: goto label_1e5198;
        case 0x1e519cu: goto label_1e519c;
        case 0x1e51a0u: goto label_1e51a0;
        case 0x1e51a4u: goto label_1e51a4;
        case 0x1e51a8u: goto label_1e51a8;
        case 0x1e51acu: goto label_1e51ac;
        case 0x1e51b0u: goto label_1e51b0;
        case 0x1e51b4u: goto label_1e51b4;
        case 0x1e51b8u: goto label_1e51b8;
        case 0x1e51bcu: goto label_1e51bc;
        case 0x1e51c0u: goto label_1e51c0;
        case 0x1e51c4u: goto label_1e51c4;
        case 0x1e51c8u: goto label_1e51c8;
        case 0x1e51ccu: goto label_1e51cc;
        case 0x1e51d0u: goto label_1e51d0;
        case 0x1e51d4u: goto label_1e51d4;
        case 0x1e51d8u: goto label_1e51d8;
        case 0x1e51dcu: goto label_1e51dc;
        case 0x1e51e0u: goto label_1e51e0;
        case 0x1e51e4u: goto label_1e51e4;
        case 0x1e51e8u: goto label_1e51e8;
        case 0x1e51ecu: goto label_1e51ec;
        case 0x1e51f0u: goto label_1e51f0;
        case 0x1e51f4u: goto label_1e51f4;
        case 0x1e51f8u: goto label_1e51f8;
        case 0x1e51fcu: goto label_1e51fc;
        case 0x1e5200u: goto label_1e5200;
        case 0x1e5204u: goto label_1e5204;
        case 0x1e5208u: goto label_1e5208;
        case 0x1e520cu: goto label_1e520c;
        case 0x1e5210u: goto label_1e5210;
        case 0x1e5214u: goto label_1e5214;
        case 0x1e5218u: goto label_1e5218;
        case 0x1e521cu: goto label_1e521c;
        case 0x1e5220u: goto label_1e5220;
        case 0x1e5224u: goto label_1e5224;
        case 0x1e5228u: goto label_1e5228;
        case 0x1e522cu: goto label_1e522c;
        case 0x1e5230u: goto label_1e5230;
        case 0x1e5234u: goto label_1e5234;
        case 0x1e5238u: goto label_1e5238;
        case 0x1e523cu: goto label_1e523c;
        case 0x1e5240u: goto label_1e5240;
        case 0x1e5244u: goto label_1e5244;
        case 0x1e5248u: goto label_1e5248;
        case 0x1e524cu: goto label_1e524c;
        case 0x1e5250u: goto label_1e5250;
        case 0x1e5254u: goto label_1e5254;
        case 0x1e5258u: goto label_1e5258;
        case 0x1e525cu: goto label_1e525c;
        case 0x1e5260u: goto label_1e5260;
        case 0x1e5264u: goto label_1e5264;
        case 0x1e5268u: goto label_1e5268;
        case 0x1e526cu: goto label_1e526c;
        case 0x1e5270u: goto label_1e5270;
        case 0x1e5274u: goto label_1e5274;
        case 0x1e5278u: goto label_1e5278;
        case 0x1e527cu: goto label_1e527c;
        case 0x1e5280u: goto label_1e5280;
        case 0x1e5284u: goto label_1e5284;
        case 0x1e5288u: goto label_1e5288;
        case 0x1e528cu: goto label_1e528c;
        case 0x1e5290u: goto label_1e5290;
        case 0x1e5294u: goto label_1e5294;
        case 0x1e5298u: goto label_1e5298;
        case 0x1e529cu: goto label_1e529c;
        case 0x1e52a0u: goto label_1e52a0;
        case 0x1e52a4u: goto label_1e52a4;
        case 0x1e52a8u: goto label_1e52a8;
        case 0x1e52acu: goto label_1e52ac;
        case 0x1e52b0u: goto label_1e52b0;
        case 0x1e52b4u: goto label_1e52b4;
        case 0x1e52b8u: goto label_1e52b8;
        case 0x1e52bcu: goto label_1e52bc;
        case 0x1e52c0u: goto label_1e52c0;
        case 0x1e52c4u: goto label_1e52c4;
        case 0x1e52c8u: goto label_1e52c8;
        case 0x1e52ccu: goto label_1e52cc;
        case 0x1e52d0u: goto label_1e52d0;
        case 0x1e52d4u: goto label_1e52d4;
        case 0x1e52d8u: goto label_1e52d8;
        case 0x1e52dcu: goto label_1e52dc;
        default: break;
    }

    ctx->pc = 0x1e50e0u;

label_1e50e0:
    // 0x1e50e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e50e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e50e4:
    // 0x1e50e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e50e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e50e8:
    // 0x1e50e8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e50e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1e50ec:
    // 0x1e50ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e50ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e50f0:
    // 0x1e50f0: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e50f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e50f4:
    // 0x1e50f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e50f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e50f8:
    // 0x1e50f8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1e50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1e50fc:
    // 0x1e50fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e5100:
    if (ctx->pc == 0x1E5100u) {
        ctx->pc = 0x1E5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50FCu;
        // 0x1e5100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5104u;
        goto label_1e5104;
    }
    ctx->pc = 0x1E50FCu;
    {
        const bool branch_taken_0x1e50fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50FCu;
        // 0x1e5100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50fc) {
            ctx->pc = 0x1E510Cu;
            goto label_1e510c;
        }
    }
    ctx->pc = 0x1E5104u;
label_1e5104:
    // 0x1e5104: 0x1000006f  b           . + 4 + (0x6F << 2)
label_1e5108:
    if (ctx->pc == 0x1E5108u) {
        ctx->pc = 0x1E5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5104u;
        // 0x1e5108: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E510Cu;
        goto label_1e510c;
    }
    ctx->pc = 0x1E5104u;
    {
        const bool branch_taken_0x1e5104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5104u;
        // 0x1e5108: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5104) {
            ctx->pc = 0x1E52C4u;
            goto label_1e52c4;
        }
    }
    ctx->pc = 0x1E510Cu;
label_1e510c:
    // 0x1e510c: 0x92020052  lbu         $v0, 0x52($s0)
    ctx->pc = 0x1e510cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 82)));
label_1e5110:
    // 0x1e5110: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e5114:
    if (ctx->pc == 0x1E5114u) {
        ctx->pc = 0x1E5118u;
        goto label_1e5118;
    }
    ctx->pc = 0x1E5110u;
    {
        const bool branch_taken_0x1e5110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5110) {
            ctx->pc = 0x1E5184u;
            goto label_1e5184;
        }
    }
    ctx->pc = 0x1E5118u;
label_1e5118:
    // 0x1e5118: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e5118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e511c:
    // 0x1e511c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1e5120:
    if (ctx->pc == 0x1E5120u) {
        ctx->pc = 0x1E5124u;
        goto label_1e5124;
    }
    ctx->pc = 0x1E511Cu;
    {
        const bool branch_taken_0x1e511c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e511c) {
            ctx->pc = 0x1E5184u;
            goto label_1e5184;
        }
    }
    ctx->pc = 0x1E5124u;
label_1e5124:
    // 0x1e5124: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e5124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e5128:
    // 0x1e5128: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e5128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e512c:
    // 0x1e512c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e512cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e5130:
    // 0x1e5130: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e5134:
    if (ctx->pc == 0x1E5134u) {
        ctx->pc = 0x1E5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5130u;
        // 0x1e5134: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5138u;
        goto label_1e5138;
    }
    ctx->pc = 0x1E5130u;
    {
        const bool branch_taken_0x1e5130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5130u;
        // 0x1e5134: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5130) {
            ctx->pc = 0x1E5158u;
            goto label_1e5158;
        }
    }
    ctx->pc = 0x1E5138u;
label_1e5138:
    // 0x1e5138: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e513c:
    // 0x1e513c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e513cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e5140:
    // 0x1e5140: 0x320f809  jalr        $t9
label_1e5144:
    if (ctx->pc == 0x1E5144u) {
        ctx->pc = 0x1E5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5140u;
        // 0x1e5144: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5148u;
        goto label_1e5148;
    }
    ctx->pc = 0x1E5140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5148u);
        ctx->pc = 0x1E5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5140u;
        // 0x1e5144: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5140u, 0x1E5148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5148u;
label_1e5148:
    // 0x1e5148: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e514c:
    // 0x1e514c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e5150:
    if (ctx->pc == 0x1E5150u) {
        ctx->pc = 0x1E5154u;
        goto label_1e5154;
    }
    ctx->pc = 0x1E514Cu;
    {
        const bool branch_taken_0x1e514c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e514c) {
            ctx->pc = 0x1E5158u;
            goto label_1e5158;
        }
    }
    ctx->pc = 0x1E5154u;
label_1e5154:
    // 0x1e5154: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1e5154u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e5158:
    // 0x1e5158: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1e515c:
    if (ctx->pc == 0x1E515Cu) {
        ctx->pc = 0x1E515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5158u;
        // 0x1e515c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5160u;
        goto label_1e5160;
    }
    ctx->pc = 0x1E5158u;
    {
        const bool branch_taken_0x1e5158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5158u;
        // 0x1e515c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5158) {
            ctx->pc = 0x1E5168u;
            goto label_1e5168;
        }
    }
    ctx->pc = 0x1E5160u;
label_1e5160:
    // 0x1e5160: 0x10000059  b           . + 4 + (0x59 << 2)
label_1e5164:
    if (ctx->pc == 0x1E5164u) {
        ctx->pc = 0x1E5164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5160u;
        // 0x1e5164: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5168u;
        goto label_1e5168;
    }
    ctx->pc = 0x1E5160u;
    {
        const bool branch_taken_0x1e5160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5160u;
        // 0x1e5164: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5160) {
            ctx->pc = 0x1E52C8u;
            goto label_1e52c8;
        }
    }
    ctx->pc = 0x1E5168u;
label_1e5168:
    // 0x1e5168: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1e5168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1e516c:
    // 0x1e516c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1e516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1e5170:
    // 0x1e5170: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e5170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1e5174:
    // 0x1e5174: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1e5174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_1e5178:
    // 0x1e5178: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e5178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1e517c:
    // 0x1e517c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e517cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e5180:
    // 0x1e5180: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e5180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e5184:
    // 0x1e5184: 0xa2000050  sb          $zero, 0x50($s0)
    ctx->pc = 0x1e5184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
label_1e5188:
    // 0x1e5188: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e5188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e518c:
    // 0x1e518c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e5190:
    // 0x1e5190: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e5190u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e5194:
    // 0x1e5194: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e5198:
    if (ctx->pc == 0x1E5198u) {
        ctx->pc = 0x1E519Cu;
        goto label_1e519c;
    }
    ctx->pc = 0x1E5194u;
    {
        const bool branch_taken_0x1e5194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5194) {
            ctx->pc = 0x1E51A4u;
            goto label_1e51a4;
        }
    }
    ctx->pc = 0x1E519Cu;
label_1e519c:
    // 0x1e519c: 0x10000049  b           . + 4 + (0x49 << 2)
label_1e51a0:
    if (ctx->pc == 0x1E51A0u) {
        ctx->pc = 0x1E51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E519Cu;
        // 0x1e51a0: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51A4u;
        goto label_1e51a4;
    }
    ctx->pc = 0x1E519Cu;
    {
        const bool branch_taken_0x1e519c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E519Cu;
        // 0x1e51a0: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e519c) {
            ctx->pc = 0x1E52C4u;
            goto label_1e52c4;
        }
    }
    ctx->pc = 0x1E51A4u;
label_1e51a4:
    // 0x1e51a4: 0x92020051  lbu         $v0, 0x51($s0)
    ctx->pc = 0x1e51a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
label_1e51a8:
    // 0x1e51a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e51ac:
    if (ctx->pc == 0x1E51ACu) {
        ctx->pc = 0x1E51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51A8u;
        // 0x1e51ac: 0x602826  xor         $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51B0u;
        goto label_1e51b0;
    }
    ctx->pc = 0x1E51A8u;
    {
        const bool branch_taken_0x1e51a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51A8u;
        // 0x1e51ac: 0x602826  xor         $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51a8) {
            ctx->pc = 0x1E51C4u;
            goto label_1e51c4;
        }
    }
    ctx->pc = 0x1E51B0u;
label_1e51b0:
    // 0x1e51b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e51b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e51b4:
    // 0x1e51b4: 0xc079544  jal         func_1E5510
label_1e51b8:
    if (ctx->pc == 0x1E51B8u) {
        ctx->pc = 0x1E51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51B4u;
        // 0x1e51b8: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51BCu;
        goto label_1e51bc;
    }
    ctx->pc = 0x1E51B4u;
    SET_GPR_U32(ctx, 31, 0x1E51BCu);
    ctx->pc = 0x1E51B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E51B4u;
    // 0x1e51b8: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5510u, 0x1E51B4u, 0x1E51BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E51BCu;
label_1e51bc:
    // 0x1e51bc: 0x10000022  b           . + 4 + (0x22 << 2)
label_1e51c0:
    if (ctx->pc == 0x1E51C0u) {
        ctx->pc = 0x1E51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51BCu;
        // 0x1e51c0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51C4u;
        goto label_1e51c4;
    }
    ctx->pc = 0x1E51BCu;
    {
        const bool branch_taken_0x1e51bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51BCu;
        // 0x1e51c0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51bc) {
            ctx->pc = 0x1E5248u;
            goto label_1e5248;
        }
    }
    ctx->pc = 0x1E51C4u;
label_1e51c4:
    // 0x1e51c4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1e51c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e51c8:
    // 0x1e51c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e51c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e51cc:
    // 0x1e51cc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e51ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e51d0:
    // 0x1e51d0: 0x320f809  jalr        $t9
label_1e51d4:
    if (ctx->pc == 0x1E51D4u) {
        ctx->pc = 0x1E51D8u;
        goto label_1e51d8;
    }
    ctx->pc = 0x1E51D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E51D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E51D0u, 0x1E51D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E51D8u;
label_1e51d8:
    // 0x1e51d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e51dc:
    if (ctx->pc == 0x1E51DCu) {
        ctx->pc = 0x1E51E0u;
        goto label_1e51e0;
    }
    ctx->pc = 0x1E51D8u;
    {
        const bool branch_taken_0x1e51d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e51d8) {
            ctx->pc = 0x1E5208u;
            goto label_1e5208;
        }
    }
    ctx->pc = 0x1E51E0u;
label_1e51e0:
    // 0x1e51e0: 0xc07a704  jal         func_1E9C10
label_1e51e4:
    if (ctx->pc == 0x1E51E4u) {
        ctx->pc = 0x1E51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51E0u;
        // 0x1e51e4: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51E8u;
        goto label_1e51e8;
    }
    ctx->pc = 0x1E51E0u;
    SET_GPR_U32(ctx, 31, 0x1E51E8u);
    ctx->pc = 0x1E51E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E51E0u;
    // 0x1e51e4: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E51E0u, 0x1E51E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E51E8u;
label_1e51e8:
    // 0x1e51e8: 0x0  nop
    ctx->pc = 0x1e51e8u;
    // NOP
label_1e51ec:
    // 0x1e51ec: 0x0  nop
    ctx->pc = 0x1e51ecu;
    // NOP
label_1e51f0:
    // 0x1e51f0: 0x0  nop
    ctx->pc = 0x1e51f0u;
    // NOP
label_1e51f4:
    // 0x1e51f4: 0x0  nop
    ctx->pc = 0x1e51f4u;
    // NOP
label_1e51f8:
    // 0x1e51f8: 0x0  nop
    ctx->pc = 0x1e51f8u;
    // NOP
label_1e51fc:
    // 0x1e51fc: 0x0  nop
    ctx->pc = 0x1e51fcu;
    // NOP
label_1e5200:
    // 0x1e5200: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e5204:
    if (ctx->pc == 0x1E5204u) {
        ctx->pc = 0x1E5208u;
        goto label_1e5208;
    }
    ctx->pc = 0x1E5200u;
    {
        const bool branch_taken_0x1e5200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5200) {
            ctx->pc = 0x1E51E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e51e8;
        }
    }
    ctx->pc = 0x1E5208u;
label_1e5208:
    // 0x1e5208: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1e520c:
    if (ctx->pc == 0x1E520Cu) {
        ctx->pc = 0x1E5210u;
        goto label_1e5210;
    }
    ctx->pc = 0x1E5208u;
    {
        const bool branch_taken_0x1e5208 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e5208) {
            ctx->pc = 0x1E5230u;
            goto label_1e5230;
        }
    }
    ctx->pc = 0x1E5210u;
label_1e5210:
    // 0x1e5210: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e5210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e5214:
    // 0x1e5214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5218:
    // 0x1e5218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e5218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e521c:
    // 0x1e521c: 0x603026  xor         $a2, $v1, $zero
    ctx->pc = 0x1e521cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_1e5220:
    // 0x1e5220: 0xc0798e4  jal         func_1E6390
label_1e5224:
    if (ctx->pc == 0x1E5224u) {
        ctx->pc = 0x1E5224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5220u;
        // 0x1e5224: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5228u;
        goto label_1e5228;
    }
    ctx->pc = 0x1E5220u;
    SET_GPR_U32(ctx, 31, 0x1E5228u);
    ctx->pc = 0x1E5224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5220u;
    // 0x1e5224: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6390u, 0x1E5220u, 0x1E5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5228u;
label_1e5228:
    // 0x1e5228: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e522c:
    if (ctx->pc == 0x1E522Cu) {
        ctx->pc = 0x1E5230u;
        goto label_1e5230;
    }
    ctx->pc = 0x1E5228u;
    {
        const bool branch_taken_0x1e5228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5228) {
            ctx->pc = 0x1E5244u;
            goto label_1e5244;
        }
    }
    ctx->pc = 0x1E5230u;
label_1e5230:
    // 0x1e5230: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e5230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e5234:
    // 0x1e5234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5238:
    // 0x1e5238: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x1e5238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1e523c:
    // 0x1e523c: 0xc079878  jal         func_1E61E0
label_1e5240:
    if (ctx->pc == 0x1E5240u) {
        ctx->pc = 0x1E5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E523Cu;
        // 0x1e5240: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5244u;
        goto label_1e5244;
    }
    ctx->pc = 0x1E523Cu;
    SET_GPR_U32(ctx, 31, 0x1E5244u);
    ctx->pc = 0x1E5240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E523Cu;
    // 0x1e5240: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E61E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E61E0u, 0x1E523Cu, 0x1E5244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5244u;
label_1e5244:
    // 0x1e5244: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e5248:
    // 0x1e5248: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e524c:
    if (ctx->pc == 0x1E524Cu) {
        ctx->pc = 0x1E5250u;
        goto label_1e5250;
    }
    ctx->pc = 0x1E5248u;
    {
        const bool branch_taken_0x1e5248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5248) {
            ctx->pc = 0x1E5258u;
            goto label_1e5258;
        }
    }
    ctx->pc = 0x1E5250u;
label_1e5250:
    // 0x1e5250: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1e5254:
    if (ctx->pc == 0x1E5254u) {
        ctx->pc = 0x1E5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5250u;
        // 0x1e5254: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5258u;
        goto label_1e5258;
    }
    ctx->pc = 0x1E5250u;
    {
        const bool branch_taken_0x1e5250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5250u;
        // 0x1e5254: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5250) {
            ctx->pc = 0x1E52C4u;
            goto label_1e52c4;
        }
    }
    ctx->pc = 0x1E5258u;
label_1e5258:
    // 0x1e5258: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e5258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e525c:
    // 0x1e525c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1e5260:
    if (ctx->pc == 0x1E5260u) {
        ctx->pc = 0x1E5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E525Cu;
        // 0x1e5260: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5264u;
        goto label_1e5264;
    }
    ctx->pc = 0x1E525Cu;
    {
        const bool branch_taken_0x1e525c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E525Cu;
        // 0x1e5260: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e525c) {
            ctx->pc = 0x1E52C4u;
            goto label_1e52c4;
        }
    }
    ctx->pc = 0x1E5264u;
label_1e5264:
    // 0x1e5264: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1e5264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e5268:
    // 0x1e5268: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e5268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e526c:
    // 0x1e526c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1e526cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1e5270:
    // 0x1e5270: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e5274:
    if (ctx->pc == 0x1E5274u) {
        ctx->pc = 0x1E5274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5270u;
        // 0x1e5274: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5278u;
        goto label_1e5278;
    }
    ctx->pc = 0x1E5270u;
    {
        const bool branch_taken_0x1e5270 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E5274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5270u;
        // 0x1e5274: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5270) {
            ctx->pc = 0x1E5280u;
            goto label_1e5280;
        }
    }
    ctx->pc = 0x1E5278u;
label_1e5278:
    // 0x1e5278: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e527c:
    // 0x1e527c: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1e527cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_1e5280:
    // 0x1e5280: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e5280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e5284:
    // 0x1e5284: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1e5288:
    if (ctx->pc == 0x1E5288u) {
        ctx->pc = 0x1E5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5284u;
        // 0x1e5288: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E528Cu;
        goto label_1e528c;
    }
    ctx->pc = 0x1E5284u;
    {
        const bool branch_taken_0x1e5284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5284u;
        // 0x1e5288: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5284) {
            ctx->pc = 0x1E529Cu;
            goto label_1e529c;
        }
    }
    ctx->pc = 0x1E528Cu;
label_1e528c:
    // 0x1e528c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1e528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1e5290:
    // 0x1e5290: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e5290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5294:
    // 0x1e5294: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1e5294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_1e5298:
    // 0x1e5298: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1e5298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e529c:
    // 0x1e529c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1e529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1e52a0:
    // 0x1e52a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1e52a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e52a4:
    // 0x1e52a4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1e52a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_1e52a8:
    // 0x1e52a8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1e52a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1e52ac:
    // 0x1e52ac: 0x2464002e  addiu       $a0, $v1, 0x2E
    ctx->pc = 0x1e52acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 46));
label_1e52b0:
    // 0x1e52b0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1e52b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1e52b4:
    // 0x1e52b4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1e52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_1e52b8:
    // 0x1e52b8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e52b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e52bc:
    // 0x1e52bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e52bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e52c0:
    // 0x1e52c0: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x1e52c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_1e52c4:
    // 0x1e52c4: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e52c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e52c8:
    // 0x1e52c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e52c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e52cc:
    // 0x1e52cc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e52ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e52d0:
    // 0x1e52d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e52d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e52d4:
    // 0x1e52d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e52d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e52d8:
    // 0x1e52d8: 0x3e00008  jr          $ra
label_1e52dc:
    if (ctx->pc == 0x1E52DCu) {
        ctx->pc = 0x1E52DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52D8u;
        // 0x1e52dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E52E0u;
        goto label_fallthrough_0x1e52d8;
    }
    ctx->pc = 0x1E52D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E52DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52D8u;
        // 0x1e52dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E52D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e52d8:
    ctx->pc = 0x1E52E0u;
}
