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

// Function: FUN_0013a7e0
// Address: 0x13a7e0 - 0x13aacc
void FUN_0013a7e0_0x13a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013a7e0_0x13a7e0");
#endif

    switch (ctx->pc) {
        case 0x13a81cu: goto label_13a81c;
        case 0x13a83cu: goto label_13a83c;
        case 0x13a850u: goto label_13a850;
        case 0x13a95cu: goto label_13a95c;
        case 0x13a9a4u: goto label_13a9a4;
        case 0x13a9e4u: goto label_13a9e4;
        case 0x13aa24u: goto label_13aa24;
        case 0x13aa34u: goto label_13aa34;
        case 0x13aa40u: goto label_13aa40;
        case 0x13aa5cu: goto label_13aa5c;
        case 0x13aa6cu: goto label_13aa6c;
        default: break;
    }

    ctx->pc = 0x13a7e0u;

    // 0x13a7e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x13a7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x13a7e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13a7e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13a7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13a7ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13a7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13a7f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13a7f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a7f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13a7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13a7fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a800: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13a804: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x13a804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x13a808: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x13a808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13a80c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13a810: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a814: 0xc040168  jal         func_1005A0
    ctx->pc = 0x13A814u;
    SET_GPR_U32(ctx, 31, 0x13A81Cu);
    ctx->pc = 0x13A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A814u;
    // 0x13a818: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x13A814u, 0x13A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A81Cu;
label_13a81c:
    // 0x13a81c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x13a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x13a820: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x13a820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x13a824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a828: 0x24a5aad0  addiu       $a1, $a1, -0x5530
    ctx->pc = 0x13a828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945488));
    // 0x13a82c: 0x24c67790  addiu       $a2, $a2, 0x7790
    ctx->pc = 0x13a82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x13a830: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x13a830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13a834: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x13A834u;
    SET_GPR_U32(ctx, 31, 0x13A83Cu);
    ctx->pc = 0x13A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A834u;
    // 0x13a838: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x13A834u, 0x13A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A83Cu;
label_13a83c:
    // 0x13a83c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x13a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x13a840: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13a840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a844: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13a844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a848: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x13A848u;
    {
        const bool branch_taken_0x13a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A848u;
        // 0x13a84c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a848) {
            ctx->pc = 0x13AA9Cu;
            goto label_13aa9c;
        }
    }
    ctx->pc = 0x13A850u;
label_13a850:
    // 0x13a850: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x13a850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13a854: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x13a854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x13a858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a85c: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x13a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
    // 0x13a860: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x13a860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x13a864: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x13a864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x13a868: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x13a868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a86c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13a86cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a870: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x13a870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x13a874: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x13a874u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x13a878: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a87c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13a880: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x13a880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x13a884: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a888: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13a88c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x13a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x13a890: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a894: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13a898: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x13a898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x13a89c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a8a0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13a8a4: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x13a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x13a8a8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a8ac: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x13a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x13a8b0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x13a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13a8b4: 0x8c640090  lw          $a0, 0x90($v1)
    ctx->pc = 0x13a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x13a8b8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x13a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x13a8bc: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13A8BCu;
    {
        const bool branch_taken_0x13a8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8BCu;
        // 0x13a8c0: 0x3c024400  lui         $v0, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8bc) {
            ctx->pc = 0x13A900u;
            goto label_13a900;
        }
    }
    ctx->pc = 0x13A8C4u;
    // 0x13a8c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13a8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a8c8: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x13a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a8cc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a8d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a8d4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x13a8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x13a8d8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a8dc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a8e0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x13a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x13a8e4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a8e8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x13a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13a8ec: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x13a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x13a8f0: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x13a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a8f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a8f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13a8f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x13a8fc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x13a8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_13a900:
    // 0x13a900: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a904: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13a904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a908: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x13a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13a90c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a910: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13a914: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x13a914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a918: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13a918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a91c: 0x0  nop
    ctx->pc = 0x13a91cu;
    // NOP
    // 0x13a920: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13A920u;
    {
        const bool branch_taken_0x13a920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a920) {
            ctx->pc = 0x13A93Cu;
            goto label_13a93c;
        }
    }
    ctx->pc = 0x13A928u;
    // 0x13a928: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x13a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a92c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13a92cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a930: 0x0  nop
    ctx->pc = 0x13a930u;
    // NOP
    // 0x13a934: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x13A934u;
    {
        const bool branch_taken_0x13a934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a934) {
            ctx->pc = 0x13A95Cu;
            goto label_13a95c;
        }
    }
    ctx->pc = 0x13A93Cu;
