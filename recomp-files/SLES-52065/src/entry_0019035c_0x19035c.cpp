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

// Function: entry_0019035c
// Address: 0x19035c - 0x190448
void entry_0019035c_0x19035c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019035c_0x19035c");
#endif

    switch (ctx->pc) {
        case 0x190410u: goto label_190410;
        case 0x190424u: goto label_190424;
        case 0x190440u: goto label_190440;
        default: break;
    }

    ctx->pc = 0x19035cu;

    // 0x19035c: 0x0  nop
    ctx->pc = 0x19035cu;
    // NOP
    // 0x190360: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x190360u;
    {
        const bool branch_taken_0x190360 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x190364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190360u;
        // 0x190364: 0x3c040021  lui         $a0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190360) {
            ctx->pc = 0x19044Cu;
            return;
        }
    }
    ctx->pc = 0x190368u;
    // 0x190368: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x190368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19036c: 0x24842940  addiu       $a0, $a0, 0x2940
    ctx->pc = 0x19036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10560));
    // 0x190370: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x190370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190374: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x190374u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190378: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x190378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19037c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x19037cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x190380: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190380u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190384: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190388: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x190388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x19038c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x19038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x190390: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x190390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x190394: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x190394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x190398: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x190398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19039c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x19039cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1903a0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1903a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1903a4: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x1903a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1903a8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1903a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1903ac: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1903acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1903b0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1903b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1903b4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1903b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1903b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1903b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1903bc: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1903bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1903c0: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x1903c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1903c4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1903c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1903c8: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x1903c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1903cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1903ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1903d0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1903d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1903d4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1903d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1903d8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1903d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1903dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1903dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1903e0: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1903e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1903e4: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x1903e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1903e8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1903e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1903ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1903ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1903f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1903f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1903f4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1903f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1903f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1903f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1903fc: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1903fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x190400: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x190400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x190404: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x190404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x190408: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x190408u;
    SET_GPR_U32(ctx, 31, 0x190410u);
    ctx->pc = 0x19040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190408u;
    // 0x19040c: 0xac530280  sw          $s3, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x190408u, 0x190410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190410u;
label_190410:
    // 0x190410: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x190410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x190414: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x190414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190418: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x190418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19041c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19041Cu;
    SET_GPR_U32(ctx, 31, 0x190424u);
    ctx->pc = 0x190420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19041Cu;
    // 0x190420: 0x24440210  addiu       $a0, $v0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19041Cu, 0x190424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190424u;
label_190424:
    // 0x190424: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x190424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x190428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19042c: 0xae720664  sw          $s2, 0x664($s3)
    ctx->pc = 0x19042cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1636), GPR_U32(ctx, 18));
    // 0x190430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190434: 0xae720668  sw          $s2, 0x668($s3)
    ctx->pc = 0x190434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1640), GPR_U32(ctx, 18));
    // 0x190438: 0xc06433c  jal         func_190CF0
    ctx->pc = 0x190438u;
    SET_GPR_U32(ctx, 31, 0x190440u);
    ctx->pc = 0x19043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190438u;
    // 0x19043c: 0xae620660  sw          $v0, 0x660($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190CF0u, 0x190438u, 0x190440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190440u;
label_190440:
    // 0x190440: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190440u;
    {
        const bool branch_taken_0x190440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190440) {
            ctx->pc = 0x19044Cu;
            return;
        }
    }
    ctx->pc = 0x190448u;
}
