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

// Function: entry_0019a430
// Address: 0x19a430 - 0x19a464
void entry_0019a430_0x19a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a430_0x19a430");
#endif

    switch (ctx->pc) {
        case 0x19a438u: goto label_19a438;
        default: break;
    }

    ctx->pc = 0x19a430u;

    // 0x19a430: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x19A430u;
    SET_GPR_U32(ctx, 31, 0x19A438u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19A430u, 0x19A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A438u;
label_19a438:
    // 0x19a438: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a43c: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19A43Cu;
    {
        const bool branch_taken_0x19a43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a43c) {
            ctx->pc = 0x19A4A8u;
            return;
        }
    }
    ctx->pc = 0x19A444u;
    // 0x19a444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a448: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19A448u;
    {
        const bool branch_taken_0x19a448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a448) {
            ctx->pc = 0x19A47Cu;
            return;
        }
    }
    ctx->pc = 0x19A450u;
    // 0x19a450: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A450u;
    {
        const bool branch_taken_0x19a450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A450u;
        // 0x19a454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a450) {
            ctx->pc = 0x19A464u;
            return;
        }
    }
    ctx->pc = 0x19A458u;
    // 0x19a458: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19A458u;
    {
        const bool branch_taken_0x19a458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A458u;
        // 0x19a45c: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a458) {
            ctx->pc = 0x19A4C0u;
            return;
        }
    }
    ctx->pc = 0x19A460u;
    // 0x19a460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19a464u;
}
