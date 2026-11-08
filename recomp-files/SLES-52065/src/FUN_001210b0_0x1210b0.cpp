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

// Function: FUN_001210b0
// Address: 0x1210b0 - 0x121298
void FUN_001210b0_0x1210b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001210b0_0x1210b0");
#endif

    switch (ctx->pc) {
        case 0x1210b0u: goto label_1210b0;
        case 0x1210b4u: goto label_1210b4;
        case 0x1210b8u: goto label_1210b8;
        case 0x1210bcu: goto label_1210bc;
        case 0x1210c0u: goto label_1210c0;
        case 0x1210c4u: goto label_1210c4;
        case 0x1210c8u: goto label_1210c8;
        case 0x1210ccu: goto label_1210cc;
        case 0x1210d0u: goto label_1210d0;
        case 0x1210d4u: goto label_1210d4;
        case 0x1210d8u: goto label_1210d8;
        case 0x1210dcu: goto label_1210dc;
        case 0x1210e0u: goto label_1210e0;
        case 0x1210e4u: goto label_1210e4;
        case 0x1210e8u: goto label_1210e8;
        case 0x1210ecu: goto label_1210ec;
        case 0x1210f0u: goto label_1210f0;
        case 0x1210f4u: goto label_1210f4;
        case 0x1210f8u: goto label_1210f8;
        case 0x1210fcu: goto label_1210fc;
        case 0x121100u: goto label_121100;
        case 0x121104u: goto label_121104;
        case 0x121108u: goto label_121108;
        case 0x12110cu: goto label_12110c;
        case 0x121110u: goto label_121110;
        case 0x121114u: goto label_121114;
        case 0x121118u: goto label_121118;
        case 0x12111cu: goto label_12111c;
        case 0x121120u: goto label_121120;
        case 0x121124u: goto label_121124;
        case 0x121128u: goto label_121128;
        case 0x12112cu: goto label_12112c;
        case 0x121130u: goto label_121130;
        case 0x121134u: goto label_121134;
        case 0x121138u: goto label_121138;
        case 0x12113cu: goto label_12113c;
        case 0x121140u: goto label_121140;
        case 0x121144u: goto label_121144;
        case 0x121148u: goto label_121148;
        case 0x12114cu: goto label_12114c;
        case 0x121150u: goto label_121150;
        case 0x121154u: goto label_121154;
        case 0x121158u: goto label_121158;
        case 0x12115cu: goto label_12115c;
        case 0x121160u: goto label_121160;
        case 0x121164u: goto label_121164;
        case 0x121168u: goto label_121168;
        case 0x12116cu: goto label_12116c;
        case 0x121170u: goto label_121170;
        case 0x121174u: goto label_121174;
        case 0x121178u: goto label_121178;
        case 0x12117cu: goto label_12117c;
        case 0x121180u: goto label_121180;
        case 0x121184u: goto label_121184;
        case 0x121188u: goto label_121188;
        case 0x12118cu: goto label_12118c;
        case 0x121190u: goto label_121190;
        case 0x121194u: goto label_121194;
        case 0x121198u: goto label_121198;
        case 0x12119cu: goto label_12119c;
        case 0x1211a0u: goto label_1211a0;
        case 0x1211a4u: goto label_1211a4;
        case 0x1211a8u: goto label_1211a8;
        case 0x1211acu: goto label_1211ac;
        case 0x1211b0u: goto label_1211b0;
        case 0x1211b4u: goto label_1211b4;
        case 0x1211b8u: goto label_1211b8;
        case 0x1211bcu: goto label_1211bc;
        case 0x1211c0u: goto label_1211c0;
        case 0x1211c4u: goto label_1211c4;
        case 0x1211c8u: goto label_1211c8;
        case 0x1211ccu: goto label_1211cc;
        case 0x1211d0u: goto label_1211d0;
        case 0x1211d4u: goto label_1211d4;
        case 0x1211d8u: goto label_1211d8;
        case 0x1211dcu: goto label_1211dc;
        case 0x1211e0u: goto label_1211e0;
        case 0x1211e4u: goto label_1211e4;
        case 0x1211e8u: goto label_1211e8;
        case 0x1211ecu: goto label_1211ec;
        case 0x1211f0u: goto label_1211f0;
        case 0x1211f4u: goto label_1211f4;
        case 0x1211f8u: goto label_1211f8;
        case 0x1211fcu: goto label_1211fc;
        case 0x121200u: goto label_121200;
        case 0x121204u: goto label_121204;
        case 0x121208u: goto label_121208;
        case 0x12120cu: goto label_12120c;
        case 0x121210u: goto label_121210;
        case 0x121214u: goto label_121214;
        case 0x121218u: goto label_121218;
        case 0x12121cu: goto label_12121c;
        case 0x121220u: goto label_121220;
        case 0x121224u: goto label_121224;
        case 0x121228u: goto label_121228;
        case 0x12122cu: goto label_12122c;
        case 0x121230u: goto label_121230;
        case 0x121234u: goto label_121234;
        case 0x121238u: goto label_121238;
        case 0x12123cu: goto label_12123c;
        case 0x121240u: goto label_121240;
        case 0x121244u: goto label_121244;
        case 0x121248u: goto label_121248;
        case 0x12124cu: goto label_12124c;
        case 0x121250u: goto label_121250;
        case 0x121254u: goto label_121254;
        case 0x121258u: goto label_121258;
        case 0x12125cu: goto label_12125c;
        case 0x121260u: goto label_121260;
        case 0x121264u: goto label_121264;
        case 0x121268u: goto label_121268;
        case 0x12126cu: goto label_12126c;
        case 0x121270u: goto label_121270;
        case 0x121274u: goto label_121274;
        case 0x121278u: goto label_121278;
        case 0x12127cu: goto label_12127c;
        case 0x121280u: goto label_121280;
        case 0x121284u: goto label_121284;
        case 0x121288u: goto label_121288;
        case 0x12128cu: goto label_12128c;
        case 0x121290u: goto label_121290;
        case 0x121294u: goto label_121294;
        default: break;
    }

    ctx->pc = 0x1210b0u;

