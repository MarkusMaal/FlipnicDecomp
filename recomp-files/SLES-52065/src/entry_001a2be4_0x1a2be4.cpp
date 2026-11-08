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

// Function: entry_001a2be4
// Address: 0x1a2be4 - 0x1a2c9c
void entry_001a2be4_0x1a2be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2be4_0x1a2be4");
#endif

    switch (ctx->pc) {
        case 0x1a2c84u: goto label_1a2c84;
        case 0x1a2c94u: goto label_1a2c94;
        default: break;
    }

    ctx->pc = 0x1a2be4u;

    // 0x1a2be4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A2BE4u;
    {
        const bool branch_taken_0x1a2be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2be4) {
            ctx->pc = 0x1A2C9Cu;
            return;
        }
    }
    ctx->pc = 0x1A2BECu;
    // 0x1a2bec: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2bf0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a2bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a2bf4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2bf8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c00: 0x24a5de40  addiu       $a1, $a1, -0x21C0
    ctx->pc = 0x1a2c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958656));
    // 0x1a2c04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a2c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2c08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2c0c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a2c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a2c10: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2c14: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a2c14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2c18: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a2c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a2c1c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a2c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2c20: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a2c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a2c24: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2c28: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a2c28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2c2c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a2c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2c30: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a2c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a2c34: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2c38: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a2c38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2c3c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a2c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a2c40: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a2c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2c44: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a2c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a2c48: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2c4c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a2c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2c50: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2c54: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a2c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a2c58: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2c5c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a2c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2c60: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a2c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2c64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a2c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2c68: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a2c6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a2c70: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a2c70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a2c74: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a2c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a2c78: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a2c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a2c7c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A2C7Cu;
    SET_GPR_U32(ctx, 31, 0x1A2C84u);
    ctx->pc = 0x1A2C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C7Cu;
    // 0x1a2c80: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A2C7Cu, 0x1A2C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C84u;
label_1a2c84:
    // 0x1a2c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c8c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A2C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A2C94u);
    ctx->pc = 0x1A2C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C8Cu;
    // 0x1a2c90: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A2C8Cu, 0x1A2C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C94u;
label_1a2c94:
    // 0x1a2c94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2C94u;
    {
        const bool branch_taken_0x1a2c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C94u;
        // 0x1a2c98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c94) {
            ctx->pc = 0x1A2CA4u;
            return;
        }
    }
    ctx->pc = 0x1A2C9Cu;
}
