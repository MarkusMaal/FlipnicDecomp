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

// Function: entry_001e362c
// Address: 0x1e362c - 0x1e3654
void entry_001e362c_0x1e362c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e362c_0x1e362c");
#endif

    switch (ctx->pc) {
        case 0x1e363cu: goto label_1e363c;
        default: break;
    }

    ctx->pc = 0x1e362cu;

    // 0x1e362c: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1e362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1e3630: 0xdfc50070  ld          $a1, 0x70($fp)
    ctx->pc = 0x1e3630u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x1e3634: 0xc07f74e  jal         func_1FDD38
    ctx->pc = 0x1E3634u;
    SET_GPR_U32(ctx, 31, 0x1E363Cu);
    ctx->pc = 0x1E3638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3634u;
    // 0x1e3638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD38u, 0x1E3634u, 0x1E363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E363Cu;
label_1e363c:
    // 0x1e363c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E363Cu;
    {
        const bool branch_taken_0x1e363c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E363Cu;
        // 0x1e3640: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e363c) {
            ctx->pc = 0x1E3654u;
            return;
        }
    }
    ctx->pc = 0x1E3644u;
    // 0x1e3644: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e3644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3648: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e3648u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1e364c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E364Cu;
    {
        const bool branch_taken_0x1e364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E364Cu;
        // 0x1e3650: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e364c) {
            ctx->pc = 0x1E3680u;
            return;
        }
    }
    ctx->pc = 0x1E3654u;
}
