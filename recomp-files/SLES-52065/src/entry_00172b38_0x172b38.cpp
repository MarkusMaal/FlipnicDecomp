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

// Function: entry_00172b38
// Address: 0x172b38 - 0x172be8
void entry_00172b38_0x172b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172b38_0x172b38");
#endif

    switch (ctx->pc) {
        case 0x172b64u: goto label_172b64;
        case 0x172b6cu: goto label_172b6c;
        case 0x172b74u: goto label_172b74;
        case 0x172b7cu: goto label_172b7c;
        case 0x172b94u: goto label_172b94;
        case 0x172bd4u: goto label_172bd4;
        default: break;
    }

    ctx->pc = 0x172b38u;

label_172b38:
    // 0x172b38: 0x92226032  lbu         $v0, 0x6032($s1)
    ctx->pc = 0x172b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24626)));
label_172b3c:
    // 0x172b3c: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
label_172b40:
    if (ctx->pc == 0x172B40u) {
        ctx->pc = 0x172B44u;
        goto label_172b44;
    }
    ctx->pc = 0x172B3Cu;
    {
        const bool branch_taken_0x172b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b3c) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
    ctx->pc = 0x172B44u;
label_172b44:
    // 0x172b44: 0xa2206032  sb          $zero, 0x6032($s1)
    ctx->pc = 0x172b44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24626), (uint8_t)GPR_U32(ctx, 0));
label_172b48:
    // 0x172b48: 0x26222370  addiu       $v0, $s1, 0x2370
    ctx->pc = 0x172b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9072));
label_172b4c:
    // 0x172b4c: 0xae224020  sw          $v0, 0x4020($s1)
    ctx->pc = 0x172b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16416), GPR_U32(ctx, 2));
label_172b50:
    // 0x172b50: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172b54:
    // 0x172b54: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172b58:
    // 0x172b58: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x172b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_172b5c:
    // 0x172b5c: 0x320f809  jalr        $t9
label_172b60:
    if (ctx->pc == 0x172B60u) {
        ctx->pc = 0x172B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B5Cu;
        // 0x172b60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B64u;
        goto label_172b64;
    }
    ctx->pc = 0x172B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172B64u);
        ctx->pc = 0x172B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B5Cu;
        // 0x172b60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172B5Cu, 0x172B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172B64u;
label_172b64:
    // 0x172b64: 0xc045b20  jal         func_116C80
label_172b68:
    if (ctx->pc == 0x172B68u) {
        ctx->pc = 0x172B6Cu;
        goto label_172b6c;
    }
    ctx->pc = 0x172B64u;
    SET_GPR_U32(ctx, 31, 0x172B6Cu);
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172B64u, 0x172B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B6Cu;
label_172b6c:
    // 0x172b6c: 0xc045b20  jal         func_116C80
label_172b70:
    if (ctx->pc == 0x172B70u) {
        ctx->pc = 0x172B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B6Cu;
        // 0x172b70: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B74u;
        goto label_172b74;
    }
    ctx->pc = 0x172B6Cu;
    SET_GPR_U32(ctx, 31, 0x172B74u);
    ctx->pc = 0x172B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B6Cu;
    // 0x172b70: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172B6Cu, 0x172B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B74u;
label_172b74:
    // 0x172b74: 0xc045b00  jal         func_116C00
label_172b78:
    if (ctx->pc == 0x172B78u) {
        ctx->pc = 0x172B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B74u;
        // 0x172b78: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B7Cu;
        goto label_172b7c;
    }
    ctx->pc = 0x172B74u;
    SET_GPR_U32(ctx, 31, 0x172B7Cu);
    ctx->pc = 0x172B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B74u;
    // 0x172b78: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C00u, 0x172B74u, 0x172B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B7Cu;
label_172b7c:
    // 0x172b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_172b80:
    // 0x172b80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x172b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172b84:
    // 0x172b84: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x172b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_172b88:
    // 0x172b88: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x172b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_172b8c:
    // 0x172b8c: 0xc07d312  jal         func_1F4C48
label_172b90:
    if (ctx->pc == 0x172B90u) {
        ctx->pc = 0x172B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B8Cu;
        // 0x172b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B94u;
        goto label_172b94;
    }
    ctx->pc = 0x172B8Cu;
    SET_GPR_U32(ctx, 31, 0x172B94u);
    ctx->pc = 0x172B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B8Cu;
    // 0x172b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x172B8Cu, 0x172B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B94u;
label_172b94:
    // 0x172b94: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x172b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_172b98:
    // 0x172b98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x172b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_172b9c:
    // 0x172b9c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x172b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172ba0:
    // 0x172ba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x172ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_172ba4:
    // 0x172ba4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x172ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172ba8:
    // 0x172ba8: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x172ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_172bac:
    // 0x172bac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x172bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_172bb0:
    // 0x172bb0: 0x26242370  addiu       $a0, $s1, 0x2370
    ctx->pc = 0x172bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9072));
label_172bb4:
    // 0x172bb4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x172bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172bb8:
    // 0x172bb8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x172bb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_172bbc:
    // 0x172bbc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x172bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_172bc0:
    // 0x172bc0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x172bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_172bc4:
    // 0x172bc4: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x172bc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_172bc8:
    // 0x172bc8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x172bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_172bcc:
    // 0x172bcc: 0xc05dcc0  jal         func_177300
label_172bd0:
    if (ctx->pc == 0x172BD0u) {
        ctx->pc = 0x172BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BCCu;
        // 0x172bd0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BD4u;
        goto label_172bd4;
    }
    ctx->pc = 0x172BCCu;
    SET_GPR_U32(ctx, 31, 0x172BD4u);
    ctx->pc = 0x172BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BCCu;
    // 0x172bd0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x177300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177300u, 0x172BCCu, 0x172BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BD4u;
label_172bd4:
    // 0x172bd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x172bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_172bd8:
    // 0x172bd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x172bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_172bdc:
    // 0x172bdc: 0xae236020  sw          $v1, 0x6020($s1)
    ctx->pc = 0x172bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24608), GPR_U32(ctx, 3));
label_172be0:
    // 0x172be0: 0x100000dd  b           . + 4 + (0xDD << 2)
label_172be4:
    if (ctx->pc == 0x172BE4u) {
        ctx->pc = 0x172BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BE0u;
        // 0x172be4: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BE8u;
        goto label_fallthrough_0x172be0;
    }
    ctx->pc = 0x172BE0u;
    {
        const bool branch_taken_0x172be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BE0u;
        // 0x172be4: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172be0) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
label_fallthrough_0x172be0:
    ctx->pc = 0x172BE8u;
}
