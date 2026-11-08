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

// Function: entry_00206e10
// Address: 0x206e10 - 0x206e28
void entry_00206e10_0x206e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206e10_0x206e10");
#endif

    ctx->pc = 0x206e10u;

    // 0x206e10: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x206e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x206e14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x206e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x206e18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x206e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x206e1c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x206e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x206e20: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x206e20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x206e24: 0x0  nop
    ctx->pc = 0x206e24u;
    // NOP
    ctx->pc = 0x206e28u;
}
