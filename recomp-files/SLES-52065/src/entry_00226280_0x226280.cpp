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

// Function: entry_00226280
// Address: 0x226280 - 0x226330
void entry_00226280_0x226280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226280_0x226280");
#endif

    ctx->pc = 0x226280u;

label_226280:
    // 0x226280: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x226280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x226284: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x226284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x226288: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x226288u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x22628c: 0x28e3001a  slti        $v1, $a3, 0x1A
    ctx->pc = 0x22628cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x226290: 0xa1260001  sb          $a2, 0x1($t1)
    ctx->pc = 0x226290u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x226294: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x226294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x226298: 0xa1260002  sb          $a2, 0x2($t1)
    ctx->pc = 0x226298u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x22629c: 0xa1240003  sb          $a0, 0x3($t1)
    ctx->pc = 0x22629cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2262a0: 0xa1260004  sb          $a2, 0x4($t1)
    ctx->pc = 0x2262a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262a4: 0xa1260005  sb          $a2, 0x5($t1)
    ctx->pc = 0x2262a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262a8: 0xa1260006  sb          $a2, 0x6($t1)
    ctx->pc = 0x2262a8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262ac: 0xa1240007  sb          $a0, 0x7($t1)
    ctx->pc = 0x2262acu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x2262b0: 0xa1260008  sb          $a2, 0x8($t1)
    ctx->pc = 0x2262b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262b4: 0xa1260009  sb          $a2, 0x9($t1)
    ctx->pc = 0x2262b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262b8: 0xa126000a  sb          $a2, 0xA($t1)
    ctx->pc = 0x2262b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262bc: 0xa124000b  sb          $a0, 0xB($t1)
    ctx->pc = 0x2262bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x2262c0: 0xa126000c  sb          $a2, 0xC($t1)
    ctx->pc = 0x2262c0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262c4: 0xa126000d  sb          $a2, 0xD($t1)
    ctx->pc = 0x2262c4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262c8: 0xa126000e  sb          $a2, 0xE($t1)
    ctx->pc = 0x2262c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 14), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262cc: 0xa124000f  sb          $a0, 0xF($t1)
    ctx->pc = 0x2262ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 15), (uint8_t)GPR_U32(ctx, 4));
    // 0x2262d0: 0xa1260010  sb          $a2, 0x10($t1)
    ctx->pc = 0x2262d0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262d4: 0xa1260011  sb          $a2, 0x11($t1)
    ctx->pc = 0x2262d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 17), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262d8: 0xa1260012  sb          $a2, 0x12($t1)
    ctx->pc = 0x2262d8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 18), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262dc: 0xa1240013  sb          $a0, 0x13($t1)
    ctx->pc = 0x2262dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 19), (uint8_t)GPR_U32(ctx, 4));
    // 0x2262e0: 0xa1260014  sb          $a2, 0x14($t1)
    ctx->pc = 0x2262e0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 20), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262e4: 0xa1260015  sb          $a2, 0x15($t1)
    ctx->pc = 0x2262e4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 21), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262e8: 0xa1260016  sb          $a2, 0x16($t1)
    ctx->pc = 0x2262e8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 22), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262ec: 0xa1240017  sb          $a0, 0x17($t1)
    ctx->pc = 0x2262ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 23), (uint8_t)GPR_U32(ctx, 4));
    // 0x2262f0: 0xa1260018  sb          $a2, 0x18($t1)
    ctx->pc = 0x2262f0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262f4: 0xa1260019  sb          $a2, 0x19($t1)
    ctx->pc = 0x2262f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 25), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262f8: 0xa126001a  sb          $a2, 0x1A($t1)
    ctx->pc = 0x2262f8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 26), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262fc: 0xa124001b  sb          $a0, 0x1B($t1)
    ctx->pc = 0x2262fcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 27), (uint8_t)GPR_U32(ctx, 4));
    // 0x226300: 0xa126001c  sb          $a2, 0x1C($t1)
    ctx->pc = 0x226300u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 28), (uint8_t)GPR_U32(ctx, 6));
    // 0x226304: 0xa126001d  sb          $a2, 0x1D($t1)
    ctx->pc = 0x226304u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 29), (uint8_t)GPR_U32(ctx, 6));
    // 0x226308: 0xa126001e  sb          $a2, 0x1E($t1)
    ctx->pc = 0x226308u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 30), (uint8_t)GPR_U32(ctx, 6));
    // 0x22630c: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x22630Cu;
    {
        const bool branch_taken_0x22630c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22630Cu;
        // 0x226310: 0xa124001f  sb          $a0, 0x1F($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 31), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22630c) {
            ctx->pc = 0x226280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226280;
        }
    }
    ctx->pc = 0x226314u;
    // 0x226314: 0x28e10022  slti        $at, $a3, 0x22
    ctx->pc = 0x226314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x226318: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x226318u;
    {
        const bool branch_taken_0x226318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226318u;
        // 0x22631c: 0x74080  sll         $t0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226318) {
            ctx->pc = 0x226354u;
            return;
        }
    }
    ctx->pc = 0x226320u;
    // 0x226320: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x226320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x226324: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x226324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x226328: 0x24a56650  addiu       $a1, $a1, 0x6650
    ctx->pc = 0x226328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26192));
    // 0x22632c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x22632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x226330u;
}
