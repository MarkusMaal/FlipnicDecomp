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

// Function: FUN_001a7450
// Address: 0x1a7450 - 0x1a7848
void FUN_001a7450_0x1a7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7450_0x1a7450");
#endif

    switch (ctx->pc) {
        case 0x1a7470u: goto label_1a7470;
        case 0x1a74b4u: goto label_1a74b4;
        case 0x1a74c4u: goto label_1a74c4;
        case 0x1a7514u: goto label_1a7514;
        case 0x1a7524u: goto label_1a7524;
        case 0x1a758cu: goto label_1a758c;
        case 0x1a759cu: goto label_1a759c;
        case 0x1a75d8u: goto label_1a75d8;
        case 0x1a75e8u: goto label_1a75e8;
        case 0x1a75f4u: goto label_1a75f4;
        case 0x1a760cu: goto label_1a760c;
        case 0x1a762cu: goto label_1a762c;
        case 0x1a763cu: goto label_1a763c;
        case 0x1a764cu: goto label_1a764c;
        case 0x1a765cu: goto label_1a765c;
        case 0x1a7674u: goto label_1a7674;
        case 0x1a7680u: goto label_1a7680;
        case 0x1a7690u: goto label_1a7690;
        case 0x1a7744u: goto label_1a7744;
        case 0x1a7760u: goto label_1a7760;
        case 0x1a7790u: goto label_1a7790;
        case 0x1a779cu: goto label_1a779c;
        case 0x1a77acu: goto label_1a77ac;
        case 0x1a77b8u: goto label_1a77b8;
        case 0x1a77d4u: goto label_1a77d4;
        case 0x1a780cu: goto label_1a780c;
        case 0x1a7818u: goto label_1a7818;
        case 0x1a7828u: goto label_1a7828;
        default: break;
    }

    ctx->pc = 0x1a7450u;

    // 0x1a7450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a7450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a7454: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a7454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a7458: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a7458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a745c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a7460: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a7460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7464: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a7464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a7468: 0xc045fb4  jal         func_117ED0
    ctx->pc = 0x1A7468u;
    SET_GPR_U32(ctx, 31, 0x1A7470u);
    ctx->pc = 0x1A746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7468u;
    // 0x1a746c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x117ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117ED0u, 0x1A7468u, 0x1A7470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7470u;
label_1a7470:
    // 0x1a7470: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1a7470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1a7474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7478: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1a7478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1a747c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1a747cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a7480: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1a7480u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a7484: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a7484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a7488: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1a7488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a748c: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x1a748cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a7490: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7490u;
    {
        const bool branch_taken_0x1a7490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7490u;
        // 0x1a7494: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7490) {
            ctx->pc = 0x1A74A0u;
            goto label_1a74a0;
        }
    }
    ctx->pc = 0x1A7498u;
    // 0x1a7498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7498u;
    {
        const bool branch_taken_0x1a7498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7498) {
            ctx->pc = 0x1A74A4u;
            goto label_1a74a4;
        }
    }
    ctx->pc = 0x1A74A0u;
label_1a74a0:
    // 0x1a74a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a74a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a74a4:
    // 0x1a74a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A74A4u;
    {
        const bool branch_taken_0x1a74a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a74a4) {
            ctx->pc = 0x1A74D8u;
            goto label_1a74d8;
        }
    }
    ctx->pc = 0x1A74ACu;
    // 0x1a74ac: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A74ACu;
    SET_GPR_U32(ctx, 31, 0x1A74B4u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A74ACu, 0x1A74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A74B4u;
label_1a74b4:
    // 0x1a74b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a74b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a74b8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1a74b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a74bc: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A74BCu;
    SET_GPR_U32(ctx, 31, 0x1A74C4u);
    ctx->pc = 0x1A74C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A74BCu;
    // 0x1a74c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A74BCu, 0x1A74C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A74C4u;
label_1a74c4:
    // 0x1a74c4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1a74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1a74c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a74c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a74cc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1a74ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1a74d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a74d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a74d4: 0xa242001c  sb          $v0, 0x1C($s2)
    ctx->pc = 0x1a74d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 28), (uint8_t)GPR_U32(ctx, 2));
