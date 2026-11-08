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

// Function: entry_001b8dcc
// Address: 0x1b8dcc - 0x1b8df0
void entry_001b8dcc_0x1b8dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8dcc_0x1b8dcc");
#endif

    ctx->pc = 0x1b8dccu;

    // 0x1b8dcc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8dd0: 0x8023f448  lb          $v1, -0xBB8($at)
    ctx->pc = 0x1b8dd0u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F448u));
    // 0x1b8dd4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8DD4u;
    {
        const bool branch_taken_0x1b8dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DD4u;
        // 0x1b8dd8: 0x3c0442fe  lui         $a0, 0x42FE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8dd4) {
            ctx->pc = 0x1B8DF0u;
            return;
        }
    }
    ctx->pc = 0x1B8DDCu;
    // 0x1b8ddc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8de0: 0xac24f440  sw          $a0, -0xBC0($at)
    ctx->pc = 0x1b8de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F440u, _value); } while (0);
    // 0x1b8de4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8de8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8dec: 0xa023f448  sb          $v1, -0xBB8($at)
    ctx->pc = 0x1b8decu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F448u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F448u, _value); } while (0);
    ctx->pc = 0x1b8df0u;
}
