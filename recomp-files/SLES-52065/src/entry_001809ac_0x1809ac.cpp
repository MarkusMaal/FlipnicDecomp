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

// Function: entry_001809ac
// Address: 0x1809ac - 0x180a0c
void entry_001809ac_0x1809ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001809ac_0x1809ac");
#endif

    ctx->pc = 0x1809acu;

    // 0x1809ac: 0x8e46005c  lw          $a2, 0x5C($s2)
    ctx->pc = 0x1809acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1809b0: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x1809b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1809b4: 0x8f84867c  lw          $a0, -0x7984($gp)
    ctx->pc = 0x1809b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
    // 0x1809b8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1809b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1809bc: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1809bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1809c0: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1809c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1809c4: 0x8cc700d0  lw          $a3, 0xD0($a2)
    ctx->pc = 0x1809c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x1809c8: 0x8ce60024  lw          $a2, 0x24($a3)
    ctx->pc = 0x1809c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1809cc: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1809ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1809d0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1809d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1809d4: 0xace40024  sw          $a0, 0x24($a3)
    ctx->pc = 0x1809d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 4));
    // 0x1809d8: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x1809d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1809dc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1809dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1809e0: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1809e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1809e4: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x1809e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x1809e8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1809e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1809ec: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1809ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1809f0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1809f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1809f4: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x1809f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1809f8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1809f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1809fc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1809fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x180a00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x180a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x180a04: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x180a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x180a08: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x180a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x180a0cu;
}
