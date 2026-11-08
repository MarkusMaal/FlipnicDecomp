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

// Function: FUN_00160270
// Address: 0x160270 - 0x160368
void FUN_00160270_0x160270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160270_0x160270");
#endif

    switch (ctx->pc) {
        case 0x160270u: goto label_160270;
        case 0x160274u: goto label_160274;
        case 0x160278u: goto label_160278;
        case 0x16027cu: goto label_16027c;
        case 0x160280u: goto label_160280;
        case 0x160284u: goto label_160284;
        case 0x160288u: goto label_160288;
        case 0x16028cu: goto label_16028c;
        case 0x160290u: goto label_160290;
        case 0x160294u: goto label_160294;
        case 0x160298u: goto label_160298;
        case 0x16029cu: goto label_16029c;
        case 0x1602a0u: goto label_1602a0;
        case 0x1602a4u: goto label_1602a4;
        case 0x1602a8u: goto label_1602a8;
        case 0x1602acu: goto label_1602ac;
        case 0x1602b0u: goto label_1602b0;
        case 0x1602b4u: goto label_1602b4;
        case 0x1602b8u: goto label_1602b8;
        case 0x1602bcu: goto label_1602bc;
        case 0x1602c0u: goto label_1602c0;
        case 0x1602c4u: goto label_1602c4;
        case 0x1602c8u: goto label_1602c8;
        case 0x1602ccu: goto label_1602cc;
        case 0x1602d0u: goto label_1602d0;
        case 0x1602d4u: goto label_1602d4;
        case 0x1602d8u: goto label_1602d8;
        case 0x1602dcu: goto label_1602dc;
        case 0x1602e0u: goto label_1602e0;
        case 0x1602e4u: goto label_1602e4;
        case 0x1602e8u: goto label_1602e8;
        case 0x1602ecu: goto label_1602ec;
        case 0x1602f0u: goto label_1602f0;
        case 0x1602f4u: goto label_1602f4;
        case 0x1602f8u: goto label_1602f8;
        case 0x1602fcu: goto label_1602fc;
        case 0x160300u: goto label_160300;
        case 0x160304u: goto label_160304;
        case 0x160308u: goto label_160308;
        case 0x16030cu: goto label_16030c;
        case 0x160310u: goto label_160310;
        case 0x160314u: goto label_160314;
        case 0x160318u: goto label_160318;
        case 0x16031cu: goto label_16031c;
        case 0x160320u: goto label_160320;
        case 0x160324u: goto label_160324;
        case 0x160328u: goto label_160328;
        case 0x16032cu: goto label_16032c;
        case 0x160330u: goto label_160330;
        case 0x160334u: goto label_160334;
        case 0x160338u: goto label_160338;
        case 0x16033cu: goto label_16033c;
        case 0x160340u: goto label_160340;
        case 0x160344u: goto label_160344;
        case 0x160348u: goto label_160348;
        case 0x16034cu: goto label_16034c;
        case 0x160350u: goto label_160350;
        case 0x160354u: goto label_160354;
        case 0x160358u: goto label_160358;
        case 0x16035cu: goto label_16035c;
        case 0x160360u: goto label_160360;
        case 0x160364u: goto label_160364;
        default: break;
    }

    ctx->pc = 0x160270u;

label_160270:
    // 0x160270: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x160270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_160274:
    // 0x160274: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x160274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_160278:
    // 0x160278: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x160278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_16027c:
    // 0x16027c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16027cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_160280:
    // 0x160280: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x160280u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160284:
    // 0x160284: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x160284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_160288:
    // 0x160288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16028c:
    // 0x16028c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_160290:
    // 0x160290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_160294:
    // 0x160294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_160298:
    // 0x160298: 0x8c902c20  lw          $s0, 0x2C20($a0)
    ctx->pc = 0x160298u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11296)));
label_16029c:
    // 0x16029c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x16029cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1602a0:
    // 0x1602a0: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_1602a4:
    if (ctx->pc == 0x1602A4u) {
        ctx->pc = 0x1602A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602A0u;
        // 0x1602a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602A8u;
        goto label_1602a8;
    }
    ctx->pc = 0x1602A0u;
    {
        const bool branch_taken_0x1602a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1602A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602A0u;
        // 0x1602a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602a0) {
            ctx->pc = 0x160340u;
            goto label_160340;
        }
    }
    ctx->pc = 0x1602A8u;
label_1602a8:
    // 0x1602a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1602a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1602ac:
    // 0x1602ac: 0x8ec32c1c  lw          $v1, 0x2C1C($s6)
    ctx->pc = 0x1602acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11292)));
