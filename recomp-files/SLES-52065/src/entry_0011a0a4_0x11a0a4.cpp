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

// Function: entry_0011a0a4
// Address: 0x11a0a4 - 0x11a0cc
void entry_0011a0a4_0x11a0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a0a4_0x11a0a4");
#endif

    ctx->pc = 0x11a0a4u;

    // 0x11a0a4: 0x0  nop
    ctx->pc = 0x11a0a4u;
    // NOP
    // 0x11a0a8: 0x8f8283e0  lw          $v0, -0x7C20($gp)
    ctx->pc = 0x11a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935520)));
    // 0x11a0ac: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A0ACu;
    {
        const bool branch_taken_0x11a0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x11A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0ACu;
        // 0x11a0b0: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0ac) {
            ctx->pc = 0x11A0CCu;
            return;
        }
    }
    ctx->pc = 0x11A0B4u;
    // 0x11a0b4: 0xdf8283e8  ld          $v0, -0x7C18($gp)
    ctx->pc = 0x11a0b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935528)));
    // 0x11a0b8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x11a0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x11a0bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11a0bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11a0c0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x11a0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x11a0c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11A0C4u;
    {
        const bool branch_taken_0x11a0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0C4u;
        // 0x11a0c8: 0xff8283e8  sd          $v0, -0x7C18($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935528), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0c4) {
            ctx->pc = 0x11A0D8u;
            return;
        }
    }
    ctx->pc = 0x11A0CCu;
}
