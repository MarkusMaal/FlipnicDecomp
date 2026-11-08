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

// Function: entry_00204f7c
// Address: 0x204f7c - 0x204f90
void entry_00204f7c_0x204f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204f7c_0x204f7c");
#endif

    ctx->pc = 0x204f7cu;

    // 0x204f7c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x204f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x204f80: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x204f80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x204f84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x204f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204f88: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x204f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x204f8c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x204f8cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    ctx->pc = 0x204f90u;
}
