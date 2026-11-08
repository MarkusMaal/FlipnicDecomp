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

// Function: entry_001a4d34
// Address: 0x1a4d34 - 0x1a4dec
void entry_001a4d34_0x1a4d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4d34_0x1a4d34");
#endif

    switch (ctx->pc) {
        case 0x1a4dd4u: goto label_1a4dd4;
        case 0x1a4de4u: goto label_1a4de4;
        default: break;
    }

    ctx->pc = 0x1a4d34u;

    // 0x1a4d34: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A4D34u;
    {
        const bool branch_taken_0x1a4d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d34) {
            ctx->pc = 0x1A4DECu;
            return;
        }
    }
    ctx->pc = 0x1A4D3Cu;
    // 0x1a4d3c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4d40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a4d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a4d44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a4d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4d48: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x1a4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1a4d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d50: 0x24a5df00  addiu       $a1, $a1, -0x2100
    ctx->pc = 0x1a4d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958848));
    // 0x1a4d54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4d58: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4d5c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a4d60: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4d64: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a4d64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4d68: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a4d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a4d6c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a4d70: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a4d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a4d74: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4d78: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a4d78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a4d7c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a4d80: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a4d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a4d84: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4d88: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a4d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4d8c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a4d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a4d90: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a4d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a4d94: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a4d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a4d98: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4d9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a4d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a4da0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a4da4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a4da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a4da8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4dac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a4dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4db0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a4db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4db4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a4db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4db8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a4dbc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a4dc0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a4dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a4dc4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a4dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a4dc8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a4dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a4dcc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A4DCCu;
    SET_GPR_U32(ctx, 31, 0x1A4DD4u);
    ctx->pc = 0x1A4DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DCCu;
    // 0x1a4dd0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A4DCCu, 0x1A4DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DD4u;
label_1a4dd4:
    // 0x1a4dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4dd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ddc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A4DDCu;
    SET_GPR_U32(ctx, 31, 0x1A4DE4u);
    ctx->pc = 0x1A4DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DDCu;
    // 0x1a4de0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A4DDCu, 0x1A4DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DE4u;
label_1a4de4:
    // 0x1a4de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4DE4u;
    {
        const bool branch_taken_0x1a4de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DE4u;
        // 0x1a4de8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4de4) {
            ctx->pc = 0x1A4DF4u;
            return;
        }
    }
    ctx->pc = 0x1A4DECu;
}
