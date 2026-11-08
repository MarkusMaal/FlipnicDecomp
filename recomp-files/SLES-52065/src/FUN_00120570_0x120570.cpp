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

// Function: FUN_00120570
// Address: 0x120570 - 0x12064c
void FUN_00120570_0x120570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120570_0x120570");
#endif

    switch (ctx->pc) {
        case 0x1205bcu: goto label_1205bc;
        case 0x1205dcu: goto label_1205dc;
        case 0x1205f4u: goto label_1205f4;
        case 0x12061cu: goto label_12061c;
        case 0x120624u: goto label_120624;
        default: break;
    }

    ctx->pc = 0x120570u;

    // 0x120570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x120570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x120574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x120574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x120578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x120578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12057c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12057cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x120580: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x120580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x120584: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x120584u;
    {
        const bool branch_taken_0x120584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120584u;
        // 0x120588: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120584) {
            ctx->pc = 0x12059Cu;
            goto label_12059c;
        }
    }
    ctx->pc = 0x12058Cu;
    // 0x12058c: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x12058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x120590: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120594: 0xaf82875c  sw          $v0, -0x78A4($gp)
    ctx->pc = 0x120594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 2));
    // 0x120598: 0xaf828780  sw          $v0, -0x7880($gp)
    ctx->pc = 0x120598u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 2));
label_12059c:
    // 0x12059c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12059cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1205a0: 0x8f908780  lw          $s0, -0x7880($gp)
    ctx->pc = 0x1205a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1205a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1205a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1205a8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1205a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1205ac: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1205ACu;
    {
        const bool branch_taken_0x1205ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1205ac) {
            ctx->pc = 0x1205D4u;
            goto label_1205d4;
        }
    }
    ctx->pc = 0x1205B4u;
    // 0x1205b4: 0xc048194  jal         func_120650
    ctx->pc = 0x1205B4u;
    SET_GPR_U32(ctx, 31, 0x1205BCu);
    ctx->pc = 0x120650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120650u, 0x1205B4u, 0x1205BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205BCu;
label_1205bc:
    // 0x1205bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1205bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1205c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1205c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1205c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1205c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1205c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1205c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1205cc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1205CCu;
    {
        const bool branch_taken_0x1205cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1205cc) {
            ctx->pc = 0x120638u;
            goto label_120638;
        }
    }
    ctx->pc = 0x1205D4u;
label_1205d4:
    // 0x1205d4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1205D4u;
    SET_GPR_U32(ctx, 31, 0x1205DCu);
    ctx->pc = 0x1205D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205D4u;
    // 0x1205d8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1205D4u, 0x1205DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205DCu;
label_1205dc:
    // 0x1205dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1205DCu;
    {
        const bool branch_taken_0x1205dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1205E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205DCu;
        // 0x1205e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1205dc) {
            ctx->pc = 0x1205F4u;
            goto label_1205f4;
        }
    }
    ctx->pc = 0x1205E4u;
    // 0x1205e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1205e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1205e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205ec: 0xc07a2e4  jal         func_1E8B90
    ctx->pc = 0x1205ECu;
    SET_GPR_U32(ctx, 31, 0x1205F4u);
    ctx->pc = 0x1205F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205ECu;
    // 0x1205f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8B90u, 0x1205ECu, 0x1205F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205F4u;
label_1205f4:
    // 0x1205f4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x1205f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1205f8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1205F8u;
    {
        const bool branch_taken_0x1205f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1205FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205F8u;
        // 0x1205fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1205f8) {
            ctx->pc = 0x120610u;
            goto label_120610;
        }
    }
    ctx->pc = 0x120600u;
    // 0x120600: 0x8f83875c  lw          $v1, -0x78A4($gp)
    ctx->pc = 0x120600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x120604: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x120604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x120608: 0xaf83875c  sw          $v1, -0x78A4($gp)
    ctx->pc = 0x120608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 3));
    // 0x12060c: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x12060cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
label_120610:
    // 0x120610: 0x8f868780  lw          $a2, -0x7880($gp)
    ctx->pc = 0x120610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x120614: 0xc04839c  jal         func_120E70
    ctx->pc = 0x120614u;
    SET_GPR_U32(ctx, 31, 0x12061Cu);
    ctx->pc = 0x120618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120614u;
    // 0x120618: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E70u, 0x120614u, 0x12061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12061Cu;
label_12061c:
    // 0x12061c: 0xc048194  jal         func_120650
    ctx->pc = 0x12061Cu;
    SET_GPR_U32(ctx, 31, 0x120624u);
    ctx->pc = 0x120620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12061Cu;
    // 0x120620: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120650u, 0x12061Cu, 0x120624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120624u;
label_120624:
    // 0x120624: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120628: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x120628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12062c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x120630: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120634: 0x0  nop
    ctx->pc = 0x120634u;
    // NOP
label_120638:
    // 0x120638: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x120638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12063c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12063cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x120640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120644: 0x3e00008  jr          $ra
    ctx->pc = 0x120644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120644u;
        // 0x120648: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12064Cu;
}
