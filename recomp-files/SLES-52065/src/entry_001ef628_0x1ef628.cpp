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

// Function: entry_001ef628
// Address: 0x1ef628 - 0x1ef67c
void entry_001ef628_0x1ef628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef628_0x1ef628");
#endif

    switch (ctx->pc) {
        case 0x1ef630u: goto label_1ef630;
        case 0x1ef668u: goto label_1ef668;
        default: break;
    }

    ctx->pc = 0x1ef628u;

    // 0x1ef628: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EF628u;
    SET_GPR_U32(ctx, 31, 0x1EF630u);
    ctx->pc = 0x1EF62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF628u;
    // 0x1ef62c: 0x2610ee40  addiu       $s0, $s0, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EF628u, 0x1EF630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF630u;
label_1ef630:
    // 0x1ef630: 0x2623ee80  addiu       $v1, $s1, -0x1180
    ctx->pc = 0x1ef630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962816));
    // 0x1ef634: 0x2647e1c0  addiu       $a3, $s2, -0x1E40
    ctx->pc = 0x1ef634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959552));
    // 0x1ef638: 0xae43e1c0  sw          $v1, -0x1E40($s2)
    ctx->pc = 0x1ef638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294959552), GPR_U32(ctx, 3));
    // 0x1ef63c: 0x2664f900  addiu       $a0, $s3, -0x700
    ctx->pc = 0x1ef63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965504));
    // 0x1ef640: 0x24630440  addiu       $v1, $v1, 0x440
    ctx->pc = 0x1ef640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
    // 0x1ef644: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ef644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ef648: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1ef648u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1ef64c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef650: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ef650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ef654: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1ef654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ef658: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ef658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef65c: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1ef65cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ef660: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1EF660u;
    SET_GPR_U32(ctx, 31, 0x1EF668u);
    ctx->pc = 0x1EF664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF660u;
    // 0x1ef664: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1EF660u, 0x1EF668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF668u;
label_1ef668:
    // 0x1ef668: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF668u;
    {
        const bool branch_taken_0x1ef668 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF668u;
        // 0x1ef66c: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef668) {
            ctx->pc = 0x1EF67Cu;
            return;
        }
    }
    ctx->pc = 0x1EF670u;
    // 0x1ef670: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ef670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ef674: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EF674u;
    {
        const bool branch_taken_0x1ef674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF674u;
        // 0x1ef678: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef674) {
            ctx->pc = 0x1EF6D4u;
            return;
        }
    }
    ctx->pc = 0x1EF67Cu;
}
