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

// Function: FUN_0016e840
// Address: 0x16e840 - 0x16e964
void FUN_0016e840_0x16e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016e840_0x16e840");
#endif

    switch (ctx->pc) {
        case 0x16e840u: goto label_16e840;
        case 0x16e844u: goto label_16e844;
        case 0x16e848u: goto label_16e848;
        case 0x16e84cu: goto label_16e84c;
        case 0x16e850u: goto label_16e850;
        case 0x16e854u: goto label_16e854;
        case 0x16e858u: goto label_16e858;
        case 0x16e85cu: goto label_16e85c;
        case 0x16e860u: goto label_16e860;
        case 0x16e864u: goto label_16e864;
        case 0x16e868u: goto label_16e868;
        case 0x16e86cu: goto label_16e86c;
        case 0x16e870u: goto label_16e870;
        case 0x16e874u: goto label_16e874;
        case 0x16e878u: goto label_16e878;
        case 0x16e87cu: goto label_16e87c;
        case 0x16e880u: goto label_16e880;
        case 0x16e884u: goto label_16e884;
        case 0x16e888u: goto label_16e888;
        case 0x16e88cu: goto label_16e88c;
        case 0x16e890u: goto label_16e890;
        case 0x16e894u: goto label_16e894;
        case 0x16e898u: goto label_16e898;
        case 0x16e89cu: goto label_16e89c;
        case 0x16e8a0u: goto label_16e8a0;
        case 0x16e8a4u: goto label_16e8a4;
        case 0x16e8a8u: goto label_16e8a8;
        case 0x16e8acu: goto label_16e8ac;
        case 0x16e8b0u: goto label_16e8b0;
        case 0x16e8b4u: goto label_16e8b4;
        case 0x16e8b8u: goto label_16e8b8;
        case 0x16e8bcu: goto label_16e8bc;
        case 0x16e8c0u: goto label_16e8c0;
        case 0x16e8c4u: goto label_16e8c4;
        case 0x16e8c8u: goto label_16e8c8;
        case 0x16e8ccu: goto label_16e8cc;
        case 0x16e8d0u: goto label_16e8d0;
        case 0x16e8d4u: goto label_16e8d4;
        case 0x16e8d8u: goto label_16e8d8;
        case 0x16e8dcu: goto label_16e8dc;
        case 0x16e8e0u: goto label_16e8e0;
        case 0x16e8e4u: goto label_16e8e4;
        case 0x16e8e8u: goto label_16e8e8;
        case 0x16e8ecu: goto label_16e8ec;
        case 0x16e8f0u: goto label_16e8f0;
        case 0x16e8f4u: goto label_16e8f4;
        case 0x16e8f8u: goto label_16e8f8;
        case 0x16e8fcu: goto label_16e8fc;
        case 0x16e900u: goto label_16e900;
        case 0x16e904u: goto label_16e904;
        case 0x16e908u: goto label_16e908;
        case 0x16e90cu: goto label_16e90c;
        case 0x16e910u: goto label_16e910;
        case 0x16e914u: goto label_16e914;
        case 0x16e918u: goto label_16e918;
        case 0x16e91cu: goto label_16e91c;
        case 0x16e920u: goto label_16e920;
        case 0x16e924u: goto label_16e924;
        case 0x16e928u: goto label_16e928;
        case 0x16e92cu: goto label_16e92c;
        case 0x16e930u: goto label_16e930;
        case 0x16e934u: goto label_16e934;
        case 0x16e938u: goto label_16e938;
        case 0x16e93cu: goto label_16e93c;
        case 0x16e940u: goto label_16e940;
        case 0x16e944u: goto label_16e944;
        case 0x16e948u: goto label_16e948;
        case 0x16e94cu: goto label_16e94c;
        case 0x16e950u: goto label_16e950;
        case 0x16e954u: goto label_16e954;
        case 0x16e958u: goto label_16e958;
        case 0x16e95cu: goto label_16e95c;
        case 0x16e960u: goto label_16e960;
        default: break;
    }

    ctx->pc = 0x16e840u;

