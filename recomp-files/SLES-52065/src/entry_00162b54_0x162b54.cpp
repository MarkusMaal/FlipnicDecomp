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

// Function: entry_00162b54
// Address: 0x162b54 - 0x162bcc
void entry_00162b54_0x162b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162b54_0x162b54");
#endif

    switch (ctx->pc) {
        case 0x162b64u: goto label_162b64;
        case 0x162b70u: goto label_162b70;
        case 0x162bc4u: goto label_162bc4;
        default: break;
    }

    ctx->pc = 0x162b54u;

label_162b54:
    // 0x162b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162b58:
    // 0x162b58: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x162b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_162b5c:
    // 0x162b5c: 0x320f809  jalr        $t9
label_162b60:
    if (ctx->pc == 0x162B60u) {
        ctx->pc = 0x162B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B5Cu;
        // 0x162b60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B64u;
        goto label_162b64;
    }
    ctx->pc = 0x162B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162B64u);
        ctx->pc = 0x162B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B5Cu;
        // 0x162b60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B5Cu, 0x162B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162B64u;
label_162b64:
    // 0x162b64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162b68:
    // 0x162b68: 0xc0564b8  jal         func_1592E0
label_162b6c:
    if (ctx->pc == 0x162B6Cu) {
        ctx->pc = 0x162B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B68u;
        // 0x162b6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B70u;
        goto label_162b70;
    }
    ctx->pc = 0x162B68u;
    SET_GPR_U32(ctx, 31, 0x162B70u);
    ctx->pc = 0x162B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B68u;
    // 0x162b6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x162B68u, 0x162B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B70u;
label_162b70:
    // 0x162b70: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x162b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_162b74:
    // 0x162b74: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x162b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_162b78:
    // 0x162b78: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_162b7c:
    // 0x162b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162b80:
    // 0x162b80: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x162b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162b84:
    // 0x162b84: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x162b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_162b88:
    // 0x162b88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162b88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162b8c:
    // 0x162b8c: 0x0  nop
    ctx->pc = 0x162b8cu;
    // NOP
label_162b90:
    // 0x162b90: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_162b94:
    if (ctx->pc == 0x162B94u) {
        ctx->pc = 0x162B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B90u;
        // 0x162b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B98u;
        goto label_162b98;
    }
    ctx->pc = 0x162B90u;
    {
        const bool branch_taken_0x162b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B90u;
        // 0x162b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b90) {
            ctx->pc = 0x162BD8u;
            return;
        }
    }
    ctx->pc = 0x162B98u;
label_162b98:
    // 0x162b98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x162b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_162b9c:
    // 0x162b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162ba0:
    // 0x162ba0: 0x0  nop
    ctx->pc = 0x162ba0u;
    // NOP
label_162ba4:
    // 0x162ba4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x162ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_162ba8:
    // 0x162ba8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162ba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162bac:
    // 0x162bac: 0x0  nop
    ctx->pc = 0x162bacu;
    // NOP
label_162bb0:
    // 0x162bb0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_162bb4:
    if (ctx->pc == 0x162BB4u) {
        ctx->pc = 0x162BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BB0u;
        // 0x162bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BB8u;
        goto label_162bb8;
    }
    ctx->pc = 0x162BB0u;
    {
        const bool branch_taken_0x162bb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BB0u;
        // 0x162bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162bb0) {
            ctx->pc = 0x162BCCu;
            return;
        }
    }
    ctx->pc = 0x162BB8u;
label_162bb8:
    // 0x162bb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162bbc:
    // 0x162bbc: 0xc042118  jal         func_108460
label_162bc0:
    if (ctx->pc == 0x162BC0u) {
        ctx->pc = 0x162BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BBCu;
        // 0x162bc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BC4u;
        goto label_162bc4;
    }
    ctx->pc = 0x162BBCu;
    SET_GPR_U32(ctx, 31, 0x162BC4u);
    ctx->pc = 0x162BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BBCu;
    // 0x162bc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x162BBCu, 0x162BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162BC4u;
label_162bc4:
    // 0x162bc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_162bc8:
    if (ctx->pc == 0x162BC8u) {
        ctx->pc = 0x162BCCu;
        goto label_fallthrough_0x162bc4;
    }
    ctx->pc = 0x162BC4u;
    {
        const bool branch_taken_0x162bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162bc4) {
            ctx->pc = 0x162BD4u;
            return;
        }
    }
label_fallthrough_0x162bc4:
    ctx->pc = 0x162BCCu;
}
