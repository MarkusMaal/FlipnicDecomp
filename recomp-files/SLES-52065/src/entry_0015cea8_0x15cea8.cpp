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

// Function: entry_0015cea8
// Address: 0x15cea8 - 0x15cee4
void entry_0015cea8_0x15cea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cea8_0x15cea8");
#endif

    ctx->pc = 0x15cea8u;

    // 0x15cea8: 0x8ea32c1c  lw          $v1, 0x2C1C($s5)
    ctx->pc = 0x15cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15ceac: 0x763821  addu        $a3, $v1, $s6
    ctx->pc = 0x15ceacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x15ceb0: 0x90e30042  lbu         $v1, 0x42($a3)
    ctx->pc = 0x15ceb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 66)));
    // 0x15ceb4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x15CEB4u;
    {
        const bool branch_taken_0x15ceb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ceb4) {
            ctx->pc = 0x15CF10u;
            return;
        }
    }
    ctx->pc = 0x15CEBCu;
    // 0x15cebc: 0x84e6000a  lh          $a2, 0xA($a3)
    ctx->pc = 0x15cebcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15cec0: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x15cec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x15cec4: 0x84e4000c  lh          $a0, 0xC($a3)
    ctx->pc = 0x15cec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x15cec8: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x15cec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x15cecc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15ceccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15ced0: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x15ced0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15ced4: 0x2639021  addu        $s2, $s3, $v1
    ctx->pc = 0x15ced4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x15ced8: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x15ced8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x15cedc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x15CEDCu;
    {
        const bool branch_taken_0x15cedc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEDCu;
        // 0x15cee0: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cedc) {
            ctx->pc = 0x15CF10u;
            return;
        }
    }
    ctx->pc = 0x15CEE4u;
}