label_1210b0:
    // 0x1210b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1210b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1210b4:
    // 0x1210b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1210b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1210b8:
    // 0x1210b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1210b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1210bc:
    // 0x1210bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1210bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1210c0:
    // 0x1210c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1210c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1210c4:
    // 0x1210c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1210c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1210c8:
    // 0x1210c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1210c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1210cc:
    // 0x1210cc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1210ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1210d0:
    // 0x1210d0: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1210d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_1210d4:
    // 0x1210d4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1210d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_1210d8:
    // 0x1210d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1210d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1210dc:
    // 0x1210dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1210dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1210e0:
    // 0x1210e0: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1210e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
label_1210e4:
    // 0x1210e4: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
label_1210e8:
    if (ctx->pc == 0x1210E8u) {
        ctx->pc = 0x1210ECu;
        goto label_1210ec;
    }
    ctx->pc = 0x1210E4u;
    {
        const bool branch_taken_0x1210e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1210e4) {
            ctx->pc = 0x121220u;
            goto label_121220;
        }
    }
    ctx->pc = 0x1210ECu;
label_1210ec:
    // 0x1210ec: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x1210ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1210f0:
    // 0x1210f0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_1210f4:
    if (ctx->pc == 0x1210F4u) {
        ctx->pc = 0x1210F8u;
        goto label_1210f8;
    }
    ctx->pc = 0x1210F0u;
    {
        const bool branch_taken_0x1210f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1210f0) {
            ctx->pc = 0x1211A0u;
            goto label_1211a0;
        }
    }
    ctx->pc = 0x1210F8u;
label_1210f8:
    // 0x1210f8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1210f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1210fc:
    // 0x1210fc: 0xc04842c  jal         func_1210B0
label_121100:
    if (ctx->pc == 0x121100u) {
        ctx->pc = 0x121100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210FCu;
        // 0x121100: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121104u;
        goto label_121104;
    }
    ctx->pc = 0x1210FCu;
    SET_GPR_U32(ctx, 31, 0x121104u);
    ctx->pc = 0x121100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210FCu;
    // 0x121100: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1210B0u;
    goto label_1210b0;
    ctx->pc = 0x121104u;
