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

// Function: entry_0019a910
// Address: 0x19a910 - 0x19a944
void entry_0019a910_0x19a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a910_0x19a910");
#endif

    switch (ctx->pc) {
        case 0x19a918u: goto label_19a918;
        default: break;
    }

    ctx->pc = 0x19a910u;

    // 0x19a910: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x19A910u;
    SET_GPR_U32(ctx, 31, 0x19A918u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19A910u, 0x19A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A918u;
label_19a918:
    // 0x19a918: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a91c: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19A91Cu;
    {
        const bool branch_taken_0x19a91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a91c) {
            ctx->pc = 0x19A988u;
            return;
        }
    }
    ctx->pc = 0x19A924u;
    // 0x19a924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a928: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19A928u;
    {
        const bool branch_taken_0x19a928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a928) {
            ctx->pc = 0x19A95Cu;
            return;
        }
    }
    ctx->pc = 0x19A930u;
    // 0x19a930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A930u;
    {
        const bool branch_taken_0x19a930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A930u;
        // 0x19a934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a930) {
            ctx->pc = 0x19A944u;
            return;
        }
    }
    ctx->pc = 0x19A938u;
    // 0x19a938: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19A938u;
    {
        const bool branch_taken_0x19a938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A938u;
        // 0x19a93c: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a938) {
            ctx->pc = 0x19A9A0u;
            return;
        }
    }
    ctx->pc = 0x19A940u;
    // 0x19a940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19a944u;
}
