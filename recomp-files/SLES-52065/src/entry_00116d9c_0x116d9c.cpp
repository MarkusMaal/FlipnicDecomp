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

// Function: entry_00116d9c
// Address: 0x116d9c - 0x116dcc
void entry_00116d9c_0x116d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d9c_0x116d9c");
#endif

    ctx->pc = 0x116d9cu;

    // 0x116d9c: 0x0  nop
    ctx->pc = 0x116d9cu;
    // NOP
    // 0x116da0: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x116da0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116da4: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116DA4u;
    {
        const bool branch_taken_0x116da4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x116da4) {
            ctx->pc = 0x116D8Cu;
            return;
        }
    }
    ctx->pc = 0x116DACu;
    // 0x116dac: 0x95260002  lhu         $a2, 0x2($t1)
    ctx->pc = 0x116dacu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x116db0: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x116DB0u;
    {
        const bool branch_taken_0x116db0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x116db0) {
            ctx->pc = 0x116E40u;
            return;
        }
    }
    ctx->pc = 0x116DB8u;
    // 0x116db8: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x116db8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116dbc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x116dbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x116dc0: 0x8d470018  lw          $a3, 0x18($t2)
    ctx->pc = 0x116dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x116dc4: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x116dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x116dc8: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x116dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->pc = 0x116dccu;
}
