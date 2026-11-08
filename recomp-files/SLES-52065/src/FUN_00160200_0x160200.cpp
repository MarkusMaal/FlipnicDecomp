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

// Function: FUN_00160200
// Address: 0x160200 - 0x160270
void FUN_00160200_0x160200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160200_0x160200");
#endif

    switch (ctx->pc) {
        case 0x160220u: goto label_160220;
        case 0x160244u: goto label_160244;
        default: break;
    }

    ctx->pc = 0x160200u;

    // 0x160200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x160200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x160204: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x160204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x160208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16020c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160210: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x160210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160214: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160218: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x160218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16021c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16021cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160220:
    // 0x160220: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x160220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x160224: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x160224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160228: 0x84a40228  lh          $a0, 0x228($a1)
    ctx->pc = 0x160228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 552)));
    // 0x16022c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16022Cu;
    {
        const bool branch_taken_0x16022c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x160230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16022Cu;
        // 0x160230: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16022c) {
            ctx->pc = 0x160244u;
            goto label_160244;
        }
    }
    ctx->pc = 0x160234u;
    // 0x160234: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160234u;
    {
        const bool branch_taken_0x160234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x160234) {
            ctx->pc = 0x160244u;
            goto label_160244;
        }
    }
    ctx->pc = 0x16023Cu;
    // 0x16023c: 0xc055c40  jal         func_157100
    ctx->pc = 0x16023Cu;
    SET_GPR_U32(ctx, 31, 0x160244u);
    ctx->pc = 0x160240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16023Cu;
    // 0x160240: 0x24a40040  addiu       $a0, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16023Cu, 0x160244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160244u;
label_160244:
    // 0x160244: 0x0  nop
    ctx->pc = 0x160244u;
    // NOP
    // 0x160248: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16024c: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x16024cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x160250: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x160250u;
    {
        const bool branch_taken_0x160250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160250u;
        // 0x160254: 0x265203d0  addiu       $s2, $s2, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160250) {
            ctx->pc = 0x160220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160220;
        }
    }
    ctx->pc = 0x160258u;
    // 0x160258: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x160258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16025c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16025cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160268: 0x3e00008  jr          $ra
    ctx->pc = 0x160268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160268u;
        // 0x16026c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160270u;
}
