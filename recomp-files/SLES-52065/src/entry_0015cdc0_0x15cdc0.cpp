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

// Function: entry_0015cdc0
// Address: 0x15cdc0 - 0x15ce00
void entry_0015cdc0_0x15cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cdc0_0x15cdc0");
#endif

    ctx->pc = 0x15cdc0u;

    // 0x15cdc0: 0x8ea32c1c  lw          $v1, 0x2C1C($s5)
    ctx->pc = 0x15cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15cdc4: 0x7e3821  addu        $a3, $v1, $fp
    ctx->pc = 0x15cdc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x15cdc8: 0x90e30042  lbu         $v1, 0x42($a3)
    ctx->pc = 0x15cdc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 66)));
    // 0x15cdcc: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x15CDCCu;
    {
        const bool branch_taken_0x15cdcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cdcc) {
            ctx->pc = 0x15CE88u;
            return;
        }
    }
    ctx->pc = 0x15CDD4u;
    // 0x15cdd4: 0x84e6000a  lh          $a2, 0xA($a3)
    ctx->pc = 0x15cdd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15cdd8: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x15cdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x15cddc: 0x84e4000c  lh          $a0, 0xC($a3)
    ctx->pc = 0x15cddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x15cde0: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x15cde0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x15cde4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15cde8: 0x85a021  addu        $s4, $a0, $a1
    ctx->pc = 0x15cde8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15cdec: 0x2839021  addu        $s2, $s4, $v1
    ctx->pc = 0x15cdecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x15cdf0: 0x292082a  slt         $at, $s4, $s2
    ctx->pc = 0x15cdf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x15cdf4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x15CDF4u;
    {
        const bool branch_taken_0x15cdf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDF4u;
        // 0x15cdf8: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdf4) {
            ctx->pc = 0x15CE2Cu;
            return;
        }
    }
    ctx->pc = 0x15CDFCu;
    // 0x15cdfc: 0x14b880  sll         $s7, $s4, 2
    ctx->pc = 0x15cdfcu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    ctx->pc = 0x15ce00u;
}
