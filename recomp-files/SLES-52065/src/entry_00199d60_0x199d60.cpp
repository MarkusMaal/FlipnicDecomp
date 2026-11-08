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

// Function: entry_00199d60
// Address: 0x199d60 - 0x199e18
void entry_00199d60_0x199d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199d60_0x199d60");
#endif

    switch (ctx->pc) {
        case 0x199e00u: goto label_199e00;
        case 0x199e10u: goto label_199e10;
        default: break;
    }

    ctx->pc = 0x199d60u;

    // 0x199d60: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x199D60u;
    {
        const bool branch_taken_0x199d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d60) {
            ctx->pc = 0x199E18u;
            return;
        }
    }
    ctx->pc = 0x199D68u;
    // 0x199d68: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x199d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x199d6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x199d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x199d70: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x199d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199d74: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x199d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x199d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d7c: 0x24a5d8a0  addiu       $a1, $a1, -0x2760
    ctx->pc = 0x199d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957216));
    // 0x199d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x199d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x199d84: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x199d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x199d88: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x199d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x199d8c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x199d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x199d90: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x199d90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x199d94: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x199d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x199d98: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x199d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x199d9c: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x199d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x199da0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x199da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x199da4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x199da4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x199da8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x199dac: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x199dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x199db0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x199db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x199db4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x199db4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x199db8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x199db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x199dbc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x199dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x199dc0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x199dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x199dc4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x199dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x199dc8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x199dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x199dcc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x199dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x199dd0: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x199dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x199dd4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x199dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x199dd8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x199dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x199ddc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x199ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199de0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x199de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199de4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x199de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x199de8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x199de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x199dec: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x199decu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x199df0: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x199df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x199df4: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x199df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x199df8: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x199DF8u;
    SET_GPR_U32(ctx, 31, 0x199E00u);
    ctx->pc = 0x199DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199DF8u;
    // 0x199dfc: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x199DF8u, 0x199E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E00u;
label_199e00:
    // 0x199e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e08: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x199E08u;
    SET_GPR_U32(ctx, 31, 0x199E10u);
    ctx->pc = 0x199E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E08u;
    // 0x199e0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x199E08u, 0x199E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E10u;
label_199e10:
    // 0x199e10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x199E10u;
    {
        const bool branch_taken_0x199e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E10u;
        // 0x199e14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e10) {
            ctx->pc = 0x199E20u;
            return;
        }
    }
    ctx->pc = 0x199E18u;
}
