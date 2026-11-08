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

// Function: entry_0013c918
// Address: 0x13c918 - 0x13c950
void entry_0013c918_0x13c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c918_0x13c918");
#endif

    switch (ctx->pc) {
        case 0x13c920u: goto label_13c920;
        case 0x13c93cu: goto label_13c93c;
        default: break;
    }

    ctx->pc = 0x13c918u;

label_13c918:
    // 0x13c918: 0xc05068c  jal         func_141A30
label_13c91c:
    if (ctx->pc == 0x13C91Cu) {
        ctx->pc = 0x13C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C918u;
        // 0x13c91c: 0xae200184  sw          $zero, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C920u;
        goto label_13c920;
    }
    ctx->pc = 0x13C918u;
    SET_GPR_U32(ctx, 31, 0x13C920u);
    ctx->pc = 0x13C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C918u;
    // 0x13c91c: 0xae200184  sw          $zero, 0x184($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A30u, 0x13C918u, 0x13C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C920u;
label_13c920:
    // 0x13c920: 0x8e2301b8  lw          $v1, 0x1B8($s1)
    ctx->pc = 0x13c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_13c924:
    // 0x13c924: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
label_13c928:
    if (ctx->pc == 0x13C928u) {
        ctx->pc = 0x13C92Cu;
        goto label_13c92c;
    }
    ctx->pc = 0x13C924u;
    {
        const bool branch_taken_0x13c924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c924) {
            ctx->pc = 0x13CB0Cu;
            return;
        }
    }
    ctx->pc = 0x13C92Cu;
label_13c92c:
    // 0x13c92c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13c92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13c930:
    // 0x13c930: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13c930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13c934:
    // 0x13c934: 0x320f809  jalr        $t9
label_13c938:
    if (ctx->pc == 0x13C938u) {
        ctx->pc = 0x13C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C934u;
        // 0x13c938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C93Cu;
        goto label_13c93c;
    }
    ctx->pc = 0x13C934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13C93Cu);
        ctx->pc = 0x13C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C934u;
        // 0x13c938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C934u, 0x13C93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C93Cu;
label_13c93c:
    // 0x13c93c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_13c940:
    if (ctx->pc == 0x13C940u) {
        ctx->pc = 0x13C944u;
        goto label_13c944;
    }
    ctx->pc = 0x13C93Cu;
    {
        const bool branch_taken_0x13c93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c93c) {
            ctx->pc = 0x13CB0Cu;
            return;
        }
    }
    ctx->pc = 0x13C944u;
label_13c944:
    // 0x13c944: 0xa2200055  sb          $zero, 0x55($s1)
    ctx->pc = 0x13c944u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 0));
label_13c948:
    // 0x13c948: 0x10000070  b           . + 4 + (0x70 << 2)
label_13c94c:
    if (ctx->pc == 0x13C94Cu) {
        ctx->pc = 0x13C950u;
        goto label_fallthrough_0x13c948;
    }
    ctx->pc = 0x13C948u;
    {
        const bool branch_taken_0x13c948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c948) {
            ctx->pc = 0x13CB0Cu;
            return;
        }
    }
label_fallthrough_0x13c948:
    ctx->pc = 0x13C950u;
}
