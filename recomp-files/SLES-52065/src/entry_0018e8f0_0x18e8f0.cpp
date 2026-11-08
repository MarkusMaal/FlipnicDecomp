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

// Function: entry_0018e8f0
// Address: 0x18e8f0 - 0x18e9c8
void entry_0018e8f0_0x18e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e8f0_0x18e8f0");
#endif

    switch (ctx->pc) {
        case 0x18e938u: goto label_18e938;
        default: break;
    }

    ctx->pc = 0x18e8f0u;

    // 0x18e8f0: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x18e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x18e8f4: 0xae232720  sw          $v1, 0x2720($s1)
    ctx->pc = 0x18e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
    // 0x18e8f8: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x18e8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x18e8fc: 0xae220494  sw          $v0, 0x494($s1)
    ctx->pc = 0x18e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1172), GPR_U32(ctx, 2));
    // 0x18e900: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18e900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18e904: 0x24a52910  addiu       $a1, $a1, 0x2910
    ctx->pc = 0x18e904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10512));
    // 0x18e908: 0xae220498  sw          $v0, 0x498($s1)
    ctx->pc = 0x18e908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1176), GPR_U32(ctx, 2));
    // 0x18e90c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18e90cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212910u));
    // 0x18e910: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18e910u;
    { uint32_t bits = FAST_READ32(0x212918u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e914: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x18e914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18e918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e91c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18e91cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x18e920: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18e920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18e924: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e928: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18e928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18e92c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18e930: 0xc063e40  jal         func_18F900
    ctx->pc = 0x18E930u;
    SET_GPR_U32(ctx, 31, 0x18E938u);
    ctx->pc = 0x18E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E930u;
    // 0x18e934: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F900u, 0x18E930u, 0x18E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E938u;
label_18e938:
    // 0x18e938: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e93c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18e93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e940: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x18e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18e944: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18e944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18e948: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18e948u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18e94c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18e950: 0xaca60254  sw          $a2, 0x254($a1)
    ctx->pc = 0x18e950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 6));
    // 0x18e954: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e958: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18e958u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18e95c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18e95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18e960: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18e960u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x18e964: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18e964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x18e968: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18e96c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18e96cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18e970: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18e970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18e974: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x18e974u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x18e978: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e97c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18e97cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18e980: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18e980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18e984: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18e984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x18e988: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18e988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x18e98c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18e990: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18e990u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18e994: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18e994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18e998: 0xaca00154  sw          $zero, 0x154($a1)
    ctx->pc = 0x18e998u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 0));
    // 0x18e99c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18e9a0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x18e9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18e9a4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x18e9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e9a8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x18e9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e9ac: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x18e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18e9b0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x18e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x18e9b4: 0xe4820274  swc1        $f2, 0x274($a0)
    ctx->pc = 0x18e9b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
    // 0x18e9b8: 0xe4810278  swc1        $f1, 0x278($a0)
    ctx->pc = 0x18e9b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
    // 0x18e9bc: 0xe480027c  swc1        $f0, 0x27C($a0)
    ctx->pc = 0x18e9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
    // 0x18e9c0: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x18E9C0u;
    {
        const bool branch_taken_0x18e9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9C0u;
        // 0x18e9c4: 0xac830280  sw          $v1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9c0) {
            ctx->pc = 0x18EC94u;
            return;
        }
    }
    ctx->pc = 0x18E9C8u;
}
