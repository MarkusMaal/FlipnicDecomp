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

// Function: FUN_001fd788
// Address: 0x1fd788 - 0x1fd8a4
void FUN_001fd788_0x1fd788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd788_0x1fd788");
#endif

    switch (ctx->pc) {
        case 0x1fd7c8u: goto label_1fd7c8;
        case 0x1fd810u: goto label_1fd810;
        case 0x1fd820u: goto label_1fd820;
        case 0x1fd838u: goto label_1fd838;
        case 0x1fd860u: goto label_1fd860;
        default: break;
    }

    ctx->pc = 0x1fd788u;

    // 0x1fd788: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fd788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fd78c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1fd78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1fd790: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1fd790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1fd794: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1fd794u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd798: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1fd798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1fd79c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fd79cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd7a0: 0x2d49818  mult        $s3, $s6, $s4
    ctx->pc = 0x1fd7a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1fd7a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fd7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fd7a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1fd7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1fd7ac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1fd7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd7b0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1fd7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1fd7b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fd7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fd7b8: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD7B8u;
    {
        const bool branch_taken_0x1fd7b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7B8u;
        // 0x1fd7bc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7b8) {
            ctx->pc = 0x1FD7E0u;
            goto label_1fd7e0;
        }
    }
    ctx->pc = 0x1FD7C0u;
    // 0x1fd7c0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1FD7C0u;
    {
        const bool branch_taken_0x1fd7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7C0u;
        // 0x1fd7c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7c0) {
            ctx->pc = 0x1FD87Cu;
            goto label_1fd87c;
        }
    }
    ctx->pc = 0x1FD7C8u;
label_1fd7c8:
    // 0x1fd7c8: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD7C8u;
    {
        const bool branch_taken_0x1fd7c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd7c8) {
            ctx->pc = 0x1FD7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD7C8u;
            // 0x1fd7cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD7D0u;
            goto label_1fd7d0;
        }
    }
    ctx->pc = 0x1FD7D0u;
label_1fd7d0:
    // 0x1fd7d0: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x1fd7d0u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1fd7d4: 0x1012  mflo        $v0
    ctx->pc = 0x1fd7d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1fd7d8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1FD7D8u;
    {
        const bool branch_taken_0x1fd7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7D8u;
        // 0x1fd7dc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7d8) {
            ctx->pc = 0x1FD880u;
            goto label_1fd880;
        }
    }
    ctx->pc = 0x1FD7E0u;
label_1fd7e0:
    // 0x1fd7e0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1fd7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fd7e4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD7E4u;
    {
        const bool branch_taken_0x1fd7e4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7E4u;
        // 0x1fd7e8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7e4) {
            ctx->pc = 0x1FD7F8u;
            goto label_1fd7f8;
        }
    }
    ctx->pc = 0x1FD7ECu;
    // 0x1fd7ec: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1fd7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1fd7f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd7f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fd7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd7f8:
    // 0x1fd7f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fd7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd7fc: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1fd7fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1fd800: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FD800u;
    {
        const bool branch_taken_0x1fd800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD800u;
        // 0x1fd804: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd800) {
            ctx->pc = 0x1FD850u;
            goto label_1fd850;
        }
    }
    ctx->pc = 0x1FD808u;
    // 0x1fd808: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1fd808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fd80c: 0x0  nop
    ctx->pc = 0x1fd80cu;
    // NOP
label_1fd810:
    // 0x1fd810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd814: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fd814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd818: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1FD818u;
    SET_GPR_U32(ctx, 31, 0x1FD820u);
    ctx->pc = 0x1FD81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD818u;
    // 0x1fd81c: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1FD818u, 0x1FD820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD820u;
label_1fd820:
    // 0x1fd820: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x1fd820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1fd824: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fd824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fd828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd82c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fd82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fd830: 0xc080432  jal         func_2010C8
    ctx->pc = 0x1FD830u;
    SET_GPR_U32(ctx, 31, 0x1FD838u);
    ctx->pc = 0x1FD834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD830u;
    // 0x1fd834: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x1FD830u, 0x1FD838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD838u;
label_1fd838:
    // 0x1fd838: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1FD838u;
    {
        const bool branch_taken_0x1fd838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD838u;
        // 0x1fd83c: 0x2b31023  subu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd838) {
            ctx->pc = 0x1FD7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd7c8;
        }
    }
    ctx->pc = 0x1FD840u;
    // 0x1fd840: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1fd840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fd844: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1fd844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1fd848: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FD848u;
    {
        const bool branch_taken_0x1fd848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd848) {
            ctx->pc = 0x1FD84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD848u;
            // 0x1fd84c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd810;
        }
    }
    ctx->pc = 0x1FD850u;
label_1fd850:
    // 0x1fd850: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1fd850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fd854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd858: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1FD858u;
    SET_GPR_U32(ctx, 31, 0x1FD860u);
    ctx->pc = 0x1FD85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD858u;
    // 0x1fd85c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1FD858u, 0x1FD860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD860u;
label_1fd860:
    // 0x1fd860: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1fd860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fd864: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1fd864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd868: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fd868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fd86c: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x1fd86cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fd870: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1fd870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1fd874: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x1fd874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1fd878: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1fd878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1fd87c:
    // 0x1fd87c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1fd87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1fd880:
    // 0x1fd880: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1fd880u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fd884: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1fd884u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd888: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1fd888u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd88c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1fd88cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd890: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fd890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd894: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fd894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd89c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD89Cu;
        // 0x1fd8a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD8A4u;
}
