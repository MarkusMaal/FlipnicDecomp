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

// Function: entry_00140af8
// Address: 0x140af8 - 0x140b10
void entry_00140af8_0x140af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140af8_0x140af8");
#endif

    ctx->pc = 0x140af8u;

    // 0x140af8: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x140af8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140afc: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x140afcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x140b00: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x140b00u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x140b04: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x140b04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140b08: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x140b08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x140b0c: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x140b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    ctx->pc = 0x140b10u;
}
