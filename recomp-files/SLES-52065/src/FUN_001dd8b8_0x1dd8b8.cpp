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

// Function: FUN_001dd8b8
// Address: 0x1dd8b8 - 0x1dda20
void FUN_001dd8b8_0x1dd8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd8b8_0x1dd8b8");
#endif

    switch (ctx->pc) {
        case 0x1dd954u: goto label_1dd954;
        case 0x1dd960u: goto label_1dd960;
        default: break;
    }

    ctx->pc = 0x1dd8b8u;

    // 0x1dd8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd8bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd8c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd8c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd8cc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DD8CCu;
    {
        const bool branch_taken_0x1dd8cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8CCu;
        // 0x1dd8d0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8cc) {
            ctx->pc = 0x1DD8F8u;
            goto label_1dd8f8;
        }
    }
    ctx->pc = 0x1DD8D4u;
    // 0x1dd8d4: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1dd8d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd8d8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1dd8d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dd8dc: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x1dd8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x1dd8e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd8e4: 0x0  nop
    ctx->pc = 0x1dd8e4u;
    // NOP
    // 0x1dd8e8: 0x0  nop
    ctx->pc = 0x1dd8e8u;
    // NOP
    // 0x1dd8ec: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1dd8ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x1dd8f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD8F0u;
    {
        const bool branch_taken_0x1dd8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd8f0) {
            ctx->pc = 0x1DD8FCu;
            goto label_1dd8fc;
        }
    }
    ctx->pc = 0x1DD8F8u;
label_1dd8f8:
    // 0x1dd8f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dd8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dd8fc:
    // 0x1dd8fc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1dd8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1dd900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd904: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x1dd904u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1dd908: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x1dd908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1dd90c: 0x46006064  .word       0x46006064                   # cvt.w.s     $f1, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dd90cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dd910: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1dd910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1dd914: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1dd914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd918: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd91c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dd91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1dd920: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd924: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1dd924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1dd928: 0x248473cc  addiu       $a0, $a0, 0x73CC
    ctx->pc = 0x1dd928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29644));
    // 0x1dd92c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dd92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd930: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD930u;
    {
        const bool branch_taken_0x1dd930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD930u;
        // 0x1dd934: 0x3c120038  lui         $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd930) {
            ctx->pc = 0x1DD94Cu;
            goto label_1dd94c;
        }
    }
    ctx->pc = 0x1DD938u;
    // 0x1dd938: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1dd938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1dd93c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1dd93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1dd940: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dd940u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dd944: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1dd944u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1dd948: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dd948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dd94c:
    // 0x1dd94c: 0xc082520  jal         func_209480
    ctx->pc = 0x1DD94Cu;
    SET_GPR_U32(ctx, 31, 0x1DD954u);
    ctx->pc = 0x1DD950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD94Cu;
    // 0x1dd950: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x1DD94Cu, 0x1DD954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD954u;
label_1dd954:
    // 0x1dd954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd958: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1DD958u;
    SET_GPR_U32(ctx, 31, 0x1DD960u);
    ctx->pc = 0x1DD95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD958u;
    // 0x1dd95c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1DD958u, 0x1DD960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD960u;
label_1dd960:
    // 0x1dd960: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DD960u;
    {
        const bool branch_taken_0x1dd960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD960u;
        // 0x1dd964: 0x2301023  subu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd960) {
            ctx->pc = 0x1DD9E0u;
            goto label_1dd9e0;
        }
    }
    ctx->pc = 0x1DD968u;
    // 0x1dd968: 0x26437330  addiu       $v1, $s2, 0x7330
    ctx->pc = 0x1dd968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29488));
    // 0x1dd96c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd970: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dd970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1dd974: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd97c: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x1dd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x1dd980: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD980u;
    {
        const bool branch_taken_0x1dd980 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD980u;
        // 0x1dd984: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd980) {
            ctx->pc = 0x1DD998u;
            goto label_1dd998;
        }
    }
    ctx->pc = 0x1DD988u;
    // 0x1dd988: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd98c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD98Cu;
    {
        const bool branch_taken_0x1dd98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD98Cu;
        // 0x1dd990: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd98c) {
            ctx->pc = 0x1DD9ACu;
            goto label_1dd9ac;
        }
    }
    ctx->pc = 0x1DD994u;
    // 0x1dd994: 0x0  nop
    ctx->pc = 0x1dd994u;
    // NOP
label_1dd998:
    // 0x1dd998: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd99c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dd99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dd9a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd9a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1dd9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1dd9a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1dd9a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1dd9ac:
    // 0x1dd9ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd9acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd9b0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1dd9b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd9b4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1DD9B4u;
    {
        const bool branch_taken_0x1dd9b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9B4u;
        // 0x1dd9b8: 0x2301023  subu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9b4) {
            ctx->pc = 0x1DD9E0u;
            goto label_1dd9e0;
        }
    }
    ctx->pc = 0x1DD9BCu;
    // 0x1dd9bc: 0x26447330  addiu       $a0, $s2, 0x7330
    ctx->pc = 0x1dd9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29488));
    // 0x1dd9c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd9c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dd9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1dd9c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd9cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd9d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dd9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd9d4: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1dd9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1dd9d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DD9D8u;
    {
        const bool branch_taken_0x1dd9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9D8u;
        // 0x1dd9dc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9d8) {
            ctx->pc = 0x1DDA08u;
            goto label_1dda08;
        }
    }
    ctx->pc = 0x1DD9E0u;
label_1dd9e0:
    // 0x1dd9e0: 0x2301823  subu        $v1, $s1, $s0
    ctx->pc = 0x1dd9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1dd9e4: 0x26447330  addiu       $a0, $s2, 0x7330
    ctx->pc = 0x1dd9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29488));
    // 0x1dd9e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd9ec: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x1dd9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1dd9f0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1dd9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1dd9f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd9f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd9fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dda00: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1dda00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1dda04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1dda04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1dda08:
    // 0x1dda08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dda08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dda0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dda0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dda10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dda10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dda14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dda14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dda18: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA18u;
        // 0x1dda1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDA20u;
}
