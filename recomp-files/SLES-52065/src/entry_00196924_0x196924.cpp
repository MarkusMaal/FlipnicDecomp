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

// Function: entry_00196924
// Address: 0x196924 - 0x19695c
void entry_00196924_0x196924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196924_0x196924");
#endif

    switch (ctx->pc) {
        case 0x19693cu: goto label_19693c;
        case 0x196958u: goto label_196958;
        default: break;
    }

    ctx->pc = 0x196924u;

    // 0x196924: 0x0  nop
    ctx->pc = 0x196924u;
    // NOP
    // 0x196928: 0xaeb00340  sw          $s0, 0x340($s5)
    ctx->pc = 0x196928u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 832), GPR_U32(ctx, 16));
    // 0x19692c: 0xaea00674  sw          $zero, 0x674($s5)
    ctx->pc = 0x19692cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1652), GPR_U32(ctx, 0));
    // 0x196930: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196934: 0xc063e14  jal         func_18F850
    ctx->pc = 0x196934u;
    SET_GPR_U32(ctx, 31, 0x19693Cu);
    ctx->pc = 0x196938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196934u;
    // 0x196938: 0xaea00678  sw          $zero, 0x678($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1656), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x196934u, 0x19693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19693Cu;
label_19693c:
    // 0x19693c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196944: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x196944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x196948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x196948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19694c: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x19694cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x196950: 0xc064918  jal         func_192460
    ctx->pc = 0x196950u;
    SET_GPR_U32(ctx, 31, 0x196958u);
    ctx->pc = 0x196954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196950u;
    // 0x196954: 0xa043002d  sb          $v1, 0x2D($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x196950u, 0x196958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196958u;
label_196958:
    // 0x196958: 0xaea2067c  sw          $v0, 0x67C($s5)
    ctx->pc = 0x196958u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1660), GPR_U32(ctx, 2));
    ctx->pc = 0x19695cu;
}
