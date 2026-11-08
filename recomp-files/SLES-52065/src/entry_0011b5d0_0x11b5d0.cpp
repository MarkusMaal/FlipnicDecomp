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

// Function: entry_0011b5d0
// Address: 0x11b5d0 - 0x11b600
void entry_0011b5d0_0x11b5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b5d0_0x11b5d0");
#endif

    ctx->pc = 0x11b5d0u;

    // 0x11b5d0: 0xc25021  addu        $t2, $a2, $v0
    ctx->pc = 0x11b5d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b5d4: 0xa1470000  sb          $a3, 0x0($t2)
    ctx->pc = 0x11b5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x11b5d8: 0x81230001  lb          $v1, 0x1($t1)
    ctx->pc = 0x11b5d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x11b5dc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x11B5DCu;
    {
        const bool branch_taken_0x11b5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5DCu;
        // 0x11b5e0: 0x71e3c  dsll32      $v1, $a3, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5dc) {
            ctx->pc = 0x11B610u;
            return;
        }
    }
    ctx->pc = 0x11B5E4u;
    // 0x11b5e4: 0x7263c  dsll32      $a0, $a3, 24
    ctx->pc = 0x11b5e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 24));
    // 0x11b5e8: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x11b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x11b5ec: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x11b5ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x11b5f0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B5F0u;
    {
        const bool branch_taken_0x11b5f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b5f0) {
            ctx->pc = 0x11B600u;
            return;
        }
    }
    ctx->pc = 0x11B5F8u;
    // 0x11b5f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11B5F8u;
    {
        const bool branch_taken_0x11b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5F8u;
        // 0x11b5fc: 0xa1400000  sb          $zero, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5f8) {
            ctx->pc = 0x11B630u;
            return;
        }
    }
    ctx->pc = 0x11B600u;
}
