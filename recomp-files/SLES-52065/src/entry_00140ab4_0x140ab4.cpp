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

// Function: entry_00140ab4
// Address: 0x140ab4 - 0x140af8
void entry_00140ab4_0x140ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140ab4_0x140ab4");
#endif

    ctx->pc = 0x140ab4u;

    // 0x140ab4: 0x0  nop
    ctx->pc = 0x140ab4u;
    // NOP
    // 0x140ab8: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x140ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140abc: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x140abcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x140ac0: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x140ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x140ac4: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x140ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x140ac8: 0x8cec0000  lw          $t4, 0x0($a3)
    ctx->pc = 0x140ac8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140acc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x140accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x140ad0: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x140ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x140ad4: 0x8faa0060  lw          $t2, 0x60($sp)
    ctx->pc = 0x140ad4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140ad8: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x140ad8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140adc: 0x8d4d000c  lw          $t5, 0xC($t2)
    ctx->pc = 0x140adcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x140ae0: 0x156d0005  bne         $t3, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x140AE0u;
    {
        const bool branch_taken_0x140ae0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 13));
        if (branch_taken_0x140ae0) {
            ctx->pc = 0x140AF8u;
            return;
        }
    }
    ctx->pc = 0x140AE8u;
    // 0x140ae8: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x140ae8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x140aec: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x140aecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x140af0: 0x1aa5021  addu        $t2, $t5, $t2
    ctx->pc = 0x140af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x140af4: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x140af4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    ctx->pc = 0x140af8u;
}