label_16e840:
    // 0x16e840: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_16e844:
    // 0x16e844: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x16e844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_16e848:
    // 0x16e848: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x16e848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_16e84c:
    // 0x16e84c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16e84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_16e850:
    // 0x16e850: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16e850u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e854:
    // 0x16e854: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16e854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_16e858:
    // 0x16e858: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16e858u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e85c:
    // 0x16e85c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16e85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_16e860:
    // 0x16e860: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x16e860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16e864:
    // 0x16e864: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16e864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16e868:
    // 0x16e868: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16e868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e86c:
    // 0x16e86c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16e86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16e870:
    // 0x16e870: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16e870u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16e874:
    // 0x16e874: 0x1000002c  b           . + 4 + (0x2C << 2)
label_16e878:
    if (ctx->pc == 0x16E878u) {
        ctx->pc = 0x16E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E874u;
        // 0x16e878: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E87Cu;
        goto label_16e87c;
    }
    ctx->pc = 0x16E874u;
    {
        const bool branch_taken_0x16e874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E874u;
        // 0x16e878: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e874) {
            ctx->pc = 0x16E928u;
            goto label_16e928;
        }
    }
    ctx->pc = 0x16E87Cu;
label_16e87c:
    // 0x16e87c: 0x8ea20210  lw          $v0, 0x210($s5)
    ctx->pc = 0x16e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 528)));
label_16e880:
    // 0x16e880: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x16e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_16e884:
    // 0x16e884: 0x84420080  lh          $v0, 0x80($v0)
    ctx->pc = 0x16e884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_16e888:
    // 0x16e888: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
label_16e88c:
    if (ctx->pc == 0x16E88Cu) {
        ctx->pc = 0x16E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E888u;
        // 0x16e88c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E890u;
        goto label_16e890;
    }
    ctx->pc = 0x16E888u;
    {
        const bool branch_taken_0x16e888 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E888u;
        // 0x16e88c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e888) {
            ctx->pc = 0x16E91Cu;
            goto label_16e91c;
        }
    }
    ctx->pc = 0x16E890u;
label_16e890:
    // 0x16e890: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16e890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16e894:
    // 0x16e894: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16e898:
    // 0x16e898: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16e898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16e89c:
    // 0x16e89c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e8a0:
    // 0x16e8a0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e8a4:
    // 0x16e8a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e8a8:
    // 0x16e8a8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16e8ac:
    // 0x16e8ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e8b0:
    // 0x16e8b0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16e8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e8b4:
    // 0x16e8b4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e8b8:
    // 0x16e8b8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16e8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16e8bc:
    // 0x16e8bc: 0x320f809  jalr        $t9
label_16e8c0:
    if (ctx->pc == 0x16E8C0u) {
        ctx->pc = 0x16E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8BCu;
        // 0x16e8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E8C4u;
        goto label_16e8c4;
    }
    ctx->pc = 0x16E8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E8C4u);
        ctx->pc = 0x16E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8BCu;
        // 0x16e8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E8BCu, 0x16E8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E8C4u;
label_16e8c4:
    // 0x16e8c4: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_16e8c8:
    if (ctx->pc == 0x16E8C8u) {
        ctx->pc = 0x16E8CCu;
        goto label_16e8cc;
    }
    ctx->pc = 0x16E8C4u;
    {
        const bool branch_taken_0x16e8c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8c4) {
            ctx->pc = 0x16E91Cu;
            goto label_16e91c;
        }
    }
    ctx->pc = 0x16E8CCu;
