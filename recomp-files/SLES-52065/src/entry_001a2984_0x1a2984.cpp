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

// Function: entry_001a2984
// Address: 0x1a2984 - 0x1a2a3c
void entry_001a2984_0x1a2984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2984_0x1a2984");
#endif

    switch (ctx->pc) {
        case 0x1a2a24u: goto label_1a2a24;
        case 0x1a2a34u: goto label_1a2a34;
        default: break;
    }

    ctx->pc = 0x1a2984u;

    // 0x1a2984: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A2984u;
    {
        const bool branch_taken_0x1a2984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2984) {
            ctx->pc = 0x1A2A3Cu;
            return;
        }
    }
    ctx->pc = 0x1A298Cu;
    // 0x1a298c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2990: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a2990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a2994: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2998: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a2998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a299c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a299cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29a0: 0x24a5ddc0  addiu       $a1, $a1, -0x2240
    ctx->pc = 0x1a29a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958528));
    // 0x1a29a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a29a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a29a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a29a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a29ac: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a29acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a29b0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a29b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a29b4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a29b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a29b8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a29b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a29bc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a29c0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a29c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a29c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a29c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a29c8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a29c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a29cc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a29ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a29d0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a29d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a29d4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a29d8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a29d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a29dc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a29dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a29e0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a29e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a29e4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a29e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a29e8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a29e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a29ec: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a29ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a29f0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a29f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a29f4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a29f8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a29f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a29fc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a29fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2a00: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a2a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2a04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a2a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2a08: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a2a0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a2a10: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a2a10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a2a14: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a2a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a2a18: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a2a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a2a1c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A2A1Cu;
    SET_GPR_U32(ctx, 31, 0x1A2A24u);
    ctx->pc = 0x1A2A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A1Cu;
    // 0x1a2a20: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A2A1Cu, 0x1A2A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A24u;
label_1a2a24:
    // 0x1a2a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2a28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2a2c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A2A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A2A34u);
    ctx->pc = 0x1A2A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A2Cu;
    // 0x1a2a30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A2A2Cu, 0x1A2A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A34u;
label_1a2a34:
    // 0x1a2a34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2A34u;
    {
        const bool branch_taken_0x1a2a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A34u;
        // 0x1a2a38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a34) {
            ctx->pc = 0x1A2A44u;
            return;
        }
    }
    ctx->pc = 0x1A2A3Cu;
}
