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

// Function: entry_001e468c
// Address: 0x1e468c - 0x1e46b4
void entry_001e468c_0x1e468c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e468c_0x1e468c");
#endif

    switch (ctx->pc) {
        case 0x1e469cu: goto label_1e469c;
        default: break;
    }

    ctx->pc = 0x1e468cu;

    // 0x1e468c: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1e468cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1e4690: 0xdfc50070  ld          $a1, 0x70($fp)
    ctx->pc = 0x1e4690u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x1e4694: 0xc07f74e  jal         func_1FDD38
    ctx->pc = 0x1E4694u;
    SET_GPR_U32(ctx, 31, 0x1E469Cu);
    ctx->pc = 0x1E4698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4694u;
    // 0x1e4698: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD38u, 0x1E4694u, 0x1E469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E469Cu;
label_1e469c:
    // 0x1e469c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E469Cu;
    {
        const bool branch_taken_0x1e469c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E469Cu;
        // 0x1e46a0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e469c) {
            ctx->pc = 0x1E46B4u;
            return;
        }
    }
    ctx->pc = 0x1E46A4u;
    // 0x1e46a4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e46a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e46a8: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e46a8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1e46ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E46ACu;
    {
        const bool branch_taken_0x1e46ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46ACu;
        // 0x1e46b0: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e46ac) {
            ctx->pc = 0x1E46E0u;
            return;
        }
    }
    ctx->pc = 0x1E46B4u;
}
