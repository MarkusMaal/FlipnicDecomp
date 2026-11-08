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

// Function: FUN_001071b0
// Address: 0x1071b0 - 0x1072f4
void FUN_001071b0_0x1071b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001071b0_0x1071b0");
#endif

    switch (ctx->pc) {
        case 0x1071b0u: goto label_1071b0;
        case 0x1071b4u: goto label_1071b4;
        case 0x1071b8u: goto label_1071b8;
        case 0x1071bcu: goto label_1071bc;
        case 0x1071c0u: goto label_1071c0;
        case 0x1071c4u: goto label_1071c4;
        case 0x1071c8u: goto label_1071c8;
        case 0x1071ccu: goto label_1071cc;
        case 0x1071d0u: goto label_1071d0;
        case 0x1071d4u: goto label_1071d4;
        case 0x1071d8u: goto label_1071d8;
        case 0x1071dcu: goto label_1071dc;
        case 0x1071e0u: goto label_1071e0;
        case 0x1071e4u: goto label_1071e4;
        case 0x1071e8u: goto label_1071e8;
        case 0x1071ecu: goto label_1071ec;
        case 0x1071f0u: goto label_1071f0;
        case 0x1071f4u: goto label_1071f4;
        case 0x1071f8u: goto label_1071f8;
        case 0x1071fcu: goto label_1071fc;
        case 0x107200u: goto label_107200;
        case 0x107204u: goto label_107204;
        case 0x107208u: goto label_107208;
        case 0x10720cu: goto label_10720c;
        case 0x107210u: goto label_107210;
        case 0x107214u: goto label_107214;
        case 0x107218u: goto label_107218;
        case 0x10721cu: goto label_10721c;
        case 0x107220u: goto label_107220;
        case 0x107224u: goto label_107224;
        case 0x107228u: goto label_107228;
        case 0x10722cu: goto label_10722c;
        case 0x107230u: goto label_107230;
        case 0x107234u: goto label_107234;
        case 0x107238u: goto label_107238;
        case 0x10723cu: goto label_10723c;
        case 0x107240u: goto label_107240;
        case 0x107244u: goto label_107244;
        case 0x107248u: goto label_107248;
        case 0x10724cu: goto label_10724c;
        case 0x107250u: goto label_107250;
        case 0x107254u: goto label_107254;
        case 0x107258u: goto label_107258;
        case 0x10725cu: goto label_10725c;
        case 0x107260u: goto label_107260;
        case 0x107264u: goto label_107264;
        case 0x107268u: goto label_107268;
        case 0x10726cu: goto label_10726c;
        case 0x107270u: goto label_107270;
        case 0x107274u: goto label_107274;
        case 0x107278u: goto label_107278;
        case 0x10727cu: goto label_10727c;
        case 0x107280u: goto label_107280;
        case 0x107284u: goto label_107284;
        case 0x107288u: goto label_107288;
        case 0x10728cu: goto label_10728c;
        case 0x107290u: goto label_107290;
        case 0x107294u: goto label_107294;
        case 0x107298u: goto label_107298;
        case 0x10729cu: goto label_10729c;
        case 0x1072a0u: goto label_1072a0;
        case 0x1072a4u: goto label_1072a4;
        case 0x1072a8u: goto label_1072a8;
        case 0x1072acu: goto label_1072ac;
        case 0x1072b0u: goto label_1072b0;
        case 0x1072b4u: goto label_1072b4;
        case 0x1072b8u: goto label_1072b8;
        case 0x1072bcu: goto label_1072bc;
        case 0x1072c0u: goto label_1072c0;
        case 0x1072c4u: goto label_1072c4;
        case 0x1072c8u: goto label_1072c8;
        case 0x1072ccu: goto label_1072cc;
        case 0x1072d0u: goto label_1072d0;
        case 0x1072d4u: goto label_1072d4;
        case 0x1072d8u: goto label_1072d8;
        case 0x1072dcu: goto label_1072dc;
        case 0x1072e0u: goto label_1072e0;
        case 0x1072e4u: goto label_1072e4;
        case 0x1072e8u: goto label_1072e8;
        case 0x1072ecu: goto label_1072ec;
        case 0x1072f0u: goto label_1072f0;
        default: break;
    }

    ctx->pc = 0x1071b0u;

