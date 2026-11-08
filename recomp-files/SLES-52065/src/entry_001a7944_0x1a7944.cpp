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

// Function: entry_001a7944
// Address: 0x1a7944 - 0x1a79fc
void entry_001a7944_0x1a7944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7944_0x1a7944");
#endif

    switch (ctx->pc) {
        case 0x1a79e4u: goto label_1a79e4;
        case 0x1a79f4u: goto label_1a79f4;
        default: break;
    }

    ctx->pc = 0x1a7944u;

    // 0x1a7944: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A7944u;
    {
        const bool branch_taken_0x1a7944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7944) {
            ctx->pc = 0x1A79FCu;
            return;
        }
    }
    ctx->pc = 0x1A794Cu;
    // 0x1a794c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7950: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a7950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a7954: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a7954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7958: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a7958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a795c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a795cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7960: 0x24a5df40  addiu       $a1, $a1, -0x20C0
    ctx->pc = 0x1a7960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958912));
    // 0x1a7964: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7968: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a796c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a796cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a7970: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7974: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7978: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a7978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a797c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a797cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a7980: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a7980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a7984: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7988: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a7988u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a798c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a798cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7990: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a7990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a7994: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7998: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7998u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a799c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a799cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a79a0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a79a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a79a4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a79a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a79a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a79ac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a79acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a79b0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a79b4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a79b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a79b8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a79bc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a79bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a79c0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a79c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a79c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a79c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a79c8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a79cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a79d0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a79d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a79d4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a79d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a79d8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a79d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a79dc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A79DCu;
    SET_GPR_U32(ctx, 31, 0x1A79E4u);
    ctx->pc = 0x1A79E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79DCu;
    // 0x1a79e0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A79DCu, 0x1A79E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79E4u;
label_1a79e4:
    // 0x1a79e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a79e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a79e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79ec: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A79ECu;
    SET_GPR_U32(ctx, 31, 0x1A79F4u);
    ctx->pc = 0x1A79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79ECu;
    // 0x1a79f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A79ECu, 0x1A79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79F4u;
label_1a79f4:
    // 0x1a79f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A79F4u;
    {
        const bool branch_taken_0x1a79f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79F4u;
        // 0x1a79f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79f4) {
            ctx->pc = 0x1A7A04u;
            return;
        }
    }
    ctx->pc = 0x1A79FCu;
}
