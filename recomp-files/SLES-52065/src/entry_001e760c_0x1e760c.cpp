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

// Function: entry_001e760c
// Address: 0x1e760c - 0x1e762c
void entry_001e760c_0x1e760c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e760c_0x1e760c");
#endif

    ctx->pc = 0x1e760cu;

    // 0x1e760c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1e760cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e7610: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1e7610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e7614: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x1e7614u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e7618: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1e7618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e761c: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x1e761cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e7620: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x1e7620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e7624: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x1e7624u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e7628: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x1e7628u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1e762cu;
}
