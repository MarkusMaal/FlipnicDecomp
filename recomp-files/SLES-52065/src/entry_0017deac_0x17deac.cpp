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

// Function: entry_0017deac
// Address: 0x17deac - 0x17dec0
void entry_0017deac_0x17deac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017deac_0x17deac");
#endif

    ctx->pc = 0x17deacu;

    // 0x17deac: 0x28410020  slti        $at, $v0, 0x20
    ctx->pc = 0x17deacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17deb0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x17DEB0u;
    {
        const bool branch_taken_0x17deb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17deb0) {
            ctx->pc = 0x17DF18u;
            return;
        }
    }
    ctx->pc = 0x17DEB8u;
    // 0x17deb8: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17DEB8u;
    {
        const bool branch_taken_0x17deb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEB8u;
        // 0x17debc: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17deb8) {
            ctx->pc = 0x17DF18u;
            return;
        }
    }
    ctx->pc = 0x17DEC0u;
}
