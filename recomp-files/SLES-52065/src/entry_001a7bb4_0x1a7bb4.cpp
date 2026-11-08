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

// Function: entry_001a7bb4
// Address: 0x1a7bb4 - 0x1a7c6c
void entry_001a7bb4_0x1a7bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7bb4_0x1a7bb4");
#endif

    switch (ctx->pc) {
        case 0x1a7c54u: goto label_1a7c54;
        case 0x1a7c64u: goto label_1a7c64;
        default: break;
    }

    ctx->pc = 0x1a7bb4u;

    // 0x1a7bb4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A7BB4u;
    {
        const bool branch_taken_0x1a7bb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7bb4) {
            ctx->pc = 0x1A7C6Cu;
            return;
        }
    }
    ctx->pc = 0x1A7BBCu;
    // 0x1a7bbc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7bc0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a7bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a7bc4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a7bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7bc8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a7bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bd0: 0x24a5df80  addiu       $a1, $a1, -0x2080
    ctx->pc = 0x1a7bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958976));
    // 0x1a7bd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7bd8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7bdc: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a7bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a7be0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7be4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7be4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7be8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a7be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a7bec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a7becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a7bf0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a7bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a7bf4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7bf8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7bfc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a7bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7c00: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a7c04: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7c08: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7c08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7c0c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a7c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a7c10: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a7c14: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a7c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a7c18: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7c1c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a7c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7c20: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7c24: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a7c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a7c28: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7c2c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a7c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7c30: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a7c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7c34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a7c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7c38: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a7c3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a7c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7c40: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a7c40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a7c44: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a7c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a7c48: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a7c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a7c4c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A7C4Cu;
    SET_GPR_U32(ctx, 31, 0x1A7C54u);
    ctx->pc = 0x1A7C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C4Cu;
    // 0x1a7c50: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A7C4Cu, 0x1A7C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C54u;
label_1a7c54:
    // 0x1a7c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c5c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A7C5Cu;
    SET_GPR_U32(ctx, 31, 0x1A7C64u);
    ctx->pc = 0x1A7C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C5Cu;
    // 0x1a7c60: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A7C5Cu, 0x1A7C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C64u;
label_1a7c64:
    // 0x1a7c64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7C64u;
    {
        const bool branch_taken_0x1a7c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C64u;
        // 0x1a7c68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c64) {
            ctx->pc = 0x1A7C74u;
            return;
        }
    }
    ctx->pc = 0x1A7C6Cu;
}