label_1a74d8:
    // 0x1a74d8: 0x86030022  lh          $v1, 0x22($s0)
    ctx->pc = 0x1a74d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x1a74dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a74e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A74E0u;
    {
        const bool branch_taken_0x1a74e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a74e0) {
            ctx->pc = 0x1A74F0u;
            goto label_1a74f0;
        }
    }
    ctx->pc = 0x1A74E8u;
    // 0x1a74e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A74E8u;
    {
        const bool branch_taken_0x1a74e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a74e8) {
            ctx->pc = 0x1A74F4u;
            goto label_1a74f4;
        }
    }
    ctx->pc = 0x1A74F0u;
label_1a74f0:
    // 0x1a74f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a74f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a74f4:
    // 0x1a74f4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A74F4u;
    {
        const bool branch_taken_0x1a74f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a74f4) {
            ctx->pc = 0x1A7554u;
            goto label_1a7554;
        }
    }
    ctx->pc = 0x1A74FCu;
    // 0x1a74fc: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1a74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1a7500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7504: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A7504u;
    {
        const bool branch_taken_0x1a7504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7504) {
            ctx->pc = 0x1A7554u;
            goto label_1a7554;
        }
    }
    ctx->pc = 0x1A750Cu;
    // 0x1a750c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A750Cu;
    SET_GPR_U32(ctx, 31, 0x1A7514u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A750Cu, 0x1A7514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7514u;
label_1a7514:
    // 0x1a7514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7518: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a7518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a751c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A751Cu;
    SET_GPR_U32(ctx, 31, 0x1A7524u);
    ctx->pc = 0x1A7520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A751Cu;
    // 0x1a7520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A751Cu, 0x1A7524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7524u;
label_1a7524:
    // 0x1a7524: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1a7524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1a7528: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a7528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a752c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7530: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7538: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a7538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a753c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a753cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7540: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a7540u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a7544: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a7544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a7548: 0x0  nop
    ctx->pc = 0x1a7548u;
    // NOP
    // 0x1a754c: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1a754cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x1a7550: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1a7550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_1a7554:
    // 0x1a7554: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x1a7554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x1a7558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a755c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A755Cu;
    {
        const bool branch_taken_0x1a755c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a755c) {
            ctx->pc = 0x1A756Cu;
            goto label_1a756c;
        }
    }
    ctx->pc = 0x1A7564u;
    // 0x1a7564: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7564u;
    {
        const bool branch_taken_0x1a7564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7564) {
            ctx->pc = 0x1A7570u;
            goto label_1a7570;
        }
    }
    ctx->pc = 0x1A756Cu;