label_121104:
    // 0x121104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121108:
    // 0x121108: 0x27b10059  addiu       $s1, $sp, 0x59
    ctx->pc = 0x121108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 89));
label_12110c:
    // 0x12110c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x12110cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_121110:
    // 0x121110: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x121110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121114:
    // 0x121114: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x121114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_121118:
    // 0x121118: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_12111c:
    if (ctx->pc == 0x12111Cu) {
        ctx->pc = 0x121120u;
        goto label_121120;
    }
    ctx->pc = 0x121118u;
    {
        const bool branch_taken_0x121118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x121118) {
            ctx->pc = 0x12115Cu;
            goto label_12115c;
        }
    }
    ctx->pc = 0x121120u;
label_121120:
    // 0x121120: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x121120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_121124:
    // 0x121124: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x121124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_121128:
    // 0x121128: 0x320f809  jalr        $t9
label_12112c:
    if (ctx->pc == 0x12112Cu) {
        ctx->pc = 0x12112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121128u;
        // 0x12112c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121130u;
        goto label_121130;
    }
    ctx->pc = 0x121128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121130u);
        ctx->pc = 0x12112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121128u;
        // 0x12112c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121128u, 0x121130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121130u;
label_121130:
    // 0x121130: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x121130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121134:
    // 0x121134: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_121138:
    if (ctx->pc == 0x121138u) {
        ctx->pc = 0x12113Cu;
        goto label_12113c;
    }
    ctx->pc = 0x121134u;
    {
        const bool branch_taken_0x121134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x121134) {
            ctx->pc = 0x121140u;
            goto label_121140;
        }
    }
    ctx->pc = 0x12113Cu;
label_12113c:
    // 0x12113c: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x12113cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_121140:
    // 0x121140: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_121144:
    if (ctx->pc == 0x121144u) {
        ctx->pc = 0x121148u;
        goto label_121148;
    }
    ctx->pc = 0x121140u;
    {
        const bool branch_taken_0x121140 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x121140) {
            ctx->pc = 0x12115Cu;
            goto label_12115c;
        }
    }
    ctx->pc = 0x121148u;
label_121148:
    // 0x121148: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x121148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12114c:
    // 0x12114c: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x12114cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
label_121150:
    // 0x121150: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x121150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_121154:
    // 0x121154: 0xc0481e8  jal         func_1207A0
label_121158:
    if (ctx->pc == 0x121158u) {
        ctx->pc = 0x121158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121154u;
        // 0x121158: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12115Cu;
        goto label_12115c;
    }
    ctx->pc = 0x121154u;
    SET_GPR_U32(ctx, 31, 0x12115Cu);
    ctx->pc = 0x121158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121154u;
    // 0x121158: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1207A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1207A0u, 0x121154u, 0x12115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12115Cu;
label_12115c:
    // 0x12115c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x12115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_121160:
    // 0x121160: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x121160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_121164:
    // 0x121164: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x121164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_121168:
    // 0x121168: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x121168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
label_12116c:
    // 0x12116c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12116cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_121170:
    // 0x121170: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_121174:
    if (ctx->pc == 0x121174u) {
        ctx->pc = 0x121178u;
        goto label_121178;
    }
    ctx->pc = 0x121170u;
    {
        const bool branch_taken_0x121170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121170) {
            ctx->pc = 0x1211A0u;
            goto label_1211a0;
        }
    }
    ctx->pc = 0x121178u;
label_121178:
    // 0x121178: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x121178u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_12117c:
    // 0x12117c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x12117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_121180:
    // 0x121180: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x121180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_121184:
    // 0x121184: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_121188:
    if (ctx->pc == 0x121188u) {
        ctx->pc = 0x12118Cu;
        goto label_12118c;
    }
    ctx->pc = 0x121184u;
    {
        const bool branch_taken_0x121184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121184) {
            ctx->pc = 0x1211A0u;
            goto label_1211a0;
        }
    }
    ctx->pc = 0x12118Cu;
