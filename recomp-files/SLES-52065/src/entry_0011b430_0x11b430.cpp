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

// Function: entry_0011b430
// Address: 0x11b430 - 0x11b468
void entry_0011b430_0x11b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b430_0x11b430");
#endif

    ctx->pc = 0x11b430u;

    // 0x11b430: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x11b430u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11b434: 0x15200014  bnez        $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x11B434u;
    {
        const bool branch_taken_0x11b434 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b434) {
            ctx->pc = 0x11B488u;
            return;
        }
    }
    ctx->pc = 0x11B43Cu;
    // 0x11b43c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x11b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11b440: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x11b440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x11b444: 0x8084ffff  lb          $a0, -0x1($a0)
    ctx->pc = 0x11b444u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x11b448: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x11B448u;
    {
        const bool branch_taken_0x11b448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x11B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B448u;
        // 0x11b44c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b448) {
            ctx->pc = 0x11B498u;
            return;
        }
    }
    ctx->pc = 0x11B450u;
    // 0x11b450: 0x14e40005  bne         $a3, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B450u;
    {
        const bool branch_taken_0x11b450 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x11b450) {
            ctx->pc = 0x11B468u;
            return;
        }
    }
    ctx->pc = 0x11B458u;
    // 0x11b458: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x11b458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11b45c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11b45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b460: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11B460u;
    {
        const bool branch_taken_0x11b460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B460u;
        // 0x11b464: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b460) {
            ctx->pc = 0x11B498u;
            return;
        }
    }
    ctx->pc = 0x11B468u;
}
