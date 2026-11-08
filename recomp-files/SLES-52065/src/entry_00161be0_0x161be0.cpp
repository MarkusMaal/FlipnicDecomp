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

// Function: entry_00161be0
// Address: 0x161be0 - 0x161c04
void entry_00161be0_0x161be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161be0_0x161be0");
#endif

    ctx->pc = 0x161be0u;

    // 0x161be0: 0x14c40008  bne         $a2, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x161BE0u;
    {
        const bool branch_taken_0x161be0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x161BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BE0u;
        // 0x161be4: 0x28a10004  slti        $at, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161be0) {
            ctx->pc = 0x161C04u;
            return;
        }
    }
    ctx->pc = 0x161BE8u;
    // 0x161be8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x161BE8u;
    {
        const bool branch_taken_0x161be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x161be8) {
            ctx->pc = 0x161C04u;
            return;
        }
    }
    ctx->pc = 0x161BF0u;
    // 0x161bf0: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x161bf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x161bf4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x161BF4u;
    {
        const bool branch_taken_0x161bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161bf4) {
            ctx->pc = 0x161C04u;
            return;
        }
    }
    ctx->pc = 0x161BFCu;
    // 0x161bfc: 0xa204021c  sb          $a0, 0x21C($s0)
    ctx->pc = 0x161bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 4));
    // 0x161c00: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x161c00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x161c04u;
}
