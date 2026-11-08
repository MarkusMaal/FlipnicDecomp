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

// Function: FUN_00118430
// Address: 0x118430 - 0x118588
void FUN_00118430_0x118430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118430_0x118430");
#endif

    switch (ctx->pc) {
        case 0x118468u: goto label_118468;
        case 0x1184acu: goto label_1184ac;
        case 0x1184dcu: goto label_1184dc;
        case 0x1184fcu: goto label_1184fc;
        case 0x11850cu: goto label_11850c;
        case 0x118520u: goto label_118520;
        case 0x11852cu: goto label_11852c;
        case 0x118540u: goto label_118540;
        case 0x118550u: goto label_118550;
        default: break;
    }

    ctx->pc = 0x118430u;

    // 0x118430: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x118430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x118434: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x118434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x118438: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x118438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x11843c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x118440: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x118440u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118444: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x118444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x118448: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x118448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11844c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11844cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x118450: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x118450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118454: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x118454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x118458: 0x24a5e5e0  addiu       $a1, $a1, -0x1A20
    ctx->pc = 0x118458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960608));
    // 0x11845c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11845cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x118460: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x118460u;
    SET_GPR_U32(ctx, 31, 0x118468u);
    ctx->pc = 0x118464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118460u;
    // 0x118464: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x118460u, 0x118468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118468u;
label_118468:
    // 0x118468: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x118468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11846c: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x11846Cu;
    {
        const bool branch_taken_0x11846c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11846c) {
            ctx->pc = 0x118560u;
            goto label_118560;
        }
    }
    ctx->pc = 0x118474u;
    // 0x118474: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118474u;
    {
        const bool branch_taken_0x118474 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x118478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118474u;
        // 0x118478: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118474) {
            ctx->pc = 0x118484u;
            goto label_118484;
        }
    }
    ctx->pc = 0x11847Cu;
    // 0x11847c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11847Cu;
    {
        const bool branch_taken_0x11847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11847Cu;
        // 0x118480: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11847c) {
            ctx->pc = 0x1184A0u;
            goto label_1184a0;
        }
    }
    ctx->pc = 0x118484u;
label_118484:
    // 0x118484: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x118484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x118488: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x118488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11848c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x11848cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x118490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x118490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x118494: 0x84730008  lh          $s3, 0x8($v1)
    ctx->pc = 0x118494u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x118498: 0x0  nop
    ctx->pc = 0x118498u;
    // NOP
    // 0x11849c: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x11849cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1184a0:
    // 0x1184a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1184a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1184a4: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1184A4u;
    {
        const bool branch_taken_0x1184a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1184A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184A4u;
        // 0x1184a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184a4) {
            ctx->pc = 0x118560u;
            goto label_118560;
        }
    }
    ctx->pc = 0x1184ACu;
label_1184ac:
    // 0x1184ac: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1184acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1184b0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1184b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1184b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1184b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1184b8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1184b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1184bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1184bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1184c0: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1184c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1184c4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1184c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1184c8: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1184c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1184cc: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x1184ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1184d0: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x1184d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1184d4: 0xc046434  jal         func_1190D0
    ctx->pc = 0x1184D4u;
    SET_GPR_U32(ctx, 31, 0x1184DCu);
    ctx->pc = 0x1184D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184D4u;
    // 0x1184d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1190D0u, 0x1184D4u, 0x1184DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184DCu;
label_1184dc:
    // 0x1184dc: 0x8c550040  lw          $s5, 0x40($v0)
    ctx->pc = 0x1184dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1184e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1184e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1184e4: 0x16a20013  bne         $s5, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1184E4u;
    {
        const bool branch_taken_0x1184e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1184e4) {
            ctx->pc = 0x118534u;
            goto label_118534;
        }
    }
    ctx->pc = 0x1184ECu;
    // 0x1184ec: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1184ECu;
    {
        const bool branch_taken_0x1184ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1184ec) {
            ctx->pc = 0x118514u;
            goto label_118514;
        }
    }
    ctx->pc = 0x1184F4u;
    // 0x1184f4: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1184F4u;
    SET_GPR_U32(ctx, 31, 0x1184FCu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1184F4u, 0x1184FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184FCu;
label_1184fc:
    // 0x1184fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1184fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118500: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x118500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118504: 0xc062ba4  jal         func_18AE90
    ctx->pc = 0x118504u;
    SET_GPR_U32(ctx, 31, 0x11850Cu);
    ctx->pc = 0x118508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118504u;
    // 0x118508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE90u, 0x118504u, 0x11850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11850Cu;
label_11850c:
    // 0x11850c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11850Cu;
    {
        const bool branch_taken_0x11850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11850Cu;
        // 0x118510: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11850c) {
            ctx->pc = 0x118550u;
            goto label_118550;
        }
    }
    ctx->pc = 0x118514u;
label_118514:
    // 0x118514: 0x0  nop
    ctx->pc = 0x118514u;
    // NOP
    // 0x118518: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x118518u;
    SET_GPR_U32(ctx, 31, 0x118520u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x118518u, 0x118520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118520u;
label_118520:
    // 0x118520: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x118520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118524: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x118524u;
    SET_GPR_U32(ctx, 31, 0x11852Cu);
    ctx->pc = 0x118528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118524u;
    // 0x118528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x118524u, 0x11852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11852Cu;
label_11852c:
    // 0x11852c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11852Cu;
    {
        const bool branch_taken_0x11852c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11852c) {
            ctx->pc = 0x118550u;
            goto label_118550;
        }
    }
    ctx->pc = 0x118534u;
label_118534:
    // 0x118534: 0x0  nop
    ctx->pc = 0x118534u;
    // NOP
    // 0x118538: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118538u;
    SET_GPR_U32(ctx, 31, 0x118540u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118538u, 0x118540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118540u;
label_118540:
    // 0x118540: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x118540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118544: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x118544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118548: 0xc062ba4  jal         func_18AE90
    ctx->pc = 0x118548u;
    SET_GPR_U32(ctx, 31, 0x118550u);
    ctx->pc = 0x11854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118548u;
    // 0x11854c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE90u, 0x118548u, 0x118550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118550u;
label_118550:
    // 0x118550: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x118550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x118554: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x118554u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x118558: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x118558u;
    {
        const bool branch_taken_0x118558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x118558) {
            ctx->pc = 0x1184ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1184ac;
        }
    }
    ctx->pc = 0x118560u;
label_118560:
    // 0x118560: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x118560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118564: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x118564u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x118568: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x118568u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11856c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11856cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118570: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x118570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118574: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11857c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11857cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118580: 0x3e00008  jr          $ra
    ctx->pc = 0x118580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118580u;
        // 0x118584: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118588u;
}