label_13a93c:
    // 0x13a93c: 0x0  nop
    ctx->pc = 0x13a93cu;
    // NOP
    // 0x13a940: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a944: 0x8f858580  lw          $a1, -0x7A80($gp)
    ctx->pc = 0x13a944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935936)));
    // 0x13a948: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x13a948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x13a94c: 0x27a600d4  addiu       $a2, $sp, 0xD4
    ctx->pc = 0x13a94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x13a950: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13a950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a954: 0xc04eb84  jal         func_13AE10
    ctx->pc = 0x13A954u;
    SET_GPR_U32(ctx, 31, 0x13A95Cu);
    ctx->pc = 0x13A958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A954u;
    // 0x13a958: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AE10u, 0x13A954u, 0x13A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A95Cu;
label_13a95c:
    // 0x13a95c: 0x0  nop
    ctx->pc = 0x13a95cu;
    // NOP
    // 0x13a960: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a964: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13a968: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x13a968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x13a96c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x13a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13a970: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x13a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x13a974: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x13a974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x13a978: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A978u;
    {
        const bool branch_taken_0x13a978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A978u;
        // 0x13a97c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a978) {
            ctx->pc = 0x13A988u;
            goto label_13a988;
        }
    }
    ctx->pc = 0x13A980u;
    // 0x13a980: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A980u;
    {
        const bool branch_taken_0x13a980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a980) {
            ctx->pc = 0x13A9A4u;
            goto label_13a9a4;
        }
    }
    ctx->pc = 0x13A988u;
label_13a988:
    // 0x13a988: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a98c: 0x8f858584  lw          $a1, -0x7A7C($gp)
    ctx->pc = 0x13a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935940)));
    // 0x13a990: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13a990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13a994: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x13a994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x13a998: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13a998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a99c: 0xc04eb84  jal         func_13AE10
    ctx->pc = 0x13A99Cu;
    SET_GPR_U32(ctx, 31, 0x13A9A4u);
    ctx->pc = 0x13A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A99Cu;
    // 0x13a9a0: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AE10u, 0x13A99Cu, 0x13A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9A4u;
label_13a9a4:
    // 0x13a9a4: 0x0  nop
    ctx->pc = 0x13a9a4u;
    // NOP
    // 0x13a9a8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a9ac: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x13a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13a9b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a9b4: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13a9b8: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x13a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x13a9bc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x13a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x13a9c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A9C0u;
    {
        const bool branch_taken_0x13a9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a9c0) {
            ctx->pc = 0x13A9E4u;
            goto label_13a9e4;
        }
    }
    ctx->pc = 0x13A9C8u;
    // 0x13a9c8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a9cc: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x13a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x13a9d0: 0x8f858588  lw          $a1, -0x7A78($gp)
    ctx->pc = 0x13a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    // 0x13a9d4: 0x27a600dc  addiu       $a2, $sp, 0xDC
    ctx->pc = 0x13a9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x13a9d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a9dc: 0xc04eb84  jal         func_13AE10
    ctx->pc = 0x13A9DCu;
    SET_GPR_U32(ctx, 31, 0x13A9E4u);
    ctx->pc = 0x13A9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A9DCu;
    // 0x13a9e0: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AE10u, 0x13A9DCu, 0x13A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9E4u;
