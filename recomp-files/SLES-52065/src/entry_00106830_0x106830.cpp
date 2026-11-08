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

// Function: entry_00106830
// Address: 0x106830 - 0x106850
void entry_00106830_0x106830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106830_0x106830");
#endif

    ctx->pc = 0x106830u;

    // 0x106830: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x106830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x106834: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x106834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x106838: 0x0  nop
    ctx->pc = 0x106838u;
    // NOP
    // 0x10683c: 0x80425a4  j           func_109690
    ctx->pc = 0x10683Cu;
    ctx->pc = 0x106840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10683Cu;
    // 0x106840: 0xac8501d4  sw          $a1, 0x1D4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    FUN_00109690_0x109690(rdram, ctx, runtime); return;
    ctx->pc = 0x106844u;
    // 0x106844: 0x0  nop
    ctx->pc = 0x106844u;
    // NOP
    // 0x106848: 0x0  nop
    ctx->pc = 0x106848u;
    // NOP
    // 0x10684c: 0x0  nop
    ctx->pc = 0x10684cu;
    // NOP
    ctx->pc = 0x106850u;
}
