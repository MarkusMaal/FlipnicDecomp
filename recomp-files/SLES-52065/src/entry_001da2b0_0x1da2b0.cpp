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

// Function: entry_001da2b0
// Address: 0x1da2b0 - 0x1da308
void entry_001da2b0_0x1da2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da2b0_0x1da2b0");
#endif

    ctx->pc = 0x1da2b0u;

    // 0x1da2b0: 0x1c0782d  daddu       $t7, $t6, $zero
    ctx->pc = 0x1da2b0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2b4: 0x164102  srl         $t0, $s6, 4
    ctx->pc = 0x1da2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 4));
    // 0x1da2b8: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x1da2b8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2bc: 0x172102  srl         $a0, $s7, 4
    ctx->pc = 0x1da2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 23), 4));
    // 0x1da2c0: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x1da2c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2c4: 0x2407fff7  addiu       $a3, $zero, -0x9
    ctx->pc = 0x1da2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1da2c8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1da2c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2cc: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x1da2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x1da2d0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1da2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2d4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1da2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da2d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1da2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2dc: 0xa1d20000  sb          $s2, 0x0($t6)
    ctx->pc = 0x1da2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x1da2e0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1da2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2e4: 0xa1ec0001  sb          $t4, 0x1($t7)
    ctx->pc = 0x1da2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1), (uint8_t)GPR_U32(ctx, 12));
    // 0x1da2e8: 0xa1a80002  sb          $t0, 0x2($t5)
    ctx->pc = 0x1da2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x1da2ec: 0xa1330003  sb          $s3, 0x3($t1)
    ctx->pc = 0x1da2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x1da2f0: 0xa1440004  sb          $a0, 0x4($t2)
    ctx->pc = 0x1da2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1da2f4: 0xa0b50005  sb          $s5, 0x5($a1)
    ctx->pc = 0x1da2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 21));
    // 0x1da2f8: 0xa0d80006  sb          $t8, 0x6($a2)
    ctx->pc = 0x1da2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 24));
    // 0x1da2fc: 0xa0590007  sb          $t9, 0x7($v0)
    ctx->pc = 0x1da2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 25));
    // 0x1da300: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1DA300u;
    {
        const bool branch_taken_0x1da300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA300u;
        // 0x1da304: 0xa2870008  sb          $a3, 0x8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da300) {
            ctx->pc = 0x1DA50Cu;
            return;
        }
    }
    ctx->pc = 0x1DA308u;
}
