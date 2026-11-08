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

// Function: FUN_00119560
// Address: 0x119560 - 0x1195d8
void FUN_00119560_0x119560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119560_0x119560");
#endif

    switch (ctx->pc) {
        case 0x119590u: goto label_119590;
        case 0x1195a0u: goto label_1195a0;
        case 0x1195b8u: goto label_1195b8;
        case 0x1195c0u: goto label_1195c0;
        default: break;
    }

    ctx->pc = 0x119560u;

    // 0x119560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11956c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x119570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x119574: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x119574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x119578: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x119578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11957c: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11957Cu;
    {
        const bool branch_taken_0x11957c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x119580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11957Cu;
        // 0x119580: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11957c) {
            ctx->pc = 0x1195C0u;
            goto label_1195c0;
        }
    }
    ctx->pc = 0x119584u;
    // 0x119584: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x119584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x119588: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x119588u;
    {
        const bool branch_taken_0x119588 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119588u;
        // 0x11958c: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119588) {
            ctx->pc = 0x1195ACu;
            goto label_1195ac;
        }
    }
    ctx->pc = 0x119590u;
label_119590:
    // 0x119590: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x119590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x119594: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x119598: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x119598u;
    SET_GPR_U32(ctx, 31, 0x1195A0u);
    ctx->pc = 0x11959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119598u;
    // 0x11959c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x119598u, 0x1195A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195A0u;
label_1195a0:
    // 0x1195a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1195a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1195a4: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1195A4u;
    {
        const bool branch_taken_0x1195a4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1195A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195A4u;
        // 0x1195a8: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195a4) {
            ctx->pc = 0x119590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119590;
        }
    }
    ctx->pc = 0x1195ACu;
label_1195ac:
    // 0x1195ac: 0x0  nop
    ctx->pc = 0x1195acu;
    // NOP
    // 0x1195b0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1195B0u;
    SET_GPR_U32(ctx, 31, 0x1195B8u);
    ctx->pc = 0x1195B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195B0u;
    // 0x1195b4: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1195B0u, 0x1195B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195B8u;
label_1195b8:
    // 0x1195b8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1195B8u;
    SET_GPR_U32(ctx, 31, 0x1195C0u);
    ctx->pc = 0x1195BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195B8u;
    // 0x1195bc: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1195B8u, 0x1195C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195C0u;
label_1195c0:
    // 0x1195c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1195c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1195c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1195c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1195c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1195c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1195cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1195ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1195d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1195D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1195D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195D0u;
        // 0x1195d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1195D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1195D8u;
}