label_1071b0:
    // 0x1071b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1071b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1071b4:
    // 0x1071b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1071b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1071b8:
    // 0x1071b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1071b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1071bc:
    // 0x1071bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1071bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1071c0:
    // 0x1071c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1071c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1071c4:
    // 0x1071c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1071c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1071c8:
    // 0x1071c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1071c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1071cc:
    // 0x1071cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1071ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1071d0:
    // 0x1071d0: 0x8c840220  lw          $a0, 0x220($a0)
    ctx->pc = 0x1071d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_1071d4:
    // 0x1071d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1071d8:
    if (ctx->pc == 0x1071D8u) {
        ctx->pc = 0x1071DCu;
        goto label_1071dc;
    }
    ctx->pc = 0x1071D4u;
    {
        const bool branch_taken_0x1071d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1071d4) {
            ctx->pc = 0x1071ECu;
            goto label_1071ec;
        }
    }
    ctx->pc = 0x1071DCu;
label_1071dc:
    // 0x1071dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1071dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1071e0:
    // 0x1071e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1071e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1071e4:
    // 0x1071e4: 0x320f809  jalr        $t9
label_1071e8:
    if (ctx->pc == 0x1071E8u) {
        ctx->pc = 0x1071ECu;
        goto label_1071ec;
    }
    ctx->pc = 0x1071E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1071ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1071E4u, 0x1071ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1071ECu;
label_1071ec:
    // 0x1071ec: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x1071ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1071f0:
    // 0x1071f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1071f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1071f4:
    // 0x1071f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1071f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1071f8:
    // 0x1071f8: 0x24502cd8  addiu       $s0, $v0, 0x2CD8
    ctx->pc = 0x1071f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_1071fc:
    // 0x1071fc: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x1071fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_107200:
    // 0x107200: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x107200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107204:
    // 0x107204: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x107204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_107208:
    // 0x107208: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x107208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10720c:
    // 0x10720c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10720cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_107210:
    // 0x107210: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x107210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_107214:
    // 0x107214: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x107214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_107218:
    // 0x107218: 0x845401fa  lh          $s4, 0x1FA($v0)
    ctx->pc = 0x107218u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 506)));
label_10721c:
    // 0x10721c: 0x16850003  bne         $s4, $a1, . + 4 + (0x3 << 2)
label_107220:
    if (ctx->pc == 0x107220u) {
        ctx->pc = 0x107220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10721Cu;
        // 0x107220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107224u;
        goto label_107224;
    }
    ctx->pc = 0x10721Cu;
    {
        const bool branch_taken_0x10721c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 5));
        ctx->pc = 0x107220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10721Cu;
        // 0x107220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10721c) {
            ctx->pc = 0x10722Cu;
            goto label_10722c;
        }
    }
    ctx->pc = 0x107224u;
label_107224:
    // 0x107224: 0xc042118  jal         func_108460
label_107228:
    if (ctx->pc == 0x107228u) {
        ctx->pc = 0x10722Cu;
        goto label_10722c;
    }
    ctx->pc = 0x107224u;
    SET_GPR_U32(ctx, 31, 0x10722Cu);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x107224u, 0x10722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10722Cu;
label_10722c:
    // 0x10722c: 0x0  nop
    ctx->pc = 0x10722cu;
    // NOP
label_107230:
    // 0x107230: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x107230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_107234:
    // 0x107234: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_107238:
    if (ctx->pc == 0x107238u) {
        ctx->pc = 0x10723Cu;
        goto label_10723c;
    }
    ctx->pc = 0x107234u;
    {
        const bool branch_taken_0x107234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x107234) {
            ctx->pc = 0x107268u;
            goto label_107268;
        }
    }
    ctx->pc = 0x10723Cu;
