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

// Function: entry_001cc190
// Address: 0x1cc190 - 0x1cc1dc
void entry_001cc190_0x1cc190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc190_0x1cc190");
#endif

    ctx->pc = 0x1cc190u;

label_1cc190:
    // 0x1cc190: 0x81470000  lb          $a3, 0x0($t2)
    ctx->pc = 0x1cc190u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cc194: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1cc194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1cc198: 0x81440001  lb          $a0, 0x1($t2)
    ctx->pc = 0x1cc198u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x1cc19c: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x1cc19cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cc1a0: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x1cc1a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x1cc1a4: 0xa1240001  sb          $a0, 0x1($t1)
    ctx->pc = 0x1cc1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cc1a8: 0x1d00fff9  bgtz        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CC1A8u;
    {
        const bool branch_taken_0x1cc1a8 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1CC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1A8u;
        // 0x1cc1ac: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1a8) {
            ctx->pc = 0x1CC190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc190;
        }
    }
    ctx->pc = 0x1CC1B0u;
    // 0x1cc1b0: 0x91c70030  lbu         $a3, 0x30($t6)
    ctx->pc = 0x1cc1b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 48)));
    // 0x1cc1b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cc1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cc1b8: 0x91c40031  lbu         $a0, 0x31($t6)
    ctx->pc = 0x1cc1b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 49)));
    // 0x1cc1bc: 0x24c6ffc8  addiu       $a2, $a2, -0x38
    ctx->pc = 0x1cc1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967240));
    // 0x1cc1c0: 0xa1a70030  sb          $a3, 0x30($t5)
    ctx->pc = 0x1cc1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 48), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cc1c4: 0xa1a40031  sb          $a0, 0x31($t5)
    ctx->pc = 0x1cc1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 49), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cc1c8: 0x91c70032  lbu         $a3, 0x32($t6)
    ctx->pc = 0x1cc1c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 50)));
    // 0x1cc1cc: 0x91c40033  lbu         $a0, 0x33($t6)
    ctx->pc = 0x1cc1ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 51)));
    // 0x1cc1d0: 0xa1a70032  sb          $a3, 0x32($t5)
    ctx->pc = 0x1cc1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 50), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cc1d4: 0x1465ffda  bne         $v1, $a1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1CC1D4u;
    {
        const bool branch_taken_0x1cc1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1D4u;
        // 0x1cc1d8: 0xa1a40033  sb          $a0, 0x33($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 51), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1d4) {
            ctx->pc = 0x1CC140u;
            return;
        }
    }
    ctx->pc = 0x1CC1DCu;
}