label_12118c:
    // 0x12118c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x12118cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_121190:
    // 0x121190: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_121194:
    if (ctx->pc == 0x121194u) {
        ctx->pc = 0x121198u;
        goto label_121198;
    }
    ctx->pc = 0x121190u;
    {
        const bool branch_taken_0x121190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121190) {
            ctx->pc = 0x1211A0u;
            goto label_1211a0;
        }
    }
    ctx->pc = 0x121198u;
label_121198:
    // 0x121198: 0xc048208  jal         func_120820
label_12119c:
    if (ctx->pc == 0x12119Cu) {
        ctx->pc = 0x1211A0u;
        goto label_1211a0;
    }
    ctx->pc = 0x121198u;
    SET_GPR_U32(ctx, 31, 0x1211A0u);
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x121198u, 0x1211A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1211A0u;
label_1211a0:
    // 0x1211a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1211a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1211a4:
    // 0x1211a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1211a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1211a8:
    // 0x1211a8: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1211a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
label_1211ac:
    // 0x1211ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1211b0:
    if (ctx->pc == 0x1211B0u) {
        ctx->pc = 0x1211B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211ACu;
        // 0x1211b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1211B4u;
        goto label_1211b4;
    }
    ctx->pc = 0x1211ACu;
    {
        const bool branch_taken_0x1211ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1211B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211ACu;
        // 0x1211b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211ac) {
            ctx->pc = 0x1211BCu;
            goto label_1211bc;
        }
    }
    ctx->pc = 0x1211B4u;
label_1211b4:
    // 0x1211b4: 0x10000030  b           . + 4 + (0x30 << 2)
label_1211b8:
    if (ctx->pc == 0x1211B8u) {
        ctx->pc = 0x1211B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211B4u;
        // 0x1211b8: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1211BCu;
        goto label_1211bc;
    }
    ctx->pc = 0x1211B4u;
    {
        const bool branch_taken_0x1211b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211B4u;
        // 0x1211b8: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211b4) {
            ctx->pc = 0x121278u;
            goto label_121278;
        }
    }
    ctx->pc = 0x1211BCu;
label_1211bc:
    // 0x1211bc: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1211bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
label_1211c0:
    // 0x1211c0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1211c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1211c4:
    // 0x1211c4: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x1211c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
label_1211c8:
    // 0x1211c8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1211c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1211cc:
    // 0x1211cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1211d0:
    if (ctx->pc == 0x1211D0u) {
        ctx->pc = 0x1211D4u;
        goto label_1211d4;
    }
    ctx->pc = 0x1211CCu;
    {
        const bool branch_taken_0x1211cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1211cc) {
            ctx->pc = 0x1211E0u;
            goto label_1211e0;
        }
    }
    ctx->pc = 0x1211D4u;
label_1211d4:
    // 0x1211d4: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1211d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
label_1211d8:
    // 0x1211d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1211d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1211dc:
    // 0x1211dc: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x1211dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
label_1211e0:
    // 0x1211e0: 0x9083003b  lbu         $v1, 0x3B($a0)
    ctx->pc = 0x1211e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 59)));
label_1211e4:
    // 0x1211e4: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1211e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
label_1211e8:
    // 0x1211e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1211e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1211ec:
    // 0x1211ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1211ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1211f0:
    // 0x1211f0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1211f4:
    if (ctx->pc == 0x1211F4u) {
        ctx->pc = 0x1211F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211F0u;
        // 0x1211f4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1211F8u;
        goto label_1211f8;
    }
    ctx->pc = 0x1211F0u;
    {
        const bool branch_taken_0x1211f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211F0u;
        // 0x1211f4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211f0) {
            ctx->pc = 0x12127Cu;
            goto label_12127c;
        }
    }
    ctx->pc = 0x1211F8u;
label_1211f8:
    // 0x1211f8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1211f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1211fc:
    // 0x1211fc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1211fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_121200:
    // 0x121200: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x121200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
label_121204:
    // 0x121204: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x121204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_121208:
    // 0x121208: 0xc07f5d4  jal         func_1FD750
label_12120c:
    if (ctx->pc == 0x12120Cu) {
        ctx->pc = 0x12120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121208u;
        // 0x12120c: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121210u;
        goto label_121210;
    }
    ctx->pc = 0x121208u;
    SET_GPR_U32(ctx, 31, 0x121210u);
    ctx->pc = 0x12120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121208u;
    // 0x12120c: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x121208u, 0x121210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121210u;
