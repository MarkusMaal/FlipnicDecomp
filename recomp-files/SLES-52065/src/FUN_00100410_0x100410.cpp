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

// Function: FUN_00100410
// Address: 0x100410 - 0x1004a0
void FUN_00100410_0x100410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100410_0x100410");
#endif

    switch (ctx->pc) {
        case 0x100478u: goto label_100478;
        case 0x100484u: goto label_100484;
        default: break;
    }

    ctx->pc = 0x100410u;

    // 0x100410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10041c: 0x27a2002c  addiu       $v0, $sp, 0x2C
    ctx->pc = 0x10041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x100420: 0xac5d0000  sw          $sp, 0x0($v0)
    ctx->pc = 0x100420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 29));
    // 0x100424: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x100424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x100428: 0x3c010200  lui         $at, 0x200
    ctx->pc = 0x100428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)512 << 16));
    // 0x10042c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x10042cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x100430: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x100430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x100434: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x100434u;
    {
        const bool branch_taken_0x100434 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x100434) {
            ctx->pc = 0x100448u;
            goto label_100448;
        }
    }
    ctx->pc = 0x10043Cu;
    // 0x10043c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x10043cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x100440: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100440u;
    {
        const bool branch_taken_0x100440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100440) {
            ctx->pc = 0x10044Cu;
            goto label_10044c;
        }
    }
    ctx->pc = 0x100448u;
label_100448:
    // 0x100448: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x100448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_10044c:
    // 0x10044c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x10044cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x100450: 0x24842c80  addiu       $a0, $a0, 0x2C80
    ctx->pc = 0x100450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11392));
    // 0x100454: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x100454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x100458: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x100458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x10045c: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x10045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x100460: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x100460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x100464: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x100464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x100468: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x100468u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10046c: 0x2604fff0  addiu       $a0, $s0, -0x10
    ctx->pc = 0x10046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x100470: 0xc07fb0e  jal         func_1FEC38
    ctx->pc = 0x100470u;
    SET_GPR_U32(ctx, 31, 0x100478u);
    ctx->pc = 0x1FEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC38u, 0x100470u, 0x100478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100478u;
label_100478:
    // 0x100478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10047c: 0xc07fb18  jal         func_1FEC60
    ctx->pc = 0x10047Cu;
    SET_GPR_U32(ctx, 31, 0x100484u);
    ctx->pc = 0x1FEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC60u, 0x10047Cu, 0x100484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100484u;
label_100484:
    // 0x100484: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x100484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x100488: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10048c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10048cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100494: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x100494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x100498: 0x3e00008  jr          $ra
    ctx->pc = 0x100498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1004A0u;
}
