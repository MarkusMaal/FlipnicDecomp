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

// Function: entry_001a04f4
// Address: 0x1a04f4 - 0x1a0538
void entry_001a04f4_0x1a04f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a04f4_0x1a04f4");
#endif

    switch (ctx->pc) {
        case 0x1a0518u: goto label_1a0518;
        case 0x1a052cu: goto label_1a052c;
        default: break;
    }

    ctx->pc = 0x1a04f4u;

    // 0x1a04f4: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a04f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x1a04f8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a04fc: 0x24700040  addiu       $s0, $v1, 0x40
    ctx->pc = 0x1a04fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1a0500: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x1a0500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1a0504: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0504u;
    {
        const bool branch_taken_0x1a0504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0504) {
            ctx->pc = 0x1A0540u;
            return;
        }
    }
    ctx->pc = 0x1A050Cu;
    // 0x1a050c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a050cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0510: 0xc064918  jal         func_192460
    ctx->pc = 0x1A0510u;
    SET_GPR_U32(ctx, 31, 0x1A0518u);
    ctx->pc = 0x1A0514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0510u;
    // 0x1a0514: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x1A0510u, 0x1A0518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0518u;
label_1a0518:
    // 0x1a0518: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0518u;
    {
        const bool branch_taken_0x1a0518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0518u;
        // 0x1a051c: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0518) {
            ctx->pc = 0x1A0538u;
            return;
        }
    }
    ctx->pc = 0x1A0520u;
    // 0x1a0520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0524: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A0524u;
    SET_GPR_U32(ctx, 31, 0x1A052Cu);
    ctx->pc = 0x1A0528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0524u;
    // 0x1a0528: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A0524u, 0x1A052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A052Cu;
label_1a052c:
    // 0x1a052c: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x1A052Cu;
    {
        const bool branch_taken_0x1a052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a052c) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
    ctx->pc = 0x1A0534u;
    // 0x1a0534: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1a0534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x1a0538u;
}
