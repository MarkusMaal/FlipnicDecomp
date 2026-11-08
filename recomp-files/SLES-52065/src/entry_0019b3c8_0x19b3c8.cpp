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

// Function: entry_0019b3c8
// Address: 0x19b3c8 - 0x19b3f4
void entry_0019b3c8_0x19b3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b3c8_0x19b3c8");
#endif

    ctx->pc = 0x19b3c8u;

    // 0x19b3c8: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x19b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x19b3cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19B3CCu;
    {
        const bool branch_taken_0x19b3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3CCu;
        // 0x19b3d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3cc) {
            ctx->pc = 0x19B430u;
            return;
        }
    }
    ctx->pc = 0x19B3D4u;
    // 0x19b3d4: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x19b3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x19b3d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3dc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19b3e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19b3e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b3e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3e8: 0x8c462c10  lw          $a2, 0x2C10($v0)
    ctx->pc = 0x19b3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
    // 0x19b3ec: 0x0  nop
    ctx->pc = 0x19b3ecu;
    // NOP
    // 0x19b3f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x19b3f4u;
}
