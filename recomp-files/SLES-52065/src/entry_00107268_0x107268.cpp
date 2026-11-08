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

// Function: entry_00107268
// Address: 0x107268 - 0x1072a8
void entry_00107268_0x107268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107268_0x107268");
#endif

    switch (ctx->pc) {
        case 0x107280u: goto label_107280;
        default: break;
    }

    ctx->pc = 0x107268u;

    // 0x107268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x107268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10726c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x10726cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x107270: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x107270u;
    {
        const bool branch_taken_0x107270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107270u;
        // 0x107274: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107270) {
            ctx->pc = 0x1071FCu;
            return;
        }
    }
    ctx->pc = 0x107278u;
    // 0x107278: 0xc04ae64  jal         func_12B990
    ctx->pc = 0x107278u;
    SET_GPR_U32(ctx, 31, 0x107280u);
    ctx->pc = 0x10727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107278u;
    // 0x10727c: 0x8e640220  lw          $a0, 0x220($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B990u, 0x107278u, 0x107280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107280u;
label_107280:
    // 0x107280: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x107280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x107284: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x107284u;
    {
        const bool branch_taken_0x107284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x107288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107284u;
        // 0x107288: 0xae6201d4  sw          $v0, 0x1D4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107284) {
            ctx->pc = 0x1072A8u;
            return;
        }
    }
    ctx->pc = 0x10728Cu;
    // 0x10728c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x10728cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x107290: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x107290u;
    {
        const bool branch_taken_0x107290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x107294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107290u;
        // 0x107294: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107290) {
            ctx->pc = 0x1072D4u;
            return;
        }
    }
    ctx->pc = 0x107298u;
    // 0x107298: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x107298u;
    {
        const bool branch_taken_0x107298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x107298) {
            ctx->pc = 0x1072D4u;
            return;
        }
    }
    ctx->pc = 0x1072A0u;
    // 0x1072a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1072A0u;
    {
        const bool branch_taken_0x1072a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072A0u;
        // 0x1072a4: 0x8e640220  lw          $a0, 0x220($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072a0) {
            ctx->pc = 0x1072CCu;
            return;
        }
    }
    ctx->pc = 0x1072A8u;
}
