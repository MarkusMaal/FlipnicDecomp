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

// Function: entry_00190a98
// Address: 0x190a98 - 0x190b40
void entry_00190a98_0x190a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190a98_0x190a98");
#endif

    switch (ctx->pc) {
        case 0x190b30u: goto label_190b30;
        default: break;
    }

    ctx->pc = 0x190a98u;

    // 0x190a98: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x190a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x190a9c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x190a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x190aa0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x190aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190aa4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x190aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190aac: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x190aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x190ab0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x190ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x190ab4: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x190ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x190ab8: 0xacc70254  sw          $a3, 0x254($a2)
    ctx->pc = 0x190ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 596), GPR_U32(ctx, 7));
    // 0x190abc: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x190abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x190ac0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x190ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x190ac4: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x190ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x190ac8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x190ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x190acc: 0x8ce70034  lw          $a3, 0x34($a3)
    ctx->pc = 0x190accu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x190ad0: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x190ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x190ad4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x190ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x190ad8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x190ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x190adc: 0xacc00054  sw          $zero, 0x54($a2)
    ctx->pc = 0x190adcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
    // 0x190ae0: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x190ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x190ae4: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x190ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x190ae8: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x190ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x190aec: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x190aecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x190af0: 0x8ce70034  lw          $a3, 0x34($a3)
    ctx->pc = 0x190af0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x190af4: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x190af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x190af8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x190af8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x190afc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x190afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x190b00: 0xacc00154  sw          $zero, 0x154($a2)
    ctx->pc = 0x190b00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 340), GPR_U32(ctx, 0));
    // 0x190b04: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x190b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x190b08: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x190b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190b0c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x190b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190b10: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x190b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b14: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x190b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x190b18: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x190b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x190b1c: 0xe4620274  swc1        $f2, 0x274($v1)
    ctx->pc = 0x190b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x190b20: 0xe4610278  swc1        $f1, 0x278($v1)
    ctx->pc = 0x190b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 632), bits); }
    // 0x190b24: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x190b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
    // 0x190b28: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x190B28u;
    SET_GPR_U32(ctx, 31, 0x190B30u);
    ctx->pc = 0x190B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B28u;
    // 0x190b2c: 0xac620280  sw          $v0, 0x280($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x190B28u, 0x190B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B30u;
label_190b30:
    // 0x190b30: 0x26240210  addiu       $a0, $s1, 0x210
    ctx->pc = 0x190b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x190b34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x190b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b38: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x190B38u;
    SET_GPR_U32(ctx, 31, 0x190B40u);
    ctx->pc = 0x190B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B38u;
    // 0x190b3c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x190B38u, 0x190B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B40u;
}