label_1a756c:
    // 0x1a756c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a756cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7570:
    // 0x1a7570: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A7570u;
    {
        const bool branch_taken_0x1a7570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7570u;
        // 0x1a7574: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7570) {
            ctx->pc = 0x1A75D0u;
            goto label_1a75d0;
        }
    }
    ctx->pc = 0x1A7578u;
    // 0x1a7578: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1a7578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1a757c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A757Cu;
    {
        const bool branch_taken_0x1a757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a757c) {
            ctx->pc = 0x1A75CCu;
            goto label_1a75cc;
        }
    }
    ctx->pc = 0x1A7584u;
    // 0x1a7584: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A7584u;
    SET_GPR_U32(ctx, 31, 0x1A758Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A7584u, 0x1A758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A758Cu;
label_1a758c:
    // 0x1a758c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a758cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7590: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a7590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a7594: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A7594u;
    SET_GPR_U32(ctx, 31, 0x1A759Cu);
    ctx->pc = 0x1A7598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7594u;
    // 0x1a7598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A7594u, 0x1A759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A759Cu;
label_1a759c:
    // 0x1a759c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a75a0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a75a4: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1a75a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x1a75a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a75a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a75ac: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a75acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a75b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a75b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a75b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a75b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a75b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a75b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a75bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a75bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a75c0: 0x0  nop
    ctx->pc = 0x1a75c0u;
    // NOP
    // 0x1a75c4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1a75c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1a75c8: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1a75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_1a75cc:
    // 0x1a75cc: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a75ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1a75d0:
    // 0x1a75d0: 0xc062200  jal         func_188800
    ctx->pc = 0x1A75D0u;
    SET_GPR_U32(ctx, 31, 0x1A75D8u);
    ctx->pc = 0x1A75D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75D0u;
    // 0x1a75d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1A75D0u, 0x1A75D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75D8u;
label_1a75d8:
    // 0x1a75d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a75dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a75dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a75e0: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A75E0u;
    SET_GPR_U32(ctx, 31, 0x1A75E8u);
    ctx->pc = 0x1A75E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75E0u;
    // 0x1a75e4: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A75E0u, 0x1A75E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75E8u;
label_1a75e8:
    // 0x1a75e8: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a75e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a75ec: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A75ECu;
    SET_GPR_U32(ctx, 31, 0x1A75F4u);
    ctx->pc = 0x1A75F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75ECu;
    // 0x1a75f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A75ECu, 0x1A75F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75F4u;
label_1a75f4:
    // 0x1a75f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a75f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a75f8: 0x3c02c280  lui         $v0, 0xC280
    ctx->pc = 0x1a75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
    // 0x1a75fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a75fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a7600: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a7600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7604: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1A7604u;
    SET_GPR_U32(ctx, 31, 0x1A760Cu);
    ctx->pc = 0x1A7608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7604u;
    // 0x1a7608: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1A7604u, 0x1A760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A760Cu;
label_1a760c:
    // 0x1a760c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a760cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a7610: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a7610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7614: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a7618: 0x0  nop
    ctx->pc = 0x1a7618u;
    // NOP
    // 0x1a761c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a761cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a7620: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1a7620u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1a7624: 0xc062860  jal         func_18A180
    ctx->pc = 0x1A7624u;
    SET_GPR_U32(ctx, 31, 0x1A762Cu);
    ctx->pc = 0x1A7628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7624u;
    // 0x1a7628: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A7624u, 0x1A762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A762Cu;
label_1a762c:
    // 0x1a762c: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x1a762cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1a7630: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x1a7630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1a7634: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1A7634u;
    SET_GPR_U32(ctx, 31, 0x1A763Cu);
    ctx->pc = 0x1A7638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7634u;
    // 0x1a7638: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1A7634u, 0x1A763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A763Cu;
label_1a763c:
    // 0x1a763c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a763cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a7640: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a7640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7644: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A7644u;
    SET_GPR_U32(ctx, 31, 0x1A764Cu);
    ctx->pc = 0x1A7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7644u;
    // 0x1a7648: 0x24a50738  addiu       $a1, $a1, 0x738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A7644u, 0x1A764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A764Cu;
label_1a764c:
    // 0x1a764c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a764cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a7650: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a7654: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A7654u;
    SET_GPR_U32(ctx, 31, 0x1A765Cu);
    ctx->pc = 0x1A7658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7654u;
    // 0x1a7658: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A7654u, 0x1A765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A765Cu;
label_1a765c:
    // 0x1a765c: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x1a765cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
    // 0x1a7660: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a7660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7664: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a7668: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a766c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1A766Cu;
    SET_GPR_U32(ctx, 31, 0x1A7674u);
    ctx->pc = 0x1A7670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A766Cu;
    // 0x1a7670: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1A766Cu, 0x1A7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7674u;
label_1a7674:
    // 0x1a7674: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1a7674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1a7678: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1A7678u;
    SET_GPR_U32(ctx, 31, 0x1A7680u);
    ctx->pc = 0x1A767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7678u;
    // 0x1a767c: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1A7678u, 0x1A7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7680u;
label_1a7680:
    // 0x1a7680: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a7680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a7684: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a7684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7688: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A7688u;
    SET_GPR_U32(ctx, 31, 0x1A7690u);
    ctx->pc = 0x1A768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7688u;
    // 0x1a768c: 0x24a50740  addiu       $a1, $a1, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A7688u, 0x1A7690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7690u;
label_1a7690:
    // 0x1a7690: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1a7690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7694: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a7694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a7698: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a7698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a769c: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1a769cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x1a76a0: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x1a76a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a76a4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a76a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a76a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a76ac: 0x0  nop
    ctx->pc = 0x1a76acu;
    // NOP
    // 0x1a76b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a76b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a76b4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1a76b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1a76b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a76b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a76bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a76bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a76c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a76c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a76c4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1a76c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1a76c8: 0x0  nop
    ctx->pc = 0x1a76c8u;
    // NOP
    // 0x1a76cc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1a76ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1a76d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A76D0u;
    {
        const bool branch_taken_0x1a76d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76D0u;
        // 0x1a76d4: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76d0) {
            ctx->pc = 0x1A76E0u;
            goto label_1a76e0;
        }
    }
    ctx->pc = 0x1A76D8u;
    // 0x1a76d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A76D8u;
    {
        const bool branch_taken_0x1a76d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76D8u;
        // 0x1a76dc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76d8) {
            ctx->pc = 0x1A76E4u;
            goto label_1a76e4;
        }
    }
    ctx->pc = 0x1A76E0u;
