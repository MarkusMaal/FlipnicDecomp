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

// Function: entry_001940d0
// Address: 0x1940d0 - 0x194118
void entry_001940d0_0x1940d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001940d0_0x1940d0");
#endif

    switch (ctx->pc) {
        case 0x194104u: goto label_194104;
        default: break;
    }

    ctx->pc = 0x1940d0u;

    // 0x1940d0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1940d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1940d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1940d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1940d8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1940d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1940dc: 0x7823d700  lq          $v1, -0x2900($at)
    ctx->pc = 0x1940dcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x36D700u));
    // 0x1940e0: 0x24450560  addiu       $a1, $v0, 0x560
    ctx->pc = 0x1940e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
    // 0x1940e4: 0x78420560  lq          $v0, 0x560($v0)
    ctx->pc = 0x1940e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1376)));
    // 0x1940e8: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x1940e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1940ec: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1940ecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1940f0: 0x2c43ffff  sltiu       $v1, $v0, -0x1
    ctx->pc = 0x1940f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1940f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1940F4u;
    {
        const bool branch_taken_0x1940f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1940F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940F4u;
        // 0x1940f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940f4) {
            ctx->pc = 0x194118u;
            return;
        }
    }
    ctx->pc = 0x1940FCu;
    // 0x1940fc: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x1940FCu;
    SET_GPR_U32(ctx, 31, 0x194104u);
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x1940FCu, 0x194104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194104u;
label_194104:
    // 0x194104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194108: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194108u;
    {
        const bool branch_taken_0x194108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x194108) {
            ctx->pc = 0x194118u;
            return;
        }
    }
    ctx->pc = 0x194110u;
    // 0x194110: 0xc064954  jal         func_192550
    ctx->pc = 0x194110u;
    SET_GPR_U32(ctx, 31, 0x194118u);
    ctx->pc = 0x192550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192550u, 0x194110u, 0x194118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194118u;
}
