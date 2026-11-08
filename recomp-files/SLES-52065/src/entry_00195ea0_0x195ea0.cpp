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

// Function: entry_00195ea0
// Address: 0x195ea0 - 0x195f58
void entry_00195ea0_0x195ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195ea0_0x195ea0");
#endif

    switch (ctx->pc) {
        case 0x195f40u: goto label_195f40;
        case 0x195f50u: goto label_195f50;
        default: break;
    }

    ctx->pc = 0x195ea0u;

    // 0x195ea0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x195EA0u;
    {
        const bool branch_taken_0x195ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ea0) {
            ctx->pc = 0x195F58u;
            return;
        }
    }
    ctx->pc = 0x195EA8u;
    // 0x195ea8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x195ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x195eac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x195eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x195eb0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x195eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195eb4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x195eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ebc: 0x24a5d720  addiu       $a1, $a1, -0x28E0
    ctx->pc = 0x195ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956832));
    // 0x195ec0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195ec4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x195ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x195ec8: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x195ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x195ecc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x195eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x195ed0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x195ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195ed4: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x195ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x195ed8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x195ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x195edc: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x195edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x195ee0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x195ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x195ee4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x195ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x195ee8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x195ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x195eec: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x195eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x195ef0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x195ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x195ef4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x195ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195ef8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x195ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x195efc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x195efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x195f00: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x195f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x195f04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x195f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x195f08: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x195f08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x195f0c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x195f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x195f10: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x195f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x195f14: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x195f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x195f18: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x195f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195f1c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x195f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195f20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x195f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f24: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x195f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x195f28: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x195f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x195f2c: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x195f2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x195f30: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x195f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x195f34: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x195f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x195f38: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x195F38u;
    SET_GPR_U32(ctx, 31, 0x195F40u);
    ctx->pc = 0x195F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F38u;
    // 0x195f3c: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x195F38u, 0x195F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F40u;
label_195f40:
    // 0x195f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x195f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f48: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x195F48u;
    SET_GPR_U32(ctx, 31, 0x195F50u);
    ctx->pc = 0x195F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F48u;
    // 0x195f4c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x195F48u, 0x195F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F50u;
label_195f50:
    // 0x195f50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x195F50u;
    {
        const bool branch_taken_0x195f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F50u;
        // 0x195f54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f50) {
            ctx->pc = 0x195F60u;
            return;
        }
    }
    ctx->pc = 0x195F58u;
}
