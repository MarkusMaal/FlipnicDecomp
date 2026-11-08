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

// Function: entry_0012c758
// Address: 0x12c758 - 0x12c764
void entry_0012c758_0x12c758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c758_0x12c758");
#endif

    ctx->pc = 0x12c758u;

    // 0x12c758: 0x90e30045  lbu         $v1, 0x45($a3)
    ctx->pc = 0x12c758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 69)));
    // 0x12c75c: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x12c75cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
    // 0x12c760: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x12c760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x12c764u;
}
