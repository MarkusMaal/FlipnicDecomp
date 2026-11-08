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

// Function: entry_0018bda0
// Address: 0x18bda0 - 0x18be48
void entry_0018bda0_0x18bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bda0_0x18bda0");
#endif

    switch (ctx->pc) {
        case 0x18be38u: goto label_18be38;
        default: break;
    }

    ctx->pc = 0x18bda0u;

    // 0x18bda0: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x18bda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18bda4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18bda8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x18bda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18bdac: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x18bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x18bdb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bdb4: 0x24a5fd40  addiu       $a1, $a1, -0x2C0
    ctx->pc = 0x18bdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966592));
    // 0x18bdb8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18bdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18bdbc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18bdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18bdc0: 0xacc70254  sw          $a3, 0x254($a2)
    ctx->pc = 0x18bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 596), GPR_U32(ctx, 7));
    // 0x18bdc4: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x18bdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18bdc8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x18bdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18bdcc: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x18bdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x18bdd0: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x18bdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x18bdd4: 0x8ce70034  lw          $a3, 0x34($a3)
    ctx->pc = 0x18bdd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x18bdd8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18bdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18bddc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x18bddcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18bde0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x18bde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x18bde4: 0xacc00054  sw          $zero, 0x54($a2)
    ctx->pc = 0x18bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
    // 0x18bde8: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x18bde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18bdec: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x18bdecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18bdf0: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x18bdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x18bdf4: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x18bdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x18bdf8: 0x8ce70034  lw          $a3, 0x34($a3)
    ctx->pc = 0x18bdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x18bdfc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18bdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18be00: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x18be00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18be04: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x18be04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x18be08: 0xacc00154  sw          $zero, 0x154($a2)
    ctx->pc = 0x18be08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 340), GPR_U32(ctx, 0));
    // 0x18be0c: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x18be0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18be10: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x18be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18be14: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18be18: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18be18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18be1c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18be20: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18be20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18be24: 0xe4620274  swc1        $f2, 0x274($v1)
    ctx->pc = 0x18be24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x18be28: 0xe4610278  swc1        $f1, 0x278($v1)
    ctx->pc = 0x18be28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 632), bits); }
    // 0x18be2c: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x18be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
    // 0x18be30: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x18BE30u;
    SET_GPR_U32(ctx, 31, 0x18BE38u);
    ctx->pc = 0x18BE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE30u;
    // 0x18be34: 0xac620280  sw          $v0, 0x280($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x18BE30u, 0x18BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE38u;
label_18be38:
    // 0x18be38: 0x26240210  addiu       $a0, $s1, 0x210
    ctx->pc = 0x18be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x18be3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18be3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be40: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x18BE40u;
    SET_GPR_U32(ctx, 31, 0x18BE48u);
    ctx->pc = 0x18BE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE40u;
    // 0x18be44: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x18BE40u, 0x18BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE48u;
}
