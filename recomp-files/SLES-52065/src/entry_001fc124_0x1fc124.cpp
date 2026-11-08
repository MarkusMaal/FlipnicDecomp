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

// Function: entry_001fc124
// Address: 0x1fc124 - 0x1fc148
void entry_001fc124_0x1fc124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc124_0x1fc124");
#endif

    switch (ctx->pc) {
        case 0x1fc12cu: goto label_1fc12c;
        default: break;
    }

    ctx->pc = 0x1fc124u;

    // 0x1fc124: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FC124u;
    SET_GPR_U32(ctx, 31, 0x1FC12Cu);
    ctx->pc = 0x1FC128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC124u;
    // 0x1fc128: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FC124u, 0x1FC12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC12Cu;
label_1fc12c:
    // 0x1fc12c: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1FC12Cu;
    {
        const bool branch_taken_0x1fc12c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC12Cu;
        // 0x1fc130: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc12c) {
            ctx->pc = 0x1FC1E0u;
            return;
        }
    }
    ctx->pc = 0x1FC134u;
    // 0x1fc134: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x1fc134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1fc138: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1fc138u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc13c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fc13cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc140: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1fc140u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc144: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x1fc144u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x1fc148u;
}
