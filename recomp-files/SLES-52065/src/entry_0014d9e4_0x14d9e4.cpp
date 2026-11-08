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

// Function: entry_0014d9e4
// Address: 0x14d9e4 - 0x14da1c
void entry_0014d9e4_0x14d9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d9e4_0x14d9e4");
#endif

    ctx->pc = 0x14d9e4u;

    // 0x14d9e4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x14d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d9e8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14d9ec: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x14d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x14d9f0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14d9f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14d9f4: 0x14200067  bnez        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x14D9F4u;
    {
        const bool branch_taken_0x14d9f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d9f4) {
            ctx->pc = 0x14DB94u;
            return;
        }
    }
    ctx->pc = 0x14D9FCu;
    // 0x14d9fc: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14da00: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x14da00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x14da04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14da04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14da08: 0x742023  subu        $a0, $v1, $s4
    ctx->pc = 0x14da08u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x14da0c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA0Cu;
    {
        const bool branch_taken_0x14da0c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x14DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA0Cu;
        // 0x14da10: 0x43103  sra         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da0c) {
            ctx->pc = 0x14DA1Cu;
            return;
        }
    }
    ctx->pc = 0x14DA14u;
    // 0x14da14: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x14da14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x14da18: 0x43103  sra         $a2, $a0, 4
    ctx->pc = 0x14da18u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
    ctx->pc = 0x14da1cu;
}
