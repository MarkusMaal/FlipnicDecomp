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

// Function: entry_0018e7f0
// Address: 0x18e7f0 - 0x18e8b4
void entry_0018e7f0_0x18e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e7f0_0x18e7f0");
#endif

    switch (ctx->pc) {
        case 0x18e824u: goto label_18e824;
        default: break;
    }

    ctx->pc = 0x18e7f0u;

    // 0x18e7f0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18e7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18e7f4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x18e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18e7f8: 0x24a52900  addiu       $a1, $a1, 0x2900
    ctx->pc = 0x18e7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10496));
    // 0x18e7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e800: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18e800u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212900u));
    // 0x18e804: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18e804u;
    { uint32_t bits = FAST_READ32(0x212908u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e808: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18e808u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x18e80c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18e80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18e810: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18e810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e814: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18e814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18e818: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18e81c: 0xc063e40  jal         func_18F900
    ctx->pc = 0x18E81Cu;
    SET_GPR_U32(ctx, 31, 0x18E824u);
    ctx->pc = 0x18E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E81Cu;
    // 0x18e820: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F900u, 0x18E81Cu, 0x18E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E824u;
label_18e824:
    // 0x18e824: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e828: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18e828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e82c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x18e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18e830: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18e830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18e834: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18e834u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18e838: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18e83c: 0xaca60254  sw          $a2, 0x254($a1)
    ctx->pc = 0x18e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 6));
    // 0x18e840: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e844: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18e844u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18e848: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18e848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18e84c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18e84cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x18e850: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18e850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x18e854: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18e858: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18e858u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18e85c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18e860: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x18e860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x18e864: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e868: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18e868u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18e86c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18e86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18e870: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18e870u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x18e874: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18e874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x18e878: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18e87c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18e87cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18e880: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18e880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18e884: 0xaca00154  sw          $zero, 0x154($a1)
    ctx->pc = 0x18e884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 0));
    // 0x18e888: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e88c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x18e88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18e890: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x18e890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e894: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x18e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e898: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x18e898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18e89c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x18e89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x18e8a0: 0xe4820274  swc1        $f2, 0x274($a0)
    ctx->pc = 0x18e8a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
    // 0x18e8a4: 0xe4810278  swc1        $f1, 0x278($a0)
    ctx->pc = 0x18e8a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
    // 0x18e8a8: 0xe480027c  swc1        $f0, 0x27C($a0)
    ctx->pc = 0x18e8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
    // 0x18e8ac: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x18E8ACu;
    {
        const bool branch_taken_0x18e8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8ACu;
        // 0x18e8b0: 0xac830280  sw          $v1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8ac) {
            ctx->pc = 0x18EC94u;
            return;
        }
    }
    ctx->pc = 0x18E8B4u;
}
