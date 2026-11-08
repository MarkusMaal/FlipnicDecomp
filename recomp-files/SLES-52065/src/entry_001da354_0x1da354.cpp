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

// Function: entry_001da354
// Address: 0x1da354 - 0x1da3b0
void entry_001da354_0x1da354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da354_0x1da354");
#endif

    ctx->pc = 0x1da354u;

    // 0x1da354: 0x252971d0  addiu       $t1, $t1, 0x71D0
    ctx->pc = 0x1da354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da358: 0x24c370d0  addiu       $v1, $a2, 0x70D0
    ctx->pc = 0x1da358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28880));
    // 0x1da35c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1da35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1da360: 0x240b007f  addiu       $t3, $zero, 0x7F
    ctx->pc = 0x1da360u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1da364: 0x240dfff7  addiu       $t5, $zero, -0x9
    ctx->pc = 0x1da364u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1da368: 0x435021  addu        $t2, $v0, $v1
    ctx->pc = 0x1da368u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da36c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da370: 0x436021  addu        $t4, $v0, $v1
    ctx->pc = 0x1da370u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da374: 0x24440006  addiu       $a0, $v0, 0x6
    ctx->pc = 0x1da374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1da378: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x1da378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da37c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x1da37cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x1da380: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1da380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da384: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x1da384u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da388: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1da388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da38c: 0xa0ab0000  sb          $t3, 0x0($a1)
    ctx->pc = 0x1da38cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x1da390: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1da390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da394: 0xa0ce0001  sb          $t6, 0x1($a2)
    ctx->pc = 0x1da394u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 14));
    // 0x1da398: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1da398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da39c: 0xa0f60002  sb          $s6, 0x2($a3)
    ctx->pc = 0x1da39cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 22));
    // 0x1da3a0: 0xa1170003  sb          $s7, 0x3($t0)
    ctx->pc = 0x1da3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 23));
    // 0x1da3a4: 0xa0580004  sb          $t8, 0x4($v0)
    ctx->pc = 0x1da3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 24));
    // 0x1da3a8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1DA3A8u;
    {
        const bool branch_taken_0x1da3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3A8u;
        // 0x1da3ac: 0xa18d0005  sb          $t5, 0x5($t4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 12), 5), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3a8) {
            ctx->pc = 0x1DA50Cu;
            return;
        }
    }
    ctx->pc = 0x1DA3B0u;
}
