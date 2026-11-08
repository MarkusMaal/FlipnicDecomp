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

// Function: entry_001a7e14
// Address: 0x1a7e14 - 0x1a7ecc
void entry_001a7e14_0x1a7e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7e14_0x1a7e14");
#endif

    switch (ctx->pc) {
        case 0x1a7eb4u: goto label_1a7eb4;
        case 0x1a7ec4u: goto label_1a7ec4;
        default: break;
    }

    ctx->pc = 0x1a7e14u;

    // 0x1a7e14: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A7E14u;
    {
        const bool branch_taken_0x1a7e14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e14) {
            ctx->pc = 0x1A7ECCu;
            return;
        }
    }
    ctx->pc = 0x1A7E1Cu;
    // 0x1a7e1c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7e20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a7e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a7e24: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a7e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7e28: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a7e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a7e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e30: 0x24a5dfe0  addiu       $a1, $a1, -0x2020
    ctx->pc = 0x1a7e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959072));
    // 0x1a7e34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7e38: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7e3c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a7e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a7e40: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7e44: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7e44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7e48: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a7e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a7e4c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a7e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a7e50: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a7e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a7e54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7e58: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a7e58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7e5c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7e60: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a7e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a7e64: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7e68: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7e6c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a7e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a7e70: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a7e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a7e74: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a7e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a7e78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7e7c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a7e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7e80: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a7e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7e84: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a7e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a7e88: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7e8c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a7e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7e90: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a7e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7e94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a7e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7e98: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a7e9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a7e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7ea0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a7ea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a7ea4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a7ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a7ea8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a7ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a7eac: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A7EACu;
    SET_GPR_U32(ctx, 31, 0x1A7EB4u);
    ctx->pc = 0x1A7EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7EACu;
    // 0x1a7eb0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A7EACu, 0x1A7EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7EB4u;
label_1a7eb4:
    // 0x1a7eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7eb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ebc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A7EBCu;
    SET_GPR_U32(ctx, 31, 0x1A7EC4u);
    ctx->pc = 0x1A7EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7EBCu;
    // 0x1a7ec0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A7EBCu, 0x1A7EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7EC4u;
label_1a7ec4:
    // 0x1a7ec4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7EC4u;
    {
        const bool branch_taken_0x1a7ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EC4u;
        // 0x1a7ec8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ec4) {
            ctx->pc = 0x1A7ED4u;
            return;
        }
    }
    ctx->pc = 0x1A7ECCu;
}
