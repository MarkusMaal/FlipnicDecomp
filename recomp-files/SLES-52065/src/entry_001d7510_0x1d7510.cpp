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

// Function: entry_001d7510
// Address: 0x1d7510 - 0x1d7524
void entry_001d7510_0x1d7510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7510_0x1d7510");
#endif

    ctx->pc = 0x1d7510u;

    // 0x1d7510: 0x96a30064  lhu         $v1, 0x64($s5)
    ctx->pc = 0x1d7510u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1d7514: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7514u;
    {
        const bool branch_taken_0x1d7514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7514u;
        // 0x1d7518: 0x96c60008  lhu         $a2, 0x8($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7514) {
            ctx->pc = 0x1D7524u;
            return;
        }
    }
    ctx->pc = 0x1D751Cu;
    // 0x1d751c: 0x30c2803f  andi        $v0, $a2, 0x803F
    ctx->pc = 0x1d751cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32831);
    // 0x1d7520: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1d7520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x1d7524u;
}
