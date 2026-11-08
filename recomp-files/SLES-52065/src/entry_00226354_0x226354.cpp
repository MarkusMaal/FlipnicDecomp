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

// Function: entry_00226354
// Address: 0x226354 - 0x226370
void entry_00226354_0x226354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226354_0x226354");
#endif

    ctx->pc = 0x226354u;

    // 0x226354: 0x0  nop
    ctx->pc = 0x226354u;
    // NOP
    // 0x226358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x226358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22635c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22635cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226360: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x226360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x226364: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x226364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x226368: 0x24a566e0  addiu       $a1, $a1, 0x66E0
    ctx->pc = 0x226368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26336));
    // 0x22636c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x22636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x226370u;
}
