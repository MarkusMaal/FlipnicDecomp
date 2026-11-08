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

// Function: entry_00142cbc
// Address: 0x142cbc - 0x142dac
void entry_00142cbc_0x142cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142cbc_0x142cbc");
#endif

    switch (ctx->pc) {
        case 0x142cf8u: goto label_142cf8;
        case 0x142d0cu: goto label_142d0c;
        case 0x142d50u: goto label_142d50;
        case 0x142d68u: goto label_142d68;
        case 0x142d74u: goto label_142d74;
        case 0x142d84u: goto label_142d84;
        case 0x142d9cu: goto label_142d9c;
        default: break;
    }

    ctx->pc = 0x142cbcu;

    // 0x142cbc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x142cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x142cc0: 0x93c30028  lbu         $v1, 0x28($fp)
    ctx->pc = 0x142cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x142cc4: 0x8c51fffc  lw          $s1, -0x4($v0)
    ctx->pc = 0x142cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x142cc8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x142cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x142ccc: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x142cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x142cd0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x142cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142cd4: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x142cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x142cd8: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x142CD8u;
    {
        const bool branch_taken_0x142cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CD8u;
        // 0x142cdc: 0xc7d40010  lwc1        $f20, 0x10($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142cd8) {
            ctx->pc = 0x142F28u;
            return;
        }
    }
    ctx->pc = 0x142CE0u;
    // 0x142ce0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142ce4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x142ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142ce8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x142CE8u;
    {
        const bool branch_taken_0x142ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CE8u;
        // 0x142cec: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ce8) {
            ctx->pc = 0x142DACu;
            return;
        }
    }
    ctx->pc = 0x142CF0u;
    // 0x142cf0: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x142CF0u;
    SET_GPR_U32(ctx, 31, 0x142CF8u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x142CF0u, 0x142CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CF8u;
label_142cf8:
    // 0x142cf8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x142cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142cfc: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x142cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x142d00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142d00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142d04: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x142D04u;
    SET_GPR_U32(ctx, 31, 0x142D0Cu);
    ctx->pc = 0x142D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D04u;
    // 0x142d08: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x142D04u, 0x142D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D0Cu;
label_142d0c:
    // 0x142d0c: 0xc7a10310  lwc1        $f1, 0x310($sp)
    ctx->pc = 0x142d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142d10: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x142d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x142d14: 0xc7a20314  lwc1        $f2, 0x314($sp)
    ctx->pc = 0x142d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142d18: 0xc7a30318  lwc1        $f3, 0x318($sp)
    ctx->pc = 0x142d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142d20: 0x0  nop
    ctx->pc = 0x142d20u;
    // NOP
    // 0x142d24: 0xe7a102d0  swc1        $f1, 0x2D0($sp)
    ctx->pc = 0x142d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x142d28: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x142d28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x142d2c: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x142d2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x142d30: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x142d30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x142d34: 0xe7a202e4  swc1        $f2, 0x2E4($sp)
    ctx->pc = 0x142d34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 740), bits); }
    // 0x142d38: 0xe7a302f8  swc1        $f3, 0x2F8($sp)
    ctx->pc = 0x142d38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
    // 0x142d3c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x142d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x142d40: 0x0  nop
    ctx->pc = 0x142d40u;
    // NOP
    // 0x142d44: 0x0  nop
    ctx->pc = 0x142d44u;
    // NOP
    // 0x142d48: 0xc04c730  jal         func_131CC0
    ctx->pc = 0x142D48u;
    SET_GPR_U32(ctx, 31, 0x142D50u);
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x142D48u, 0x142D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D50u;
label_142d50:
    // 0x142d50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x142d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142d54: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x142d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x142d58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142d58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142d5c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x142d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x142d60: 0xc061ad0  jal         func_186B40
    ctx->pc = 0x142D60u;
    SET_GPR_U32(ctx, 31, 0x142D68u);
    ctx->pc = 0x142D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D60u;
    // 0x142d64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186B40u, 0x142D60u, 0x142D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D68u;
label_142d68:
    // 0x142d68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142d6c: 0xc061d70  jal         func_1875C0
    ctx->pc = 0x142D6Cu;
    SET_GPR_U32(ctx, 31, 0x142D74u);
    ctx->pc = 0x142D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D6Cu;
    // 0x142d70: 0x27a50310  addiu       $a1, $sp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875C0u, 0x142D6Cu, 0x142D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D74u;
label_142d74:
    // 0x142d74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142d78: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x142d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x142d7c: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x142D7Cu;
    SET_GPR_U32(ctx, 31, 0x142D84u);
    ctx->pc = 0x142D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D7Cu;
    // 0x142d80: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x142D7Cu, 0x142D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D84u;
label_142d84:
    // 0x142d84: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x142d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142d88: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x142d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x142d8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142d8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142d90: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x142d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x142d94: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x142D94u;
    SET_GPR_U32(ctx, 31, 0x142D9Cu);
    ctx->pc = 0x142D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D94u;
    // 0x142d98: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x142D94u, 0x142D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D9Cu;
label_142d9c:
    // 0x142d9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142da0: 0x27a60310  addiu       $a2, $sp, 0x310
    ctx->pc = 0x142da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x142da4: 0xc07d382  jal         func_1F4E08
    ctx->pc = 0x142DA4u;
    SET_GPR_U32(ctx, 31, 0x142DACu);
    ctx->pc = 0x142DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DA4u;
    // 0x142da8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E08u, 0x142DA4u, 0x142DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DACu;
}