label_10723c:
    // 0x10723c: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x10723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_107240:
    // 0x107240: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x107240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_107244:
    // 0x107244: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x107244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107248:
    // 0x107248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x107248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10724c:
    // 0x10724c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10724cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_107250:
    // 0x107250: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x107250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_107254:
    // 0x107254: 0xa44001fa  sh          $zero, 0x1FA($v0)
    ctx->pc = 0x107254u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 506), (uint16_t)GPR_U32(ctx, 0));
label_107258:
    // 0x107258: 0xac4001fc  sw          $zero, 0x1FC($v0)
    ctx->pc = 0x107258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 508), GPR_U32(ctx, 0));
label_10725c:
    // 0x10725c: 0x8e640220  lw          $a0, 0x220($s3)
    ctx->pc = 0x10725cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
label_107260:
    // 0x107260: 0xc04ad30  jal         func_12B4C0
label_107264:
    if (ctx->pc == 0x107264u) {
        ctx->pc = 0x107264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107260u;
        // 0x107264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107268u;
        goto label_107268;
    }
    ctx->pc = 0x107260u;
    SET_GPR_U32(ctx, 31, 0x107268u);
    ctx->pc = 0x107264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107260u;
    // 0x107264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B4C0u, 0x107260u, 0x107268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107268u;
label_107268:
    // 0x107268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x107268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10726c:
    // 0x10726c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x10726cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_107270:
    // 0x107270: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_107274:
    if (ctx->pc == 0x107274u) {
        ctx->pc = 0x107274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107270u;
        // 0x107274: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107278u;
        goto label_107278;
    }
    ctx->pc = 0x107270u;
    {
        const bool branch_taken_0x107270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107270u;
        // 0x107274: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107270) {
            ctx->pc = 0x1071FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1071fc;
        }
    }
    ctx->pc = 0x107278u;
label_107278:
    // 0x107278: 0xc04ae64  jal         func_12B990
label_10727c:
    if (ctx->pc == 0x10727Cu) {
        ctx->pc = 0x10727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107278u;
        // 0x10727c: 0x8e640220  lw          $a0, 0x220($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107280u;
        goto label_107280;
    }
    ctx->pc = 0x107278u;
    SET_GPR_U32(ctx, 31, 0x107280u);
    ctx->pc = 0x10727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107278u;
    // 0x10727c: 0x8e640220  lw          $a0, 0x220($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B990u, 0x107278u, 0x107280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107280u;
label_107280:
    // 0x107280: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x107280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_107284:
    // 0x107284: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_107288:
    if (ctx->pc == 0x107288u) {
        ctx->pc = 0x107288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107284u;
        // 0x107288: 0xae6201d4  sw          $v0, 0x1D4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10728Cu;
        goto label_10728c;
    }
    ctx->pc = 0x107284u;
    {
        const bool branch_taken_0x107284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x107288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107284u;
        // 0x107288: 0xae6201d4  sw          $v0, 0x1D4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107284) {
            ctx->pc = 0x1072A8u;
            goto label_1072a8;
        }
    }
    ctx->pc = 0x10728Cu;
label_10728c:
    // 0x10728c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x10728cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_107290:
    // 0x107290: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
label_107294:
    if (ctx->pc == 0x107294u) {
        ctx->pc = 0x107294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107290u;
        // 0x107294: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107298u;
        goto label_107298;
    }
    ctx->pc = 0x107290u;
    {
        const bool branch_taken_0x107290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x107294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107290u;
        // 0x107294: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107290) {
            ctx->pc = 0x1072D4u;
            goto label_1072d4;
        }
    }
    ctx->pc = 0x107298u;
