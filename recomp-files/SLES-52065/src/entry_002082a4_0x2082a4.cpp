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

// Function: entry_002082a4
// Address: 0x2082a4 - 0x2082d0
void entry_002082a4_0x2082a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002082a4_0x2082a4");
#endif

    ctx->pc = 0x2082a4u;

    // 0x2082a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2082a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2082a8: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2082a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2082ac: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2082acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2082b0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2082B0u;
    {
        const bool branch_taken_0x2082b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2082B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082B0u;
        // 0x2082b4: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082b0) {
            ctx->pc = 0x2082F8u;
            return;
        }
    }
    ctx->pc = 0x2082B8u;
    // 0x2082b8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2082b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2082bc: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x2082bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2082c0: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x2082c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2082c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2082c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2082c8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2082c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2082cc: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2082ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    ctx->pc = 0x2082d0u;
}