label_13a9e4:
    // 0x13a9e4: 0x0  nop
    ctx->pc = 0x13a9e4u;
    // NOP
    // 0x13a9e8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a9ec: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a9f0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x13a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x13a9f4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a9f8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x13a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13a9fc: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x13a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x13aa00: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13aa04: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13aa08: 0xac540024  sw          $s4, 0x24($v0)
    ctx->pc = 0x13aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 20));
    // 0x13aa0c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13aa10: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x13aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13aa14: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13aa18: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13aa1c: 0xc080748  jal         func_201D20
    ctx->pc = 0x13AA1Cu;
    SET_GPR_U32(ctx, 31, 0x13AA24u);
    ctx->pc = 0x13AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA1Cu;
    // 0x13aa20: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x13AA1Cu, 0x13AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA24u;
label_13aa24:
    // 0x13aa24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13AA24u;
    {
        const bool branch_taken_0x13aa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aa24) {
            ctx->pc = 0x13AA7Cu;
            goto label_13aa7c;
        }
    }
    ctx->pc = 0x13AA2Cu;
    // 0x13aa2c: 0xc04c25c  jal         func_130970
    ctx->pc = 0x13AA2Cu;
    SET_GPR_U32(ctx, 31, 0x13AA34u);
    ctx->pc = 0x130970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130970u, 0x13AA2Cu, 0x13AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA34u;
label_13aa34:
    // 0x13aa34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13aa34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa38: 0xc080702  jal         func_201C08
    ctx->pc = 0x13AA38u;
    SET_GPR_U32(ctx, 31, 0x13AA40u);
    ctx->pc = 0x13AA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA38u;
    // 0x13aa3c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x13AA38u, 0x13AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA40u;
label_13aa40:
    // 0x13aa40: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13aa44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13aa48: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x13aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13aa4c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13aa50: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13aa54: 0xc080664  jal         func_201990
    ctx->pc = 0x13AA54u;
    SET_GPR_U32(ctx, 31, 0x13AA5Cu);
    ctx->pc = 0x13AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA54u;
    // 0x13aa58: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x13AA54u, 0x13AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA5Cu;
label_13aa5c:
    // 0x13aa5c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13aa60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13aa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa64: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x13AA64u;
    SET_GPR_U32(ctx, 31, 0x13AA6Cu);
    ctx->pc = 0x13AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA64u;
    // 0x13aa68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x13AA64u, 0x13AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA6Cu;
label_13aa6c:
    // 0x13aa6c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13aa70: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13aa74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13AA74u;
    {
        const bool branch_taken_0x13aa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA74u;
        // 0x13aa78: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa74) {
            ctx->pc = 0x13AA8Cu;
            goto label_13aa8c;
        }
    }
    ctx->pc = 0x13AA7Cu;
label_13aa7c:
    // 0x13aa7c: 0x0  nop
    ctx->pc = 0x13aa7cu;
    // NOP
    // 0x13aa80: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13aa84: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13aa88: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x13aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_13aa8c:
    // 0x13aa8c: 0x0  nop
    ctx->pc = 0x13aa8cu;
    // NOP
    // 0x13aa90: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x13aa90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x13aa94: 0x267300a0  addiu       $s3, $s3, 0xA0
    ctx->pc = 0x13aa94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x13aa98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13aa98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13aa9c:
    // 0x13aa9c: 0x0  nop
    ctx->pc = 0x13aa9cu;
    // NOP
    // 0x13aaa0: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x13aaa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x13aaa4: 0x1460ff6a  bnez        $v1, . + 4 + (-0x96 << 2)
    ctx->pc = 0x13AAA4u;
    {
        const bool branch_taken_0x13aaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAA4u;
        // 0x13aaa8: 0x3c043f80  lui         $a0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aaa4) {
            ctx->pc = 0x13A850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a850;
        }
    }
    ctx->pc = 0x13AAACu;
    // 0x13aaac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13aaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13aab0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13aab0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13aab4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13aab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13aab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13aab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13aabc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13aabcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13aac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13aac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13aac4: 0x3e00008  jr          $ra
    ctx->pc = 0x13AAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAC4u;
        // 0x13aac8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AACCu;
}
