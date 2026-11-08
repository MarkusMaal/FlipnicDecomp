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

// Function: entry_001a7fa0
// Address: 0x1a7fa0 - 0x1a8058
void entry_001a7fa0_0x1a7fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7fa0_0x1a7fa0");
#endif

    switch (ctx->pc) {
        case 0x1a8040u: goto label_1a8040;
        case 0x1a8050u: goto label_1a8050;
        default: break;
    }

    ctx->pc = 0x1a7fa0u;

    // 0x1a7fa0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A7FA0u;
    {
        const bool branch_taken_0x1a7fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7fa0) {
            ctx->pc = 0x1A8058u;
            return;
        }
    }
    ctx->pc = 0x1A7FA8u;
    // 0x1a7fa8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7fac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a7facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a7fb0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a7fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7fb4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a7fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a7fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fbc: 0x24a5e020  addiu       $a1, $a1, -0x1FE0
    ctx->pc = 0x1a7fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959136));
    // 0x1a7fc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7fc4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7fc8: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a7fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a7fcc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7fd0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7fd4: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a7fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a7fd8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a7fdc: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a7fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a7fe0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7fe4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a7fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7fe8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7fec: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a7ff0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7ff4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7ff8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a7ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a7ffc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a7ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a8000: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a8000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a8004: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a8004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a8008: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a8008u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a800c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a8010: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a8010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a8014: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a8014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a8018: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a8018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a801c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8020: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a8020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8024: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a8024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a8028: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a8028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a802c: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a802cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a8030: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a8030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a8034: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a8034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a8038: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A8038u;
    SET_GPR_U32(ctx, 31, 0x1A8040u);
    ctx->pc = 0x1A803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8038u;
    // 0x1a803c: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A8038u, 0x1A8040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8040u;
label_1a8040:
    // 0x1a8040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8048: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A8048u;
    SET_GPR_U32(ctx, 31, 0x1A8050u);
    ctx->pc = 0x1A804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8048u;
    // 0x1a804c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A8048u, 0x1A8050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8050u;
label_1a8050:
    // 0x1a8050: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8050u;
    {
        const bool branch_taken_0x1a8050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8050u;
        // 0x1a8054: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8050) {
            ctx->pc = 0x1A8060u;
            return;
        }
    }
    ctx->pc = 0x1A8058u;
}
