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

// Function: entry_0019cab4
// Address: 0x19cab4 - 0x19cb18
void entry_0019cab4_0x19cab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cab4_0x19cab4");
#endif

    switch (ctx->pc) {
        case 0x19cac4u: goto label_19cac4;
        case 0x19cadcu: goto label_19cadc;
        case 0x19caf0u: goto label_19caf0;
        case 0x19cb00u: goto label_19cb00;
        default: break;
    }

    ctx->pc = 0x19cab4u;

label_19cab4:
    // 0x19cab4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19cab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cab8:
    // 0x19cab8: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x19cab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_19cabc:
    // 0x19cabc: 0x320f809  jalr        $t9
label_19cac0:
    if (ctx->pc == 0x19CAC0u) {
        ctx->pc = 0x19CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CABCu;
        // 0x19cac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAC4u;
        goto label_19cac4;
    }
    ctx->pc = 0x19CABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CAC4u);
        ctx->pc = 0x19CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CABCu;
        // 0x19cac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CABCu, 0x19CAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CAC4u;
label_19cac4:
    // 0x19cac4: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_19cac8:
    if (ctx->pc == 0x19CAC8u) {
        ctx->pc = 0x19CACCu;
        goto label_19cacc;
    }
    ctx->pc = 0x19CAC4u;
    {
        const bool branch_taken_0x19cac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cac4) {
            ctx->pc = 0x19CB7Cu;
            return;
        }
    }
    ctx->pc = 0x19CACCu;
label_19cacc:
    // 0x19cacc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19caccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cad0:
    // 0x19cad0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x19cad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_19cad4:
    // 0x19cad4: 0x320f809  jalr        $t9
label_19cad8:
    if (ctx->pc == 0x19CAD8u) {
        ctx->pc = 0x19CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAD4u;
        // 0x19cad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CADCu;
        goto label_19cadc;
    }
    ctx->pc = 0x19CAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CADCu);
        ctx->pc = 0x19CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAD4u;
        // 0x19cad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CAD4u, 0x19CADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CADCu;
label_19cadc:
    // 0x19cadc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cae0:
    // 0x19cae0: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
label_19cae4:
    if (ctx->pc == 0x19CAE4u) {
        ctx->pc = 0x19CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAE0u;
        // 0x19cae4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAE8u;
        goto label_19cae8;
    }
    ctx->pc = 0x19CAE0u;
    {
        const bool branch_taken_0x19cae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAE0u;
        // 0x19cae4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cae0) {
            ctx->pc = 0x19CB7Cu;
            return;
        }
    }
    ctx->pc = 0x19CAE8u;
label_19cae8:
    // 0x19cae8: 0xc045ae8  jal         func_116BA0
label_19caec:
    if (ctx->pc == 0x19CAECu) {
        ctx->pc = 0x19CAF0u;
        goto label_19caf0;
    }
    ctx->pc = 0x19CAE8u;
    SET_GPR_U32(ctx, 31, 0x19CAF0u);
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x19CAE8u, 0x19CAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CAF0u;
label_19caf0:
    // 0x19caf0: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19caf4:
    // 0x19caf4: 0x24460006  addiu       $a2, $v0, 0x6
    ctx->pc = 0x19caf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_19caf8:
    // 0x19caf8: 0xc064cac  jal         func_1932B0
label_19cafc:
    if (ctx->pc == 0x19CAFCu) {
        ctx->pc = 0x19CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAF8u;
        // 0x19cafc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB00u;
        goto label_19cb00;
    }
    ctx->pc = 0x19CAF8u;
    SET_GPR_U32(ctx, 31, 0x19CB00u);
    ctx->pc = 0x19CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CAF8u;
    // 0x19cafc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19CAF8u, 0x19CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB00u;
label_19cb00:
    // 0x19cb00: 0x8e440688  lw          $a0, 0x688($s2)
    ctx->pc = 0x19cb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19cb04:
    // 0x19cb04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cb08:
    // 0x19cb08: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x19cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_19cb0c:
    // 0x19cb0c: 0xae440698  sw          $a0, 0x698($s2)
    ctx->pc = 0x19cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 4));
label_19cb10:
    // 0x19cb10: 0x1000001a  b           . + 4 + (0x1A << 2)
label_19cb14:
    if (ctx->pc == 0x19CB14u) {
        ctx->pc = 0x19CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB10u;
        // 0x19cb14: 0xae430674  sw          $v1, 0x674($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB18u;
        goto label_fallthrough_0x19cb10;
    }
    ctx->pc = 0x19CB10u;
    {
        const bool branch_taken_0x19cb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB10u;
        // 0x19cb14: 0xae430674  sw          $v1, 0x674($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb10) {
            ctx->pc = 0x19CB7Cu;
            return;
        }
    }
label_fallthrough_0x19cb10:
    ctx->pc = 0x19CB18u;
}