label_107298:
    // 0x107298: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_10729c:
    if (ctx->pc == 0x10729Cu) {
        ctx->pc = 0x1072A0u;
        goto label_1072a0;
    }
    ctx->pc = 0x107298u;
    {
        const bool branch_taken_0x107298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x107298) {
            ctx->pc = 0x1072D4u;
            goto label_1072d4;
        }
    }
    ctx->pc = 0x1072A0u;
label_1072a0:
    // 0x1072a0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1072a4:
    if (ctx->pc == 0x1072A4u) {
        ctx->pc = 0x1072A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072A0u;
        // 0x1072a4: 0x8e640220  lw          $a0, 0x220($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1072A8u;
        goto label_1072a8;
    }
    ctx->pc = 0x1072A0u;
    {
        const bool branch_taken_0x1072a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072A0u;
        // 0x1072a4: 0x8e640220  lw          $a0, 0x220($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072a0) {
            ctx->pc = 0x1072CCu;
            goto label_1072cc;
        }
    }
    ctx->pc = 0x1072A8u;
label_1072a8:
    // 0x1072a8: 0x8e790008  lw          $t9, 0x8($s3)
    ctx->pc = 0x1072a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1072ac:
    // 0x1072ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1072acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1072b0:
    // 0x1072b0: 0x320f809  jalr        $t9
label_1072b4:
    if (ctx->pc == 0x1072B4u) {
        ctx->pc = 0x1072B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072B0u;
        // 0x1072b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1072B8u;
        goto label_1072b8;
    }
    ctx->pc = 0x1072B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1072B8u);
        ctx->pc = 0x1072B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072B0u;
        // 0x1072b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1072B0u, 0x1072B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1072B8u;
label_1072b8:
    // 0x1072b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1072b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1072bc:
    // 0x1072bc: 0xc042118  jal         func_108460
label_1072c0:
    if (ctx->pc == 0x1072C0u) {
        ctx->pc = 0x1072C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072BCu;
        // 0x1072c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1072C4u;
        goto label_1072c4;
    }
    ctx->pc = 0x1072BCu;
    SET_GPR_U32(ctx, 31, 0x1072C4u);
    ctx->pc = 0x1072C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072BCu;
    // 0x1072c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1072BCu, 0x1072C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072C4u;
label_1072c4:
    // 0x1072c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1072c8:
    if (ctx->pc == 0x1072C8u) {
        ctx->pc = 0x1072C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072C4u;
        // 0x1072c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1072CCu;
        goto label_1072cc;
    }
    ctx->pc = 0x1072C4u;
    {
        const bool branch_taken_0x1072c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072C4u;
        // 0x1072c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072c4) {
            ctx->pc = 0x1072D8u;
            goto label_1072d8;
        }
    }
    ctx->pc = 0x1072CCu;
label_1072cc:
    // 0x1072cc: 0xc04ae3c  jal         func_12B8F0
label_1072d0:
    if (ctx->pc == 0x1072D0u) {
        ctx->pc = 0x1072D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072CCu;
        // 0x1072d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1072D4u;
        goto label_1072d4;
    }
    ctx->pc = 0x1072CCu;
    SET_GPR_U32(ctx, 31, 0x1072D4u);
    ctx->pc = 0x1072D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072CCu;
    // 0x1072d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B8F0u, 0x1072CCu, 0x1072D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072D4u;
label_1072d4:
    // 0x1072d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1072d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1072d8:
    // 0x1072d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1072d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1072dc:
    // 0x1072dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1072dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1072e0:
    // 0x1072e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1072e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1072e4:
    // 0x1072e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1072e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1072e8:
    // 0x1072e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1072e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1072ec:
    // 0x1072ec: 0x3e00008  jr          $ra
label_1072f0:
    if (ctx->pc == 0x1072F0u) {
        ctx->pc = 0x1072F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072ECu;
        // 0x1072f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1072F4u;
        goto label_fallthrough_0x1072ec;
    }
    ctx->pc = 0x1072ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1072F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072ECu;
        // 0x1072f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1072ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1072ec:
    ctx->pc = 0x1072F4u;
}
