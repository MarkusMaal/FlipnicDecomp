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

// Function: entry_001abdc4
// Address: 0x1abdc4 - 0x1abe7c
void entry_001abdc4_0x1abdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abdc4_0x1abdc4");
#endif

    switch (ctx->pc) {
        case 0x1abe64u: goto label_1abe64;
        case 0x1abe74u: goto label_1abe74;
        default: break;
    }

    ctx->pc = 0x1abdc4u;

    // 0x1abdc4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1ABDC4u;
    {
        const bool branch_taken_0x1abdc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abdc4) {
            ctx->pc = 0x1ABE7Cu;
            return;
        }
    }
    ctx->pc = 0x1ABDCCu;
    // 0x1abdcc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1abdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1abdd0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1abdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1abdd4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1abdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1abdd8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1abdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1abddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abde0: 0x24a5e150  addiu       $a1, $a1, -0x1EB0
    ctx->pc = 0x1abde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959440));
    // 0x1abde4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1abde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1abde8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1abde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1abdec: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1abdecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1abdf0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1abdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1abdf4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1abdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1abdf8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1abdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1abdfc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1abdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1abe00: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1abe00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1abe04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1abe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1abe08: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1abe08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1abe0c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1abe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1abe10: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1abe10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1abe14: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1abe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1abe18: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1abe18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1abe1c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1abe1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1abe20: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1abe20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1abe24: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1abe24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1abe28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1abe28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1abe2c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1abe2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1abe30: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1abe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1abe34: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1abe34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1abe38: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1abe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1abe3c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1abe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abe40: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1abe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abe44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1abe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abe48: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1abe48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abe4c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1abe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1abe50: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1abe50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1abe54: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1abe54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1abe58: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1abe58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1abe5c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1ABE5Cu;
    SET_GPR_U32(ctx, 31, 0x1ABE64u);
    ctx->pc = 0x1ABE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE5Cu;
    // 0x1abe60: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1ABE5Cu, 0x1ABE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE64u;
label_1abe64:
    // 0x1abe64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1abe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1abe68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe6c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1ABE6Cu;
    SET_GPR_U32(ctx, 31, 0x1ABE74u);
    ctx->pc = 0x1ABE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE6Cu;
    // 0x1abe70: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1ABE6Cu, 0x1ABE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE74u;
label_1abe74:
    // 0x1abe74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABE74u;
    {
        const bool branch_taken_0x1abe74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE74u;
        // 0x1abe78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe74) {
            ctx->pc = 0x1ABE84u;
            return;
        }
    }
    ctx->pc = 0x1ABE7Cu;
}
