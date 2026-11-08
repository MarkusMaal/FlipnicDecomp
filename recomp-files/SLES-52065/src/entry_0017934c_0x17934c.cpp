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

// Function: entry_0017934c
// Address: 0x17934c - 0x17936c
void entry_0017934c_0x17934c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017934c_0x17934c");
#endif

    ctx->pc = 0x17934cu;

    // 0x17934c: 0x0  nop
    ctx->pc = 0x17934cu;
    // NOP
    // 0x179350: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x179350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x179354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179358: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x179358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x17935c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17935cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x179360: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x179360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x179364: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x179364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x179368: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x179368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->pc = 0x17936cu;
}
