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

// Function: entry_0013b490
// Address: 0x13b490 - 0x13b4b8
void entry_0013b490_0x13b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b490_0x13b490");
#endif

    ctx->pc = 0x13b490u;

    // 0x13b490: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13b490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b494: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x13b494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x13b498: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x13b498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x13b49c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x13b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13b4a0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x13b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x13b4a4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13b4a8: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x13b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x13b4ac: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x13b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13b4b0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x13b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x13b4b4: 0x0  nop
    ctx->pc = 0x13b4b4u;
    // NOP
    ctx->pc = 0x13b4b8u;
}
