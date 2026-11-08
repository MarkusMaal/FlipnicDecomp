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

// Function: entry_0011d2a8
// Address: 0x11d2a8 - 0x11d2c4
void entry_0011d2a8_0x11d2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d2a8_0x11d2a8");
#endif

    ctx->pc = 0x11d2a8u;

    // 0x11d2a8: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x11d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x11d2ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d2b0: 0x8eb10530  lw          $s1, 0x530($s5)
    ctx->pc = 0x11d2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x11d2b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d2b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d2b8: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x11d2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x11d2bc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x11D2BCu;
    {
        const bool branch_taken_0x11d2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2BCu;
        // 0x11d2c0: 0x64902d  daddu       $s2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2bc) {
            ctx->pc = 0x11D3E8u;
            return;
        }
    }
    ctx->pc = 0x11D2C4u;
}
