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

// Function: FUN_0017e2d0
// Address: 0x17e2d0 - 0x17e370
void FUN_0017e2d0_0x17e2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e2d0_0x17e2d0");
#endif

    switch (ctx->pc) {
        case 0x17e300u: goto label_17e300;
        case 0x17e310u: goto label_17e310;
        case 0x17e324u: goto label_17e324;
        case 0x17e330u: goto label_17e330;
        default: break;
    }

    ctx->pc = 0x17e2d0u;

    // 0x17e2d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17e2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e2d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17e2d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17e2dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e2e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17e2e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17e2e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2e8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17e2ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e2f0: 0x24847730  addiu       $a0, $a0, 0x7730
    ctx->pc = 0x17e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    // 0x17e2f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2f8: 0xc05f880  jal         func_17E200
    ctx->pc = 0x17E2F8u;
    SET_GPR_U32(ctx, 31, 0x17E300u);
    ctx->pc = 0x17E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E2F8u;
    // 0x17e2fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E200u, 0x17E2F8u, 0x17E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E300u;
label_17e300:
    // 0x17e300: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17e300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e304: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x17e304u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x17e308: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x17E308u;
    {
        const bool branch_taken_0x17e308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E308u;
        // 0x17e30c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e308) {
            ctx->pc = 0x17E350u;
            goto label_17e350;
        }
    }
    ctx->pc = 0x17E310u;
label_17e310:
    // 0x17e310: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17e310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17e314: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e318: 0x24847730  addiu       $a0, $a0, 0x7730
    ctx->pc = 0x17e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    // 0x17e31c: 0xc05f9bc  jal         func_17E6F0
    ctx->pc = 0x17E31Cu;
    SET_GPR_U32(ctx, 31, 0x17E324u);
    ctx->pc = 0x17E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E31Cu;
    // 0x17e320: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E6F0u, 0x17E31Cu, 0x17E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E324u;
label_17e324:
    // 0x17e324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17e324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e328: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x17E328u;
    SET_GPR_U32(ctx, 31, 0x17E330u);
    ctx->pc = 0x17E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E328u;
    // 0x17e32c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x17E328u, 0x17E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E330u;
label_17e330:
    // 0x17e330: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E330u;
    {
        const bool branch_taken_0x17e330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e330) {
            ctx->pc = 0x17E340u;
            goto label_17e340;
        }
    }
    ctx->pc = 0x17E338u;
    // 0x17e338: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17E338u;
    {
        const bool branch_taken_0x17e338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E338u;
        // 0x17e33c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e338) {
            ctx->pc = 0x17E354u;
            goto label_17e354;
        }
    }
    ctx->pc = 0x17E340u;
label_17e340:
    // 0x17e340: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17e344: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x17e344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x17e348: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x17E348u;
    {
        const bool branch_taken_0x17e348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e348) {
            ctx->pc = 0x17E310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e310;
        }
    }
    ctx->pc = 0x17E350u;
label_17e350:
    // 0x17e350: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17e350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17e354:
    // 0x17e354: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17e354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e358: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e35c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e368: 0x3e00008  jr          $ra
    ctx->pc = 0x17E368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E368u;
        // 0x17e36c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E370u;
}
