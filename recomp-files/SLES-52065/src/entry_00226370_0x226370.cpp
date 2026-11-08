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

// Function: entry_00226370
// Address: 0x226370 - 0x226408
void entry_00226370_0x226370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226370_0x226370");
#endif

    ctx->pc = 0x226370u;

label_226370:
    // 0x226370: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x226370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x226374: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x226374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x226378: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x226378u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x22637c: 0x28e3001a  slti        $v1, $a3, 0x1A
    ctx->pc = 0x22637cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x226380: 0xa1260001  sb          $a2, 0x1($t1)
    ctx->pc = 0x226380u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x226384: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x226384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x226388: 0xa1260002  sb          $a2, 0x2($t1)
    ctx->pc = 0x226388u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x22638c: 0xa1240003  sb          $a0, 0x3($t1)
    ctx->pc = 0x22638cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x226390: 0xa1260004  sb          $a2, 0x4($t1)
    ctx->pc = 0x226390u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x226394: 0xa1260005  sb          $a2, 0x5($t1)
    ctx->pc = 0x226394u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x226398: 0xa1260006  sb          $a2, 0x6($t1)
    ctx->pc = 0x226398u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x22639c: 0xa1240007  sb          $a0, 0x7($t1)
    ctx->pc = 0x22639cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x2263a0: 0xa1260008  sb          $a2, 0x8($t1)
    ctx->pc = 0x2263a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263a4: 0xa1260009  sb          $a2, 0x9($t1)
    ctx->pc = 0x2263a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263a8: 0xa126000a  sb          $a2, 0xA($t1)
    ctx->pc = 0x2263a8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263ac: 0xa124000b  sb          $a0, 0xB($t1)
    ctx->pc = 0x2263acu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x2263b0: 0xa126000c  sb          $a2, 0xC($t1)
    ctx->pc = 0x2263b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263b4: 0xa126000d  sb          $a2, 0xD($t1)
    ctx->pc = 0x2263b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263b8: 0xa126000e  sb          $a2, 0xE($t1)
    ctx->pc = 0x2263b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 14), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263bc: 0xa124000f  sb          $a0, 0xF($t1)
    ctx->pc = 0x2263bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 15), (uint8_t)GPR_U32(ctx, 4));
    // 0x2263c0: 0xa1260010  sb          $a2, 0x10($t1)
    ctx->pc = 0x2263c0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263c4: 0xa1260011  sb          $a2, 0x11($t1)
    ctx->pc = 0x2263c4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 17), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263c8: 0xa1260012  sb          $a2, 0x12($t1)
    ctx->pc = 0x2263c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 18), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263cc: 0xa1240013  sb          $a0, 0x13($t1)
    ctx->pc = 0x2263ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 19), (uint8_t)GPR_U32(ctx, 4));
    // 0x2263d0: 0xa1260014  sb          $a2, 0x14($t1)
    ctx->pc = 0x2263d0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 20), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263d4: 0xa1260015  sb          $a2, 0x15($t1)
    ctx->pc = 0x2263d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 21), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263d8: 0xa1260016  sb          $a2, 0x16($t1)
    ctx->pc = 0x2263d8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 22), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263dc: 0xa1240017  sb          $a0, 0x17($t1)
    ctx->pc = 0x2263dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 23), (uint8_t)GPR_U32(ctx, 4));
    // 0x2263e0: 0xa1260018  sb          $a2, 0x18($t1)
    ctx->pc = 0x2263e0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263e4: 0xa1260019  sb          $a2, 0x19($t1)
    ctx->pc = 0x2263e4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 25), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263e8: 0xa126001a  sb          $a2, 0x1A($t1)
    ctx->pc = 0x2263e8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 26), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263ec: 0xa124001b  sb          $a0, 0x1B($t1)
    ctx->pc = 0x2263ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 27), (uint8_t)GPR_U32(ctx, 4));
    // 0x2263f0: 0xa126001c  sb          $a2, 0x1C($t1)
    ctx->pc = 0x2263f0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 28), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263f4: 0xa126001d  sb          $a2, 0x1D($t1)
    ctx->pc = 0x2263f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 29), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263f8: 0xa126001e  sb          $a2, 0x1E($t1)
    ctx->pc = 0x2263f8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 30), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263fc: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2263FCu;
    {
        const bool branch_taken_0x2263fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263FCu;
        // 0x226400: 0xa124001f  sb          $a0, 0x1F($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 31), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263fc) {
            ctx->pc = 0x226370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226370;
        }
    }
    ctx->pc = 0x226404u;
    // 0x226404: 0x28e10022  slti        $at, $a3, 0x22
    ctx->pc = 0x226404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)34) ? 1 : 0);
    ctx->pc = 0x226408u;
}
