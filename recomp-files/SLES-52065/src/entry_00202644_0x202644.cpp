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

// Function: entry_00202644
// Address: 0x202644 - 0x202694
void entry_00202644_0x202644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202644_0x202644");
#endif

    switch (ctx->pc) {
        case 0x202670u: goto label_202670;
        case 0x202690u: goto label_202690;
        default: break;
    }

    ctx->pc = 0x202644u;

    // 0x202644: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x202644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x202648: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x202648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20264c: 0x29ef00a  movz        $fp, $s4, $fp
    ctx->pc = 0x20264cu;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 20));
    // 0x202650: 0x69182f  dsubu       $v1, $v1, $t1
    ctx->pc = 0x202650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x202654: 0x282980b  movn        $s3, $s4, $v0
    ctx->pc = 0x202654u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
    // 0x202658: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x202658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20265c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x20265cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x202660: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x202660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x202664: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x202664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x202668: 0xc08218c  jal         func_208630
    ctx->pc = 0x202668u;
    SET_GPR_U32(ctx, 31, 0x202670u);
    ctx->pc = 0x20266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202668u;
    // 0x20266c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x202668u, 0x202670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202670u;
label_202670:
    // 0x202670: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x202670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202678: 0x4c10006  bgez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x202678u;
    {
        const bool branch_taken_0x202678 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x20267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202678u;
        // 0x20267c: 0x8fb0004c  lw          $s0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202678) {
            ctx->pc = 0x202694u;
            return;
        }
    }
    ctx->pc = 0x202680u;
    // 0x202680: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x202680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x202684: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x202684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x202688: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x202688u;
    SET_GPR_U32(ctx, 31, 0x202690u);
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x202688u, 0x202690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202690u;
label_202690:
    // 0x202690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202694u;
}
