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

// Function: entry_0019a554
// Address: 0x19a554 - 0x19a60c
void entry_0019a554_0x19a554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a554_0x19a554");
#endif

    switch (ctx->pc) {
        case 0x19a5f4u: goto label_19a5f4;
        case 0x19a604u: goto label_19a604;
        default: break;
    }

    ctx->pc = 0x19a554u;

    // 0x19a554: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19A554u;
    {
        const bool branch_taken_0x19a554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a554) {
            ctx->pc = 0x19A60Cu;
            return;
        }
    }
    ctx->pc = 0x19A55Cu;
    // 0x19a55c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a560: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19a560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19a564: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19a564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a568: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19a568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a570: 0x24a5d920  addiu       $a1, $a1, -0x26E0
    ctx->pc = 0x19a570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957344));
    // 0x19a574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19a574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a578: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a57c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19a580: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a584: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19a584u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a588: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19a588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19a58c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19a590: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19a590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19a594: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a598: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19a598u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19a59c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19a5a0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19a5a4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a5a8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19a5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a5ac: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19a5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19a5b0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19a5b4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19a5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19a5b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a5bc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19a5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19a5c0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19a5c4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19a5c8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a5cc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19a5d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a5d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a5d8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19a5dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19a5e0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19a5e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19a5e4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19a5e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19a5e8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19a5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19a5ec: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19A5ECu;
    SET_GPR_U32(ctx, 31, 0x19A5F4u);
    ctx->pc = 0x19A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5ECu;
    // 0x19a5f0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19A5ECu, 0x19A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5F4u;
label_19a5f4:
    // 0x19a5f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5fc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19A5FCu;
    SET_GPR_U32(ctx, 31, 0x19A604u);
    ctx->pc = 0x19A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5FCu;
    // 0x19a600: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19A5FCu, 0x19A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A604u;
label_19a604:
    // 0x19a604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19A604u;
    {
        const bool branch_taken_0x19a604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A604u;
        // 0x19a608: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a604) {
            ctx->pc = 0x19A614u;
            return;
        }
    }
    ctx->pc = 0x19A60Cu;
}
