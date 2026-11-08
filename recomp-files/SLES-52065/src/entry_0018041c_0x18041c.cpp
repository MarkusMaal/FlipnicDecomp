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

// Function: entry_0018041c
// Address: 0x18041c - 0x180448
void entry_0018041c_0x18041c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018041c_0x18041c");
#endif

    ctx->pc = 0x18041cu;

    // 0x18041c: 0x8f838670  lw          $v1, -0x7990($gp)
    ctx->pc = 0x18041cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936176)));
    // 0x180420: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x180420u;
    {
        const bool branch_taken_0x180420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180420) {
            ctx->pc = 0x180448u;
            return;
        }
    }
    ctx->pc = 0x180428u;
    // 0x180428: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x180428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18042c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18042cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180430: 0xaf828670  sw          $v0, -0x7990($gp)
    ctx->pc = 0x180430u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 2));
    // 0x180434: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180438: 0x8e460048  lw          $a2, 0x48($s2)
    ctx->pc = 0x180438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x18043c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18043cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180440: 0xc0607bc  jal         func_181EF0
    ctx->pc = 0x180440u;
    SET_GPR_U32(ctx, 31, 0x180448u);
    ctx->pc = 0x180444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180440u;
    // 0x180444: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181EF0u, 0x180440u, 0x180448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180448u;
}
