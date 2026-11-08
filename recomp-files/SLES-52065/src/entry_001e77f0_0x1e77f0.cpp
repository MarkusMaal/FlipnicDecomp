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

// Function: entry_001e77f0
// Address: 0x1e77f0 - 0x1e7810
void entry_001e77f0_0x1e77f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e77f0_0x1e77f0");
#endif

    ctx->pc = 0x1e77f0u;

    // 0x1e77f0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1e77f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e77f4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1e77f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e77f8: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x1e77f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e77fc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e77fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7800: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x1e7800u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e7804: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x1e7804u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e7808: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x1e7808u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e780c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x1e780cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1e7810u;
}
