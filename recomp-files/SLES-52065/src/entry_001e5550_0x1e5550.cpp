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

// Function: entry_001e5550
// Address: 0x1e5550 - 0x1e556c
void entry_001e5550_0x1e5550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5550_0x1e5550");
#endif

    ctx->pc = 0x1e5550u;

    // 0x1e5550: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e5550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e5554: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5558: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e5558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e555c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e555cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e5560: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e5560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5564: 0x0  nop
    ctx->pc = 0x1e5564u;
    // NOP
    // 0x1e5568: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e5568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e556cu;
}
