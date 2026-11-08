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

// Function: entry_001dbcdc
// Address: 0x1dbcdc - 0x1dbcec
void entry_001dbcdc_0x1dbcdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbcdc_0x1dbcdc");
#endif

    ctx->pc = 0x1dbcdcu;

    // 0x1dbcdc: 0x5d000003  bgtzl       $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBCDCu;
    {
        const bool branch_taken_0x1dbcdc = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x1dbcdc) {
            ctx->pc = 0x1DBCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBCDCu;
            // 0x1dbce0: 0x27a300c0  addiu       $v1, $sp, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBCECu;
            return;
        }
    }
    ctx->pc = 0x1DBCE4u;
    // 0x1dbce4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1dbce4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbce8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1dbce8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1dbcecu;
}
