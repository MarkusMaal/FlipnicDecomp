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

// Function: entry_001096f0
// Address: 0x1096f0 - 0x109738
void entry_001096f0_0x1096f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001096f0_0x1096f0");
#endif

    switch (ctx->pc) {
        case 0x109708u: goto label_109708;
        case 0x109734u: goto label_109734;
        default: break;
    }

    ctx->pc = 0x1096f0u;

label_1096f0:
    // 0x1096f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1096f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1096f4:
    // 0x1096f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1096f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1096f8:
    // 0x1096f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1096f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1096fc:
    // 0x1096fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1096fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_109700:
    // 0x109700: 0x320f809  jalr        $t9
label_109704:
    if (ctx->pc == 0x109704u) {
        ctx->pc = 0x109704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109700u;
        // 0x109704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109708u;
        goto label_109708;
    }
    ctx->pc = 0x109700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109708u);
        ctx->pc = 0x109704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109700u;
        // 0x109704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109700u, 0x109708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109708u;
label_109708:
    // 0x109708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x109708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10970c:
    // 0x10970c: 0x0  nop
    ctx->pc = 0x10970cu;
    // NOP
label_109710:
    // 0x109710: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x109710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_109714:
    // 0x109714: 0x0  nop
    ctx->pc = 0x109714u;
    // NOP
label_109718:
    // 0x109718: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_10971c:
    if (ctx->pc == 0x10971Cu) {
        ctx->pc = 0x10971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109718u;
        // 0x10971c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109720u;
        goto label_109720;
    }
    ctx->pc = 0x109718u;
    {
        const bool branch_taken_0x109718 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109718u;
        // 0x10971c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109718) {
            ctx->pc = 0x109738u;
            return;
        }
    }
    ctx->pc = 0x109720u;
label_109720:
    // 0x109720: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x109720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_109724:
    // 0x109724: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x109724u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_109728:
    // 0x109728: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x109728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_10972c:
    // 0x10972c: 0x320f809  jalr        $t9
label_109730:
    if (ctx->pc == 0x109730u) {
        ctx->pc = 0x109730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10972Cu;
        // 0x109730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109734u;
        goto label_109734;
    }
    ctx->pc = 0x10972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109734u);
        ctx->pc = 0x109730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10972Cu;
        // 0x109730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10972Cu, 0x109734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109734u;
label_109734:
    // 0x109734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x109734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109738u;
}
