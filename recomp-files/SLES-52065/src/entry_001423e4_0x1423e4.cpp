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

// Function: entry_001423e4
// Address: 0x1423e4 - 0x14240c
void entry_001423e4_0x1423e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001423e4_0x1423e4");
#endif

    ctx->pc = 0x1423e4u;

    // 0x1423e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1423e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1423e8: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1423e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1423ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1423ECu;
    {
        const bool branch_taken_0x1423ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1423ec) {
            ctx->pc = 0x14240Cu;
            return;
        }
    }
    ctx->pc = 0x1423F4u;
    // 0x1423f4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1423f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1423f8: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x1423f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1423fc: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1423fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x142400: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x142400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x142404: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x142404u;
    SET_GPR_U32(ctx, 31, 0x14240Cu);
    ctx->pc = 0x142408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142404u;
    // 0x142408: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x142404u, 0x14240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14240Cu;
}