label_121210:
    // 0x121210: 0xc07ef8a  jal         func_1FBE28
label_121214:
    if (ctx->pc == 0x121214u) {
        ctx->pc = 0x121218u;
        goto label_121218;
    }
    ctx->pc = 0x121210u;
    SET_GPR_U32(ctx, 31, 0x121218u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x121210u, 0x121218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121218u;
label_121218:
    // 0x121218: 0x10000017  b           . + 4 + (0x17 << 2)
label_12121c:
    if (ctx->pc == 0x12121Cu) {
        ctx->pc = 0x121220u;
        goto label_121220;
    }
    ctx->pc = 0x121218u;
    {
        const bool branch_taken_0x121218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121218) {
            ctx->pc = 0x121278u;
            goto label_121278;
        }
    }
    ctx->pc = 0x121220u;
label_121220:
    // 0x121220: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x121220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
label_121224:
    // 0x121224: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x121224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_121228:
    // 0x121228: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x121228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
label_12122c:
    // 0x12122c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x12122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_121230:
    // 0x121230: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_121234:
    if (ctx->pc == 0x121234u) {
        ctx->pc = 0x121238u;
        goto label_121238;
    }
    ctx->pc = 0x121230u;
    {
        const bool branch_taken_0x121230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121230) {
            ctx->pc = 0x121244u;
            goto label_121244;
        }
    }
    ctx->pc = 0x121238u;
label_121238:
    // 0x121238: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x121238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
label_12123c:
    // 0x12123c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x12123cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_121240:
    // 0x121240: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x121240u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
label_121244:
    // 0x121244: 0x9083003b  lbu         $v1, 0x3B($a0)
    ctx->pc = 0x121244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 59)));
label_121248:
    // 0x121248: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x121248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
label_12124c:
    // 0x12124c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12124cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_121250:
    // 0x121250: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x121250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_121254:
    // 0x121254: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_121258:
    if (ctx->pc == 0x121258u) {
        ctx->pc = 0x121258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121254u;
        // 0x121258: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12125Cu;
        goto label_12125c;
    }
    ctx->pc = 0x121254u;
    {
        const bool branch_taken_0x121254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121254u;
        // 0x121258: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121254) {
            ctx->pc = 0x121278u;
            goto label_121278;
        }
    }
    ctx->pc = 0x12125Cu;
label_12125c:
    // 0x12125c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12125cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_121260:
    // 0x121260: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x121260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
label_121264:
    // 0x121264: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x121264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_121268:
    // 0x121268: 0xc07f5d4  jal         func_1FD750
label_12126c:
    if (ctx->pc == 0x12126Cu) {
        ctx->pc = 0x12126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121268u;
        // 0x12126c: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121270u;
        goto label_121270;
    }
    ctx->pc = 0x121268u;
    SET_GPR_U32(ctx, 31, 0x121270u);
    ctx->pc = 0x12126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121268u;
    // 0x12126c: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x121268u, 0x121270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121270u;
label_121270:
    // 0x121270: 0xc07ef8a  jal         func_1FBE28
label_121274:
    if (ctx->pc == 0x121274u) {
        ctx->pc = 0x121278u;
        goto label_121278;
    }
    ctx->pc = 0x121270u;
    SET_GPR_U32(ctx, 31, 0x121278u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x121270u, 0x121278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121278u;
label_121278:
    // 0x121278: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x121278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12127c:
    // 0x12127c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12127cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_121280:
    // 0x121280: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x121280u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_121284:
    // 0x121284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x121284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_121288:
    // 0x121288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12128c:
    // 0x12128c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12128cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_121290:
    // 0x121290: 0x3e00008  jr          $ra
label_121294:
    if (ctx->pc == 0x121294u) {
        ctx->pc = 0x121294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121290u;
        // 0x121294: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121298u;
        goto label_fallthrough_0x121290;
    }
    ctx->pc = 0x121290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121290u;
        // 0x121294: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x121290:
    ctx->pc = 0x121298u;
}