label_1602b0:
    // 0x1602b0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1602b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1602b4:
    // 0x1602b4: 0x8466000a  lh          $a2, 0xA($v1)
    ctx->pc = 0x1602b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1602b8:
    // 0x1602b8: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x1602b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1602bc:
    // 0x1602bc: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x1602bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1602c0:
    // 0x1602c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1602c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1602c4:
    // 0x1602c4: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1602c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1602c8:
    // 0x1602c8: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x1602c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1602cc:
    // 0x1602cc: 0x2639021  addu        $s2, $s3, $v1
    ctx->pc = 0x1602ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1602d0:
    // 0x1602d0: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x1602d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1602d4:
    // 0x1602d4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1602d8:
    if (ctx->pc == 0x1602D8u) {
        ctx->pc = 0x1602D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602D4u;
        // 0x1602d8: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602DCu;
        goto label_1602dc;
    }
    ctx->pc = 0x1602D4u;
    {
        const bool branch_taken_0x1602d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1602D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602D4u;
        // 0x1602d8: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602d4) {
            ctx->pc = 0x160330u;
            goto label_160330;
        }
    }
    ctx->pc = 0x1602DCu;
label_1602dc:
    // 0x1602dc: 0x0  nop
    ctx->pc = 0x1602dcu;
    // NOP
label_1602e0:
    // 0x1602e0: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x1602e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_1602e4:
    // 0x1602e4: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x1602e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1602e8:
    // 0x1602e8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1602e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1602ec:
    // 0x1602ec: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x1602ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_1602f0:
    // 0x1602f0: 0x84a50020  lh          $a1, 0x20($a1)
    ctx->pc = 0x1602f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_1602f4:
    // 0x1602f4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_1602f8:
    if (ctx->pc == 0x1602F8u) {
        ctx->pc = 0x1602F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602F4u;
        // 0x1602f8: 0x24030082  addiu       $v1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602FCu;
        goto label_1602fc;
    }
    ctx->pc = 0x1602F4u;
    {
        const bool branch_taken_0x1602f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1602F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602F4u;
        // 0x1602f8: 0x24030082  addiu       $v1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602f4) {
            ctx->pc = 0x160304u;
            goto label_160304;
        }
    }
    ctx->pc = 0x1602FCu;
label_1602fc:
    // 0x1602fc: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
label_160300:
    if (ctx->pc == 0x160300u) {
        ctx->pc = 0x160304u;
        goto label_160304;
    }
    ctx->pc = 0x1602FCu;
    {
        const bool branch_taken_0x1602fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1602fc) {
            ctx->pc = 0x160320u;
            goto label_160320;
        }
    }
    ctx->pc = 0x160304u;
label_160304:
    // 0x160304: 0x0  nop
    ctx->pc = 0x160304u;
    // NOP
label_160308:
    // 0x160308: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x160308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_16030c:
    // 0x16030c: 0xac820210  sw          $v0, 0x210($a0)
    ctx->pc = 0x16030cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 2));
label_160310:
    // 0x160310: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x160310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_160314:
    // 0x160314: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x160314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_160318:
    // 0x160318: 0x320f809  jalr        $t9
label_16031c:
    if (ctx->pc == 0x16031Cu) {
        ctx->pc = 0x16031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160318u;
        // 0x16031c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160320u;
        goto label_160320;
    }
    ctx->pc = 0x160318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x160320u);
        ctx->pc = 0x16031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160318u;
        // 0x16031c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160318u, 0x160320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160320u;
label_160320:
    // 0x160320: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x160320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_160324:
    // 0x160324: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x160324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_160328:
    // 0x160328: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_16032c:
    if (ctx->pc == 0x16032Cu) {
        ctx->pc = 0x16032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160328u;
        // 0x16032c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160330u;
        goto label_160330;
    }
    ctx->pc = 0x160328u;
    {
        const bool branch_taken_0x160328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160328u;
        // 0x16032c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160328) {
            ctx->pc = 0x1602DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1602dc;
        }
    }
    ctx->pc = 0x160330u;
label_160330:
    // 0x160330: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_160334:
    // 0x160334: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x160334u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_160338:
    // 0x160338: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_16033c:
    if (ctx->pc == 0x16033Cu) {
        ctx->pc = 0x16033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160338u;
        // 0x16033c: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160340u;
        goto label_160340;
    }
    ctx->pc = 0x160338u;
    {
        const bool branch_taken_0x160338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160338u;
        // 0x16033c: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160338) {
            ctx->pc = 0x1602ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1602ac;
        }
    }
    ctx->pc = 0x160340u;
label_160340:
    // 0x160340: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x160340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_160344:
    // 0x160344: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x160344u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_160348:
    // 0x160348: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x160348u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16034c:
    // 0x16034c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16034cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_160350:
    // 0x160350: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_160354:
    // 0x160354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_160358:
    // 0x160358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16035c:
    // 0x16035c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16035cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_160360:
    // 0x160360: 0x3e00008  jr          $ra
label_160364:
    if (ctx->pc == 0x160364u) {
        ctx->pc = 0x160364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160360u;
        // 0x160364: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160368u;
        goto label_fallthrough_0x160360;
    }
    ctx->pc = 0x160360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160360u;
        // 0x160364: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x160360:
    ctx->pc = 0x160368u;
}