label_1a76e0:
    // 0x1a76e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a76e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a76e4:
    // 0x1a76e4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a76e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a76ec: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1a76ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1a76f0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1a76f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a76f4: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A76F4u;
    {
        const bool branch_taken_0x1a76f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a76f4) {
            ctx->pc = 0x1A772Cu;
            goto label_1a772c;
        }
    }
    ctx->pc = 0x1A76FCu;
    // 0x1a76fc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a76fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7700: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a7700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a7704: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7708: 0x0  nop
    ctx->pc = 0x1a7708u;
    // NOP
    // 0x1a770c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a770cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a7710: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a7710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7714: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a7714u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a7718: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a7718u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a771c: 0x0  nop
    ctx->pc = 0x1a771cu;
    // NOP
    // 0x1a7720: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a7720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7724: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7724u;
    {
        const bool branch_taken_0x1a7724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7724u;
        // 0x1a7728: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7724) {
            ctx->pc = 0x1A773Cu;
            goto label_1a773c;
        }
    }
    ctx->pc = 0x1A772Cu;
label_1a772c:
    // 0x1a772c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a7730: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a7730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a7734: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1a7734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1a7738: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a7738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1a773c:
    // 0x1a773c: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A773Cu;
    SET_GPR_U32(ctx, 31, 0x1A7744u);
    ctx->pc = 0x1A7740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A773Cu;
    // 0x1a7740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A773Cu, 0x1A7744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7744u;
label_1a7744:
    // 0x1a7744: 0x3c03c180  lui         $v1, 0xC180
    ctx->pc = 0x1a7744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49536 << 16));
    // 0x1a7748: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1a7748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1a774c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a774cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a7750: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a7754: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1a7754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1a7758: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1A7758u;
    SET_GPR_U32(ctx, 31, 0x1A7760u);
    ctx->pc = 0x1A775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7758u;
    // 0x1a775c: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1A7758u, 0x1A7760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7760u;
label_1a7760:
    // 0x1a7760: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1a7760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1a7764: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7764u;
    {
        const bool branch_taken_0x1a7764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7764u;
        // 0x1a7768: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7764) {
            ctx->pc = 0x1A7774u;
            goto label_1a7774;
        }
    }
    ctx->pc = 0x1A776Cu;
    // 0x1a776c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A776Cu;
    {
        const bool branch_taken_0x1a776c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A776Cu;
        // 0x1a7770: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a776c) {
            ctx->pc = 0x1A7778u;
            goto label_1a7778;
        }
    }
    ctx->pc = 0x1A7774u;
