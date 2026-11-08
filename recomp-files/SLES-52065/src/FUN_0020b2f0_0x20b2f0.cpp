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

// Function: FUN_0020b2f0
// Address: 0x20b2f0 - 0x20b358
void FUN_0020b2f0_0x20b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020b2f0_0x20b2f0");
#endif

    switch (ctx->pc) {
        case 0x20b318u: goto label_20b318;
        default: break;
    }

    ctx->pc = 0x20b2f0u;

    // 0x20b2f0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B2F0u;
    {
        const bool branch_taken_0x20b2f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2F0u;
        // 0x20b2f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2f0) {
            ctx->pc = 0x20B30Cu;
            goto label_20b30c;
        }
    }
    ctx->pc = 0x20B2F8u;
    // 0x20b2f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b2fc: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20B2FCu;
    {
        const bool branch_taken_0x20b2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2FCu;
        // 0x20b300: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2fc) {
            ctx->pc = 0x20B33Cu;
            goto label_20b33c;
        }
    }
    ctx->pc = 0x20B304u;
    // 0x20b304: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20B304u;
    {
        const bool branch_taken_0x20b304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b304) {
            ctx->pc = 0x20B350u;
            goto label_20b350;
        }
    }
    ctx->pc = 0x20B30Cu;
label_20b30c:
    // 0x20b30c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20b310: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x20b310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x20b314: 0x0  nop
    ctx->pc = 0x20b314u;
    // NOP
label_20b318:
    // 0x20b318: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b31c: 0x0  nop
    ctx->pc = 0x20b31cu;
    // NOP
    // 0x20b320: 0x0  nop
    ctx->pc = 0x20b320u;
    // NOP
    // 0x20b324: 0x0  nop
    ctx->pc = 0x20b324u;
    // NOP
    // 0x20b328: 0x0  nop
    ctx->pc = 0x20b328u;
    // NOP
    // 0x20b32c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B32Cu;
    {
        const bool branch_taken_0x20b32c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b32c) {
            ctx->pc = 0x20B318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b318;
        }
    }
    ctx->pc = 0x20B334u;
    // 0x20b334: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20B334u;
    {
        const bool branch_taken_0x20b334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B334u;
        // 0x20b338: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b334) {
            ctx->pc = 0x20B34Cu;
            goto label_20b34c;
        }
    }
    ctx->pc = 0x20B33Cu;
label_20b33c:
    // 0x20b33c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b340: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x20b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x20b344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20b344u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x20b348: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x20b348u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_20b34c:
    // 0x20b34c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20b34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20b350:
    // 0x20b350: 0x3e00008  jr          $ra
    ctx->pc = 0x20B350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B358u;
}
