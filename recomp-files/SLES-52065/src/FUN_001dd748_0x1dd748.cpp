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

// Function: FUN_001dd748
// Address: 0x1dd748 - 0x1dd8b8
void FUN_001dd748_0x1dd748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd748_0x1dd748");
#endif

    switch (ctx->pc) {
        case 0x1dd7ecu: goto label_1dd7ec;
        case 0x1dd7f8u: goto label_1dd7f8;
        default: break;
    }

    ctx->pc = 0x1dd748u;

    // 0x1dd748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd74c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd754: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd758: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd75c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DD75Cu;
    {
        const bool branch_taken_0x1dd75c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD75Cu;
        // 0x1dd760: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd75c) {
            ctx->pc = 0x1DD790u;
            goto label_1dd790;
        }
    }
    ctx->pc = 0x1DD764u;
    // 0x1dd764: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1dd764u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd768: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1dd768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dd76c: 0x3c0140cb  lui         $at, 0x40CB
    ctx->pc = 0x1dd76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16587 << 16));
    // 0x1dd770: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dd770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1dd774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd778: 0x0  nop
    ctx->pc = 0x1dd778u;
    // NOP
    // 0x1dd77c: 0x0  nop
    ctx->pc = 0x1dd77cu;
    // NOP
    // 0x1dd780: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1dd780u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x1dd784: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD784u;
    {
        const bool branch_taken_0x1dd784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd784) {
            ctx->pc = 0x1DD794u;
            goto label_1dd794;
        }
    }
    ctx->pc = 0x1DD78Cu;
    // 0x1dd78c: 0x0  nop
    ctx->pc = 0x1dd78cu;
    // NOP
label_1dd790:
    // 0x1dd790: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dd790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dd794:
    // 0x1dd794: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1dd794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1dd798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd79c: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x1dd79cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1dd7a0: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x1dd7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1dd7a4: 0x46006064  .word       0x46006064                   # cvt.w.s     $f1, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dd7a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dd7a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1dd7a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1dd7ac: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1dd7acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd7b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd7b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1dd7b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd7bc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1dd7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1dd7c0: 0x248473c8  addiu       $a0, $a0, 0x73C8
    ctx->pc = 0x1dd7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29640));
    // 0x1dd7c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dd7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd7c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD7C8u;
    {
        const bool branch_taken_0x1dd7c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7C8u;
        // 0x1dd7cc: 0x3c120038  lui         $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7c8) {
            ctx->pc = 0x1DD7E4u;
            goto label_1dd7e4;
        }
    }
    ctx->pc = 0x1DD7D0u;
    // 0x1dd7d0: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1dd7d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1dd7d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1dd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1dd7d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dd7d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dd7dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1dd7dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1dd7e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dd7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dd7e4:
    // 0x1dd7e4: 0xc082520  jal         func_209480
    ctx->pc = 0x1DD7E4u;
    SET_GPR_U32(ctx, 31, 0x1DD7ECu);
    ctx->pc = 0x1DD7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7E4u;
    // 0x1dd7e8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x1DD7E4u, 0x1DD7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7ECu;
label_1dd7ec:
    // 0x1dd7ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7f0: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1DD7F0u;
    SET_GPR_U32(ctx, 31, 0x1DD7F8u);
    ctx->pc = 0x1DD7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7F0u;
    // 0x1dd7f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1DD7F0u, 0x1DD7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7F8u;
label_1dd7f8:
    // 0x1dd7f8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DD7F8u;
    {
        const bool branch_taken_0x1dd7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7F8u;
        // 0x1dd7fc: 0x2301023  subu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7f8) {
            ctx->pc = 0x1DD878u;
            goto label_1dd878;
        }
    }
    ctx->pc = 0x1DD800u;
    // 0x1dd800: 0x26437330  addiu       $v1, $s2, 0x7330
    ctx->pc = 0x1dd800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29488));
    // 0x1dd804: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd808: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dd808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1dd80c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd814: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x1dd814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1dd818: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD818u;
    {
        const bool branch_taken_0x1dd818 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD818u;
        // 0x1dd81c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd818) {
            ctx->pc = 0x1DD830u;
            goto label_1dd830;
        }
    }
    ctx->pc = 0x1DD820u;
    // 0x1dd820: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd824: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD824u;
    {
        const bool branch_taken_0x1dd824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD824u;
        // 0x1dd828: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd824) {
            ctx->pc = 0x1DD844u;
            goto label_1dd844;
        }
    }
    ctx->pc = 0x1DD82Cu;
    // 0x1dd82c: 0x0  nop
    ctx->pc = 0x1dd82cu;
    // NOP
label_1dd830:
    // 0x1dd830: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd834: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dd834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dd838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd83c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1dd83cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1dd840: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1dd840u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1dd844:
    // 0x1dd844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd848: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1dd848u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd84c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1DD84Cu;
    {
        const bool branch_taken_0x1dd84c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD84Cu;
        // 0x1dd850: 0x2301023  subu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd84c) {
            ctx->pc = 0x1DD878u;
            goto label_1dd878;
        }
    }
    ctx->pc = 0x1DD854u;
    // 0x1dd854: 0x26447330  addiu       $a0, $s2, 0x7330
    ctx->pc = 0x1dd854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29488));
    // 0x1dd858: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd85c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1dd860: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd864: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd868: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dd868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd86c: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1dd86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1dd870: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DD870u;
    {
        const bool branch_taken_0x1dd870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD870u;
        // 0x1dd874: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd870) {
            ctx->pc = 0x1DD8A0u;
            goto label_1dd8a0;
        }
    }
    ctx->pc = 0x1DD878u;
label_1dd878:
    // 0x1dd878: 0x2301823  subu        $v1, $s1, $s0
    ctx->pc = 0x1dd878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1dd87c: 0x26447330  addiu       $a0, $s2, 0x7330
    ctx->pc = 0x1dd87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29488));
    // 0x1dd880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd884: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x1dd884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1dd888: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1dd888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1dd88c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd894: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd898: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1dd898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1dd89c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1dd89cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1dd8a0:
    // 0x1dd8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd8a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd8a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd8a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd8ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dd8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8B0u;
        // 0x1dd8b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD8B8u;
}
