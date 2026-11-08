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

// Function: entry_00178560
// Address: 0x178560 - 0x178598
void entry_00178560_0x178560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178560_0x178560");
#endif

    switch (ctx->pc) {
        case 0x17856cu: goto label_17856c;
        default: break;
    }

    ctx->pc = 0x178560u;

label_178560:
    // 0x178560: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x178560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x178564: 0xc05e204  jal         func_178810
    ctx->pc = 0x178564u;
    SET_GPR_U32(ctx, 31, 0x17856Cu);
    ctx->pc = 0x178568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178564u;
    // 0x178568: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178810u, 0x178564u, 0x17856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17856Cu;
label_17856c:
    // 0x17856c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17856cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x178570: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x178570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x178574: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x178574u;
    {
        const bool branch_taken_0x178574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178574u;
        // 0x178578: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178574) {
            ctx->pc = 0x178560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178560;
        }
    }
    ctx->pc = 0x17857Cu;
    // 0x17857c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17857cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178580: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178584: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178588: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17858c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17858cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178590: 0x3e00008  jr          $ra
    ctx->pc = 0x178590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178590u;
        // 0x178594: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178598u;
}