label_1a7774:
    // 0x1a7774: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7778:
    // 0x1a7778: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a7778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a777c: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a777cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7780: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1a7780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1a7784: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7784u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a7788: 0xc062860  jal         func_18A180
    ctx->pc = 0x1A7788u;
    SET_GPR_U32(ctx, 31, 0x1A7790u);
    ctx->pc = 0x1A778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7788u;
    // 0x1a778c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A7788u, 0x1A7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7790u;
label_1a7790:
    // 0x1a7790: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1a7790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1a7794: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1A7794u;
    SET_GPR_U32(ctx, 31, 0x1A779Cu);
    ctx->pc = 0x1A7798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7794u;
    // 0x1a7798: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1A7794u, 0x1A779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A779Cu;
label_1a779c:
    // 0x1a779c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a779cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a77a0: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a77a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a77a4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A77A4u;
    SET_GPR_U32(ctx, 31, 0x1A77ACu);
    ctx->pc = 0x1A77A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77A4u;
    // 0x1a77a8: 0x24a50740  addiu       $a1, $a1, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A77A4u, 0x1A77ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77ACu;
label_1a77ac:
    // 0x1a77ac: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a77acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a77b0: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A77B0u;
    SET_GPR_U32(ctx, 31, 0x1A77B8u);
    ctx->pc = 0x1A77B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77B0u;
    // 0x1a77b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A77B0u, 0x1A77B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77B8u;
label_1a77b8:
    // 0x1a77b8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1a77b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1a77bc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1a77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1a77c0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a77c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a77c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a77c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a77c8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1a77c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1a77cc: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1A77CCu;
    SET_GPR_U32(ctx, 31, 0x1A77D4u);
    ctx->pc = 0x1A77D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77CCu;
    // 0x1a77d0: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1A77CCu, 0x1A77D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77D4u;
label_1a77d4:
    // 0x1a77d4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1a77d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1a77d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a77dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A77DCu;
    {
        const bool branch_taken_0x1a77dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77DCu;
        // 0x1a77e0: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77dc) {
            ctx->pc = 0x1A77ECu;
            goto label_1a77ec;
        }
    }
    ctx->pc = 0x1A77E4u;
    // 0x1a77e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A77E4u;
    {
        const bool branch_taken_0x1a77e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77E4u;
        // 0x1a77e8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77e4) {
            ctx->pc = 0x1A77F4u;
            goto label_1a77f4;
        }
    }
    ctx->pc = 0x1A77ECu;
label_1a77ec:
    // 0x1a77ec: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1a77ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a77f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a77f4:
    // 0x1a77f4: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a77f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a77f8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1a77f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1a77fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a77fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a7800: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a7800u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1a7804: 0xc062860  jal         func_18A180
    ctx->pc = 0x1A7804u;
    SET_GPR_U32(ctx, 31, 0x1A780Cu);
    ctx->pc = 0x1A7808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7804u;
    // 0x1a7808: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A7804u, 0x1A780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A780Cu;
label_1a780c:
    // 0x1a780c: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x1a780cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a7810: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1A7810u;
    SET_GPR_U32(ctx, 31, 0x1A7818u);
    ctx->pc = 0x1A7814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7810u;
    // 0x1a7814: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1A7810u, 0x1A7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7818u;
label_1a7818:
    // 0x1a7818: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a7818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a781c: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7820: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A7820u;
    SET_GPR_U32(ctx, 31, 0x1A7828u);
    ctx->pc = 0x1A7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7820u;
    // 0x1a7824: 0x24a50740  addiu       $a1, $a1, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A7820u, 0x1A7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7828u;
label_1a7828:
    // 0x1a7828: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a7828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a782c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a782cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7830: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a7830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7834: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a7834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a7838: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a7838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a783c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a783cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7840: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7840u;
        // 0x1a7844: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7848u;
}
