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

// Function: entry_001386f0
// Address: 0x1386f0 - 0x138708
void entry_001386f0_0x1386f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001386f0_0x1386f0");
#endif

    ctx->pc = 0x1386f0u;

    // 0x1386f0: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x1386f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1386f4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1386f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1386f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1386f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1386fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1386FCu;
    {
        const bool branch_taken_0x1386fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386FCu;
        // 0x138700: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1386fc) {
            ctx->pc = 0x138708u;
            return;
        }
    }
    ctx->pc = 0x138704u;
    // 0x138704: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x138704u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x138708u;
}
