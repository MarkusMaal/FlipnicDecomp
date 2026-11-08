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

// Function: FUN_0016c370
// Address: 0x16c370 - 0x16c3c0
void FUN_0016c370_0x16c370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016c370_0x16c370");
#endif

    switch (ctx->pc) {
        case 0x16c370u: goto label_16c370;
        case 0x16c374u: goto label_16c374;
        case 0x16c378u: goto label_16c378;
        case 0x16c37cu: goto label_16c37c;
        case 0x16c380u: goto label_16c380;
        case 0x16c384u: goto label_16c384;
        case 0x16c388u: goto label_16c388;
        case 0x16c38cu: goto label_16c38c;
        case 0x16c390u: goto label_16c390;
        case 0x16c394u: goto label_16c394;
        case 0x16c398u: goto label_16c398;
        case 0x16c39cu: goto label_16c39c;
        case 0x16c3a0u: goto label_16c3a0;
        case 0x16c3a4u: goto label_16c3a4;
        case 0x16c3a8u: goto label_16c3a8;
        case 0x16c3acu: goto label_16c3ac;
        case 0x16c3b0u: goto label_16c3b0;
        case 0x16c3b4u: goto label_16c3b4;
        case 0x16c3b8u: goto label_16c3b8;
        case 0x16c3bcu: goto label_16c3bc;
        default: break;
    }

    ctx->pc = 0x16c370u;

label_16c370:
    // 0x16c370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16c374:
    // 0x16c374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16c378:
    // 0x16c378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c37c:
    // 0x16c37c: 0xc0563cc  jal         func_158F30
label_16c380:
    if (ctx->pc == 0x16C380u) {
        ctx->pc = 0x16C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C37Cu;
        // 0x16c380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C384u;
        goto label_16c384;
    }
    ctx->pc = 0x16C37Cu;
    SET_GPR_U32(ctx, 31, 0x16C384u);
    ctx->pc = 0x16C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C37Cu;
    // 0x16c380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16C37Cu, 0x16C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C384u;
label_16c384:
    // 0x16c384: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x16c384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
label_16c388:
    // 0x16c388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c38c:
    // 0x16c38c: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x16c38cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
label_16c390:
    // 0x16c390: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x16c390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
label_16c394:
    // 0x16c394: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x16c394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
label_16c398:
    // 0x16c398: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x16c398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_16c39c:
    // 0x16c39c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x16c39cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16c3a0:
    // 0x16c3a0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c3a4:
    // 0x16c3a4: 0x320f809  jalr        $t9
label_16c3a8:
    if (ctx->pc == 0x16C3A8u) {
        ctx->pc = 0x16C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3A4u;
        // 0x16c3a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C3ACu;
        goto label_16c3ac;
    }
    ctx->pc = 0x16C3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C3ACu);
        ctx->pc = 0x16C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3A4u;
        // 0x16c3a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C3A4u, 0x16C3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C3ACu;
label_16c3ac:
    // 0x16c3ac: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x16c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
label_16c3b0:
    // 0x16c3b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c3b4:
    // 0x16c3b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c3b8:
    // 0x16c3b8: 0x3e00008  jr          $ra
label_16c3bc:
    if (ctx->pc == 0x16C3BCu) {
        ctx->pc = 0x16C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3B8u;
        // 0x16c3bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C3C0u;
        goto label_fallthrough_0x16c3b8;
    }
    ctx->pc = 0x16C3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3B8u;
        // 0x16c3bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16c3b8:
    ctx->pc = 0x16C3C0u;
}
