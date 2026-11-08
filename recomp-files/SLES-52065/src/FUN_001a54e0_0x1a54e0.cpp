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

// Function: FUN_001a54e0
// Address: 0x1a54e0 - 0x1a55e8
void FUN_001a54e0_0x1a54e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a54e0_0x1a54e0");
#endif

    switch (ctx->pc) {
        case 0x1a555cu: goto label_1a555c;
        case 0x1a5570u: goto label_1a5570;
        default: break;
    }

    ctx->pc = 0x1a54e0u;

    // 0x1a54e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a54e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a54e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a54e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a54e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a54e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a54ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a54ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a54f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a54f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54f4: 0x8c84073c  lw          $a0, 0x73C($a0)
    ctx->pc = 0x1a54f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1852)));
    // 0x1a54f8: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A54F8u;
    {
        const bool branch_taken_0x1a54f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54F8u;
        // 0x1a54fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54f8) {
            ctx->pc = 0x1A5588u;
            goto label_1a5588;
        }
    }
    ctx->pc = 0x1A5500u;
    // 0x1a5500: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5500u;
    {
        const bool branch_taken_0x1a5500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a5500) {
            ctx->pc = 0x1A5524u;
            goto label_1a5524;
        }
    }
    ctx->pc = 0x1A5508u;
    // 0x1a5508: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5508u;
    {
        const bool branch_taken_0x1a5508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5508) {
            ctx->pc = 0x1A5518u;
            goto label_1a5518;
        }
    }
    ctx->pc = 0x1A5510u;
    // 0x1a5510: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1A5510u;
    {
        const bool branch_taken_0x1a5510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5510u;
        // 0x1a5514: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5510) {
            ctx->pc = 0x1A55DCu;
            goto label_1a55dc;
        }
    }
    ctx->pc = 0x1A5518u;
label_1a5518:
    // 0x1a5518: 0xae00074c  sw          $zero, 0x74C($s0)
    ctx->pc = 0x1a5518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1868), GPR_U32(ctx, 0));
    // 0x1a551c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1A551Cu;
    {
        const bool branch_taken_0x1a551c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A551Cu;
        // 0x1a5520: 0xae03073c  sw          $v1, 0x73C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a551c) {
            ctx->pc = 0x1A55D8u;
            goto label_1a55d8;
        }
    }
    ctx->pc = 0x1A5524u;
label_1a5524:
    // 0x1a5524: 0x8e03074c  lw          $v1, 0x74C($s0)
    ctx->pc = 0x1a5524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x1a5528: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A5528u;
    {
        const bool branch_taken_0x1a5528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5528) {
            ctx->pc = 0x1A557Cu;
            goto label_1a557c;
        }
    }
    ctx->pc = 0x1A5530u;
    // 0x1a5530: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a5530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a5534: 0x8e030754  lw          $v1, 0x754($s0)
    ctx->pc = 0x1a5534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1876)));
    // 0x1a5538: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x1a5538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1a553c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1a553cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a5540: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A5540u;
    {
        const bool branch_taken_0x1a5540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5540) {
            ctx->pc = 0x1A55D8u;
            goto label_1a55d8;
        }
    }
    ctx->pc = 0x1A5548u;
    // 0x1a5548: 0x9203075c  lbu         $v1, 0x75C($s0)
    ctx->pc = 0x1a5548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1884)));
    // 0x1a554c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A554Cu;
    {
        const bool branch_taken_0x1a554c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a554c) {
            ctx->pc = 0x1A55D8u;
            goto label_1a55d8;
        }
    }
    ctx->pc = 0x1A5554u;
    // 0x1a5554: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x1A5554u;
    SET_GPR_U32(ctx, 31, 0x1A555Cu);
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x1A5554u, 0x1A555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A555Cu;
label_1a555c:
    // 0x1a555c: 0x8e020664  lw          $v0, 0x664($s0)
    ctx->pc = 0x1a555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x1a5560: 0x8e050738  lw          $a1, 0x738($s0)
    ctx->pc = 0x1a5560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
    // 0x1a5564: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1a5564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a5568: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x1A5568u;
    SET_GPR_U32(ctx, 31, 0x1A5570u);
    ctx->pc = 0x1A556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5568u;
    // 0x1a556c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x1A5568u, 0x1A5570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5570u;
label_1a5570:
    // 0x1a5570: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a5570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5574: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A5574u;
    {
        const bool branch_taken_0x1a5574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5574u;
        // 0x1a5578: 0xae03073c  sw          $v1, 0x73C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5574) {
            ctx->pc = 0x1A55D8u;
            goto label_1a55d8;
        }
    }
    ctx->pc = 0x1A557Cu;
label_1a557c:
    // 0x1a557c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a557cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a5580: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A5580u;
    {
        const bool branch_taken_0x1a5580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5580u;
        // 0x1a5584: 0xae03074c  sw          $v1, 0x74C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1868), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5580) {
            ctx->pc = 0x1A55D8u;
            goto label_1a55d8;
        }
    }
    ctx->pc = 0x1A5588u;
label_1a5588:
    // 0x1a5588: 0x8e050738  lw          $a1, 0x738($s0)
    ctx->pc = 0x1a5588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
    // 0x1a558c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5590: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a5590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a5594: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1a5594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5598: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1a5598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a559c: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x1a559cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x1a55a0: 0x8c8401fc  lw          $a0, 0x1FC($a0)
    ctx->pc = 0x1a55a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
    // 0x1a55a4: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A55A4u;
    {
        const bool branch_taken_0x1a55a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a55a4) {
            ctx->pc = 0x1A55D8u;
            goto label_1a55d8;
        }
    }
    ctx->pc = 0x1A55ACu;
    // 0x1a55ac: 0xae03073c  sw          $v1, 0x73C($s0)
    ctx->pc = 0x1a55acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 3));
    // 0x1a55b0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a55b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a55b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1a55b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a55b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a55bc: 0x0  nop
    ctx->pc = 0x1a55bcu;
    // NOP
    // 0x1a55c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a55c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a55c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a55c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a55c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a55c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a55cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a55ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a55d0: 0x0  nop
    ctx->pc = 0x1a55d0u;
    // NOP
    // 0x1a55d4: 0xae03074c  sw          $v1, 0x74C($s0)
    ctx->pc = 0x1a55d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1868), GPR_U32(ctx, 3));
label_1a55d8:
    // 0x1a55d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a55d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a55dc:
    // 0x1a55dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a55dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a55e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A55E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55E0u;
        // 0x1a55e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A55E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A55E8u;
}
