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

// Function: entry_001a0914
// Address: 0x1a0914 - 0x1a09cc
void entry_001a0914_0x1a0914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0914_0x1a0914");
#endif

    switch (ctx->pc) {
        case 0x1a09b4u: goto label_1a09b4;
        case 0x1a09c4u: goto label_1a09c4;
        default: break;
    }

    ctx->pc = 0x1a0914u;

    // 0x1a0914: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A0914u;
    {
        const bool branch_taken_0x1a0914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0914) {
            ctx->pc = 0x1A09CCu;
            return;
        }
    }
    ctx->pc = 0x1A091Cu;
    // 0x1a091c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0920: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a0920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a0924: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a0924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0928: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a0928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a092c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a092cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0930: 0x24a5dc80  addiu       $a1, $a1, -0x2380
    ctx->pc = 0x1a0930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958208));
    // 0x1a0934: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a0934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a0938: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a0938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a093c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a093cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a0940: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a0940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0944: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a0944u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a0948: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a0948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a094c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a094cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a0950: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a0950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a0954: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a0954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a0958: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a0958u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a095c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a0960: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a0960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a0964: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a0964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0968: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a0968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a096c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a096cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a0970: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a0970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a0974: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a0974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a0978: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a0978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a097c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a097cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a0980: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a0980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a0984: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a0984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a0988: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a0988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a098c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0990: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a0990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0994: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a0994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0998: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a0998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a099c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a09a0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a09a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a09a4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a09a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a09a8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a09a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a09ac: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A09ACu;
    SET_GPR_U32(ctx, 31, 0x1A09B4u);
    ctx->pc = 0x1A09B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09ACu;
    // 0x1a09b0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A09ACu, 0x1A09B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09B4u;
label_1a09b4:
    // 0x1a09b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a09b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a09b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09bc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A09BCu;
    SET_GPR_U32(ctx, 31, 0x1A09C4u);
    ctx->pc = 0x1A09C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09BCu;
    // 0x1a09c0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A09BCu, 0x1A09C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09C4u;
label_1a09c4:
    // 0x1a09c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A09C4u;
    {
        const bool branch_taken_0x1a09c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09C4u;
        // 0x1a09c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09c4) {
            ctx->pc = 0x1A09D4u;
            return;
        }
    }
    ctx->pc = 0x1A09CCu;
}
