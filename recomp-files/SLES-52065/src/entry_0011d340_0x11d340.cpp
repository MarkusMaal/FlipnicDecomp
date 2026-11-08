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

// Function: entry_0011d340
// Address: 0x11d340 - 0x11d35c
void entry_0011d340_0x11d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d340_0x11d340");
#endif

    ctx->pc = 0x11d340u;

    // 0x11d340: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x11d340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x11d344: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d348: 0x8eb10530  lw          $s1, 0x530($s5)
    ctx->pc = 0x11d348u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x11d34c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d34cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d350: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x11d350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x11d354: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x11D354u;
    {
        const bool branch_taken_0x11d354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D354u;
        // 0x11d358: 0x64902d  daddu       $s2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d354) {
            ctx->pc = 0x11D3E8u;
            return;
        }
    }
    ctx->pc = 0x11D35Cu;
}
