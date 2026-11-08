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

// Function: entry_001942a4
// Address: 0x1942a4 - 0x1942f0
void entry_001942a4_0x1942a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001942a4_0x1942a4");
#endif

    switch (ctx->pc) {
        case 0x1942dcu: goto label_1942dc;
        default: break;
    }

    ctx->pc = 0x1942a4u;

    // 0x1942a4: 0x0  nop
    ctx->pc = 0x1942a4u;
    // NOP
    // 0x1942a8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1942a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1942ac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1942acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1942b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1942b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1942b4: 0x24450560  addiu       $a1, $v0, 0x560
    ctx->pc = 0x1942b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
    // 0x1942b8: 0x7823d700  lq          $v1, -0x2900($at)
    ctx->pc = 0x1942b8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x36D700u));
    // 0x1942bc: 0x78420560  lq          $v0, 0x560($v0)
    ctx->pc = 0x1942bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1376)));
    // 0x1942c0: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x1942c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1942c4: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1942c4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1942c8: 0x2c43ffff  sltiu       $v1, $v0, -0x1
    ctx->pc = 0x1942c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1942cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1942CCu;
    {
        const bool branch_taken_0x1942cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942CCu;
        // 0x1942d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942cc) {
            ctx->pc = 0x1942F0u;
            return;
        }
    }
    ctx->pc = 0x1942D4u;
    // 0x1942d4: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x1942D4u;
    SET_GPR_U32(ctx, 31, 0x1942DCu);
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x1942D4u, 0x1942DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1942DCu;
label_1942dc:
    // 0x1942dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1942dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1942e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1942E0u;
    {
        const bool branch_taken_0x1942e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1942e0) {
            ctx->pc = 0x1942F0u;
            return;
        }
    }
    ctx->pc = 0x1942E8u;
    // 0x1942e8: 0xc064954  jal         func_192550
    ctx->pc = 0x1942E8u;
    SET_GPR_U32(ctx, 31, 0x1942F0u);
    ctx->pc = 0x192550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192550u, 0x1942E8u, 0x1942F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1942F0u;
}
