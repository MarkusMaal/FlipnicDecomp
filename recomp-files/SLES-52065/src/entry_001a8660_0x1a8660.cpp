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

// Function: entry_001a8660
// Address: 0x1a8660 - 0x1a8694
void entry_001a8660_0x1a8660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8660_0x1a8660");
#endif

    switch (ctx->pc) {
        case 0x1a8668u: goto label_1a8668;
        default: break;
    }

    ctx->pc = 0x1a8660u;

    // 0x1a8660: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x1A8660u;
    SET_GPR_U32(ctx, 31, 0x1A8668u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A8660u, 0x1A8668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8668u;
label_1a8668:
    // 0x1a8668: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a8668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a866c: 0x10430151  beq         $v0, $v1, . + 4 + (0x151 << 2)
    ctx->pc = 0x1A866Cu;
    {
        const bool branch_taken_0x1a866c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a866c) {
            ctx->pc = 0x1A8BB4u;
            return;
        }
    }
    ctx->pc = 0x1A8674u;
    // 0x1a8674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a8674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8678: 0x1045000a  beq         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A8678u;
    {
        const bool branch_taken_0x1a8678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a8678) {
            ctx->pc = 0x1A86A4u;
            return;
        }
    }
    ctx->pc = 0x1A8680u;
    // 0x1a8680: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8680u;
    {
        const bool branch_taken_0x1a8680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8680u;
        // 0x1a8684: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8680) {
            ctx->pc = 0x1A8694u;
            return;
        }
    }
    ctx->pc = 0x1A8688u;
    // 0x1a8688: 0x100002e0  b           . + 4 + (0x2E0 << 2)
    ctx->pc = 0x1A8688u;
    {
        const bool branch_taken_0x1a8688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8688u;
        // 0x1a868c: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8688) {
            ctx->pc = 0x1A920Cu;
            return;
        }
    }
    ctx->pc = 0x1A8690u;
    // 0x1a8690: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a8690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a8694u;
}
