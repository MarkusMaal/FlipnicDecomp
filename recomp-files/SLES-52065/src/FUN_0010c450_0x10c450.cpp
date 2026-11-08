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

// Function: FUN_0010c450
// Address: 0x10c450 - 0x10c4c4
void FUN_0010c450_0x10c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010c450_0x10c450");
#endif

    switch (ctx->pc) {
        case 0x10c450u: goto label_10c450;
        case 0x10c454u: goto label_10c454;
        case 0x10c458u: goto label_10c458;
        case 0x10c45cu: goto label_10c45c;
        case 0x10c460u: goto label_10c460;
        case 0x10c464u: goto label_10c464;
        case 0x10c468u: goto label_10c468;
        case 0x10c46cu: goto label_10c46c;
        case 0x10c470u: goto label_10c470;
        case 0x10c474u: goto label_10c474;
        case 0x10c478u: goto label_10c478;
        case 0x10c47cu: goto label_10c47c;
        case 0x10c480u: goto label_10c480;
        case 0x10c484u: goto label_10c484;
        case 0x10c488u: goto label_10c488;
        case 0x10c48cu: goto label_10c48c;
        case 0x10c490u: goto label_10c490;
        case 0x10c494u: goto label_10c494;
        case 0x10c498u: goto label_10c498;
        case 0x10c49cu: goto label_10c49c;
        case 0x10c4a0u: goto label_10c4a0;
        case 0x10c4a4u: goto label_10c4a4;
        case 0x10c4a8u: goto label_10c4a8;
        case 0x10c4acu: goto label_10c4ac;
        case 0x10c4b0u: goto label_10c4b0;
        case 0x10c4b4u: goto label_10c4b4;
        case 0x10c4b8u: goto label_10c4b8;
        case 0x10c4bcu: goto label_10c4bc;
        case 0x10c4c0u: goto label_10c4c0;
        default: break;
    }

    ctx->pc = 0x10c450u;

label_10c450:
    // 0x10c450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10c454:
    // 0x10c454: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10c454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c458:
    // 0x10c458: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10c45c:
    // 0x10c45c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10c460:
    // 0x10c460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10c464:
    // 0x10c464: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10c468:
    // 0x10c468: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x10c468u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_10c46c:
    // 0x10c46c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10c46cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10c470:
    // 0x10c470: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x10c470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_10c474:
    // 0x10c474: 0x320f809  jalr        $t9
label_10c478:
    if (ctx->pc == 0x10C478u) {
        ctx->pc = 0x10C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C474u;
        // 0x10c478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C47Cu;
        goto label_10c47c;
    }
    ctx->pc = 0x10C474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C47Cu);
        ctx->pc = 0x10C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C474u;
        // 0x10c478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C474u, 0x10C47Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C47Cu;
label_10c47c:
    // 0x10c47c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10c47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10c480:
    // 0x10c480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c484:
    // 0x10c484: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x10c484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_10c488:
    // 0x10c488: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x10c488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_10c48c:
    // 0x10c48c: 0x320f809  jalr        $t9
label_10c490:
    if (ctx->pc == 0x10C490u) {
        ctx->pc = 0x10C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C48Cu;
        // 0x10c490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C494u;
        goto label_10c494;
    }
    ctx->pc = 0x10C48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C494u);
        ctx->pc = 0x10C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C48Cu;
        // 0x10c490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C48Cu, 0x10C494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C494u;
label_10c494:
    // 0x10c494: 0x8622024c  lh          $v0, 0x24C($s1)
    ctx->pc = 0x10c494u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 588)));
label_10c498:
    // 0x10c498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c49c:
    // 0x10c49c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10c49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10c4a0:
    // 0x10c4a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10c4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10c4a4:
    // 0x10c4a4: 0x8f3900a8  lw          $t9, 0xA8($t9)
    ctx->pc = 0x10c4a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 168)));
label_10c4a8:
    // 0x10c4a8: 0x320f809  jalr        $t9
label_10c4ac:
    if (ctx->pc == 0x10C4ACu) {
        ctx->pc = 0x10C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4A8u;
        // 0x10c4ac: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C4B0u;
        goto label_10c4b0;
    }
    ctx->pc = 0x10C4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C4B0u);
        ctx->pc = 0x10C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4A8u;
        // 0x10c4ac: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C4A8u, 0x10C4B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C4B0u;
label_10c4b0:
    // 0x10c4b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10c4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10c4b4:
    // 0x10c4b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10c4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10c4b8:
    // 0x10c4b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10c4bc:
    // 0x10c4bc: 0x3e00008  jr          $ra
label_10c4c0:
    if (ctx->pc == 0x10C4C0u) {
        ctx->pc = 0x10C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4BCu;
        // 0x10c4c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C4C4u;
        goto label_fallthrough_0x10c4bc;
    }
    ctx->pc = 0x10C4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4BCu;
        // 0x10c4c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10c4bc:
    ctx->pc = 0x10C4C4u;
}
