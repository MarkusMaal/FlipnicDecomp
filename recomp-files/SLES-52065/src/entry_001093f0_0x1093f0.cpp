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

// Function: entry_001093f0
// Address: 0x1093f0 - 0x10941c
void entry_001093f0_0x1093f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001093f0_0x1093f0");
#endif

    switch (ctx->pc) {
        case 0x1093fcu: goto label_1093fc;
        case 0x109408u: goto label_109408;
        default: break;
    }

    ctx->pc = 0x1093f0u;

    // 0x1093f0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1093f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1093f4: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1093F4u;
    SET_GPR_U32(ctx, 31, 0x1093FCu);
    ctx->pc = 0x1093F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093F4u;
    // 0x1093f8: 0xa46201e8  sh          $v0, 0x1E8($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 488), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1093F4u, 0x1093FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093FCu;
label_1093fc:
    // 0x1093fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1093fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109400: 0xc04a058  jal         func_128160
    ctx->pc = 0x109400u;
    SET_GPR_U32(ctx, 31, 0x109408u);
    ctx->pc = 0x109404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109400u;
    // 0x109404: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128160u, 0x109400u, 0x109408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109408u;
label_109408:
    // 0x109408: 0x8e042cd0  lw          $a0, 0x2CD0($s0)
    ctx->pc = 0x109408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11472)));
    // 0x10940c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10940Cu;
    {
        const bool branch_taken_0x10940c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x109410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10940Cu;
        // 0x109410: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10940c) {
            ctx->pc = 0x10941Cu;
            return;
        }
    }
    ctx->pc = 0x109414u;
    // 0x109414: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109414u;
    {
        const bool branch_taken_0x109414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109414u;
        // 0x109418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109414) {
            ctx->pc = 0x109434u;
            return;
        }
    }
    ctx->pc = 0x10941Cu;
}
