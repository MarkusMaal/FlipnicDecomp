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

// Function: caseD_fffffffd
// Address: 0x19194c - 0x191984
void caseD_fffffffd_0x19194c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_fffffffd_0x19194c");
#endif

    ctx->pc = 0x19194cu;

    // 0x19194c: 0x0  nop
    ctx->pc = 0x19194cu;
    // NOP
    // 0x191950: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x191950u;
    {
        const bool branch_taken_0x191950 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x191950) {
            ctx->pc = 0x191998u;
            return;
        }
    }
    ctx->pc = 0x191958u;
    // 0x191958: 0x8e430660  lw          $v1, 0x660($s2)
    ctx->pc = 0x191958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    // 0x19195c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19195cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191960: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x191960u;
    {
        const bool branch_taken_0x191960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x191960) {
            ctx->pc = 0x191990u;
            return;
        }
    }
    ctx->pc = 0x191968u;
    // 0x191968: 0x8e440664  lw          $a0, 0x664($s2)
    ctx->pc = 0x191968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x19196c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19196cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x191970: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x191970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191974: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191974u;
    {
        const bool branch_taken_0x191974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x191974) {
            ctx->pc = 0x191984u;
            return;
        }
    }
    ctx->pc = 0x19197Cu;
    // 0x19197c: 0x10000269  b           . + 4 + (0x269 << 2)
    ctx->pc = 0x19197Cu;
    {
        const bool branch_taken_0x19197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19197Cu;
        // 0x191980: 0xac4504d0  sw          $a1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19197c) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191984u;
}
