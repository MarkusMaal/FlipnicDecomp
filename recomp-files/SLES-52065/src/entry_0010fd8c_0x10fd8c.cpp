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

// Function: entry_0010fd8c
// Address: 0x10fd8c - 0x10fdd8
void entry_0010fd8c_0x10fd8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fd8c_0x10fd8c");
#endif

    ctx->pc = 0x10fd8cu;

    // 0x10fd8c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x10fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x10fd90: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x10FD90u;
    {
        const bool branch_taken_0x10fd90 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x10fd90) {
            ctx->pc = 0x10FDD8u;
            return;
        }
    }
    ctx->pc = 0x10FD98u;
    // 0x10fd98: 0x92260040  lbu         $a2, 0x40($s1)
    ctx->pc = 0x10fd98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x10fd9c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x10FD9Cu;
    {
        const bool branch_taken_0x10fd9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fd9c) {
            ctx->pc = 0x10FDD8u;
            return;
        }
    }
    ctx->pc = 0x10FDA4u;
    // 0x10fda4: 0x8e290038  lw          $t1, 0x38($s1)
    ctx->pc = 0x10fda4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x10fda8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x10fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10fdac: 0x8e280024  lw          $t0, 0x24($s1)
    ctx->pc = 0x10fdacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10fdb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fdb4: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x10fdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10fdb8: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x10fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10fdbc: 0xace50288  sw          $a1, 0x288($a3)
    ctx->pc = 0x10fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 648), GPR_U32(ctx, 5));
    // 0x10fdc0: 0xa0e0028c  sb          $zero, 0x28C($a3)
    ctx->pc = 0x10fdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 652), (uint8_t)GPR_U32(ctx, 0));
    // 0x10fdc4: 0xace80290  sw          $t0, 0x290($a3)
    ctx->pc = 0x10fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 656), GPR_U32(ctx, 8));
    // 0x10fdc8: 0xace40294  sw          $a0, 0x294($a3)
    ctx->pc = 0x10fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 660), GPR_U32(ctx, 4));
    // 0x10fdcc: 0xa0e60298  sb          $a2, 0x298($a3)
    ctx->pc = 0x10fdccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 664), (uint8_t)GPR_U32(ctx, 6));
    // 0x10fdd0: 0xace9029c  sw          $t1, 0x29C($a3)
    ctx->pc = 0x10fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 668), GPR_U32(ctx, 9));
    // 0x10fdd4: 0xa0e30285  sb          $v1, 0x285($a3)
    ctx->pc = 0x10fdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 645), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10fdd8u;
}
