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

// Function: entry_00126100
// Address: 0x126100 - 0x126180
void entry_00126100_0x126100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126100_0x126100");
#endif

    switch (ctx->pc) {
        case 0x12611cu: goto label_12611c;
        case 0x12612cu: goto label_12612c;
        case 0x12613cu: goto label_12613c;
        case 0x12614cu: goto label_12614c;
        case 0x126158u: goto label_126158;
        case 0x126164u: goto label_126164;
        default: break;
    }

    ctx->pc = 0x126100u;

    // 0x126100: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x126100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126104: 0x0  nop
    ctx->pc = 0x126104u;
    // NOP
    // 0x126108: 0x0  nop
    ctx->pc = 0x126108u;
    // NOP
    // 0x12610c: 0x4500fffb  bc1f        . + 4 + (-0x5 << 2)
    ctx->pc = 0x12610Cu;
    {
        const bool branch_taken_0x12610c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12610c) {
            ctx->pc = 0x1260FCu;
            return;
        }
    }
    ctx->pc = 0x126114u;
    // 0x126114: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x126114u;
    SET_GPR_U32(ctx, 31, 0x12611Cu);
    ctx->pc = 0x126118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126114u;
    // 0x126118: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x126114u, 0x12611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12611Cu;
label_12611c:
    // 0x12611c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x126120: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x126120u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x126124: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x126124u;
    SET_GPR_U32(ctx, 31, 0x12612Cu);
    ctx->pc = 0x126128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126124u;
    // 0x126128: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x126124u, 0x12612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12612Cu;
label_12612c:
    // 0x12612c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12612cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x126130: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x126130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x126134: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x126134u;
    SET_GPR_U32(ctx, 31, 0x12613Cu);
    ctx->pc = 0x126138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126134u;
    // 0x126138: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x126134u, 0x12613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12613Cu;
label_12613c:
    // 0x12613c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12613cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x126140: 0x26460070  addiu       $a2, $s2, 0x70
    ctx->pc = 0x126140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x126144: 0xc07d382  jal         func_1F4E08
    ctx->pc = 0x126144u;
    SET_GPR_U32(ctx, 31, 0x12614Cu);
    ctx->pc = 0x126148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126144u;
    // 0x126148: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E08u, 0x126144u, 0x12614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12614Cu;
label_12614c:
    // 0x12614c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x12614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x126150: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x126150u;
    SET_GPR_U32(ctx, 31, 0x126158u);
    ctx->pc = 0x126154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126150u;
    // 0x126154: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x126150u, 0x126158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126158u;
label_126158:
    // 0x126158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12615c: 0xc049730  jal         func_125CC0
    ctx->pc = 0x12615Cu;
    SET_GPR_U32(ctx, 31, 0x126164u);
    ctx->pc = 0x126160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12615Cu;
    // 0x126160: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125CC0u, 0x12615Cu, 0x126164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126164u;
label_126164:
    // 0x126164: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x126164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126168: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x126168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12616c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12616cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126170: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x126170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126174: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x126174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126178: 0x3e00008  jr          $ra
    ctx->pc = 0x126178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126178u;
        // 0x12617c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126180u;
}
