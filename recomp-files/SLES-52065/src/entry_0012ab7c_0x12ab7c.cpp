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

// Function: entry_0012ab7c
// Address: 0x12ab7c - 0x12aba8
void entry_0012ab7c_0x12ab7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ab7c_0x12ab7c");
#endif

    ctx->pc = 0x12ab7cu;

    // 0x12ab7c: 0x0  nop
    ctx->pc = 0x12ab7cu;
    // NOP
    // 0x12ab80: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x12ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x12ab84: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x12ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x12ab88: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ab8c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x12ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12ab90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12ab90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12ab94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12ab98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12aba0: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x12aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
    // 0x12aba4: 0x24560044  addiu       $s6, $v0, 0x44
    ctx->pc = 0x12aba4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    ctx->pc = 0x12aba8u;
}
