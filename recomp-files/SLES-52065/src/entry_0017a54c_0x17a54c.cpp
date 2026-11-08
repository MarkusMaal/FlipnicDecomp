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

// Function: entry_0017a54c
// Address: 0x17a54c - 0x17a56c
void entry_0017a54c_0x17a54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a54c_0x17a54c");
#endif

    ctx->pc = 0x17a54cu;

    // 0x17a54c: 0x0  nop
    ctx->pc = 0x17a54cu;
    // NOP
    // 0x17a550: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x17a550u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x17a554: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x17a554u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x17a558: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x17a558u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17a55c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x17a55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x17a560: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x17a560u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x17a564: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x17a564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x17a568: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x17a568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->pc = 0x17a56cu;
}