label_16e8cc:
    // 0x16e8cc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x16e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_16e8d0:
    // 0x16e8d0: 0x80620024  lb          $v0, 0x24($v1)
    ctx->pc = 0x16e8d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16e8d4:
    // 0x16e8d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16e8d8:
    if (ctx->pc == 0x16E8D8u) {
        ctx->pc = 0x16E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8D4u;
        // 0x16e8d8: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E8DCu;
        goto label_16e8dc;
    }
    ctx->pc = 0x16E8D4u;
    {
        const bool branch_taken_0x16e8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8D4u;
        // 0x16e8d8: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8d4) {
            ctx->pc = 0x16E8E4u;
            goto label_16e8e4;
        }
    }
    ctx->pc = 0x16E8DCu;
label_16e8dc:
    // 0x16e8dc: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x16e8dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16e8e0:
    // 0x16e8e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_16e8e4:
    // 0x16e8e4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e8e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e8e8:
    // 0x16e8e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e8ec:
    // 0x16e8ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e8f0:
    // 0x16e8f0: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x16e8f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_16e8f4:
    // 0x16e8f4: 0x320f809  jalr        $t9
label_16e8f8:
    if (ctx->pc == 0x16E8F8u) {
        ctx->pc = 0x16E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8F4u;
        // 0x16e8f8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E8FCu;
        goto label_16e8fc;
    }
    ctx->pc = 0x16E8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E8FCu);
        ctx->pc = 0x16E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8F4u;
        // 0x16e8f8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E8F4u, 0x16E8FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E8FCu;
label_16e8fc:
    // 0x16e8fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16e8fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16e900:
    // 0x16e900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e904:
    // 0x16e904: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16e904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16e908:
    // 0x16e908: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x16e908u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_16e90c:
    // 0x16e90c: 0x0  nop
    ctx->pc = 0x16e90cu;
    // NOP
label_16e910:
    // 0x16e910: 0x0  nop
    ctx->pc = 0x16e910u;
    // NOP
label_16e914:
    // 0x16e914: 0xc04c72c  jal         func_131CB0
label_16e918:
    if (ctx->pc == 0x16E918u) {
        ctx->pc = 0x16E91Cu;
        goto label_16e91c;
    }
    ctx->pc = 0x16E914u;
    SET_GPR_U32(ctx, 31, 0x16E91Cu);
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x16E914u, 0x16E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E91Cu;
label_16e91c:
    // 0x16e91c: 0x0  nop
    ctx->pc = 0x16e91cu;
    // NOP
label_16e920:
    // 0x16e920: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x16e920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_16e924:
    // 0x16e924: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16e924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16e928:
    // 0x16e928: 0x86a20214  lh          $v0, 0x214($s5)
    ctx->pc = 0x16e928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 532)));
label_16e92c:
    // 0x16e92c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x16e92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16e930:
    // 0x16e930: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_16e934:
    if (ctx->pc == 0x16E934u) {
        ctx->pc = 0x16E938u;
        goto label_16e938;
    }
    ctx->pc = 0x16E930u;
    {
        const bool branch_taken_0x16e930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e930) {
            ctx->pc = 0x16E87Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e87c;
        }
    }
    ctx->pc = 0x16E938u;
label_16e938:
    // 0x16e938: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x16e938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_16e93c:
    // 0x16e93c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16e940:
    // 0x16e940: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16e940u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16e944:
    // 0x16e944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e948:
    // 0x16e948: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16e948u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16e94c:
    // 0x16e94c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16e94cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16e950:
    // 0x16e950: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16e950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16e954:
    // 0x16e954: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16e954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16e958:
    // 0x16e958: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16e958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16e95c:
    // 0x16e95c: 0x3e00008  jr          $ra
label_16e960:
    if (ctx->pc == 0x16E960u) {
        ctx->pc = 0x16E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E95Cu;
        // 0x16e960: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E964u;
        goto label_fallthrough_0x16e95c;
    }
    ctx->pc = 0x16E95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E95Cu;
        // 0x16e960: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16e95c:
    ctx->pc = 0x16E964u;
}
