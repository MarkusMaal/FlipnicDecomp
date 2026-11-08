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

// Function: entry_001424dc
// Address: 0x1424dc - 0x142520
void entry_001424dc_0x1424dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001424dc_0x1424dc");
#endif

    switch (ctx->pc) {
        case 0x142504u: goto label_142504;
        default: break;
    }

    ctx->pc = 0x1424dcu;

    // 0x1424dc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1424dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1424e0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1424E0u;
    {
        const bool branch_taken_0x1424e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1424e0) {
            ctx->pc = 0x142520u;
            return;
        }
    }
    ctx->pc = 0x1424E8u;
    // 0x1424e8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1424e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1424ec: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x1424ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1424f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1424f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1424f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1424f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1424f8: 0xc44c007c  lwc1        $f12, 0x7C($v0)
    ctx->pc = 0x1424f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1424fc: 0xc04c730  jal         func_131CC0
    ctx->pc = 0x1424FCu;
    SET_GPR_U32(ctx, 31, 0x142504u);
    ctx->pc = 0x142500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424FCu;
    // 0x142500: 0x26320034  addiu       $s2, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x1424FCu, 0x142504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142504u;
label_142504:
    // 0x142504: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x142504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142508: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x142508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x14250c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x14250cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x142510: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x142510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142514: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x142514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x142518: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x142518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14251c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x14251cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x142520u;
}
