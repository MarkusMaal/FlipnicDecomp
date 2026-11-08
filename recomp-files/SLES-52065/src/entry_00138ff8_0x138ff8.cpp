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

// Function: entry_00138ff8
// Address: 0x138ff8 - 0x139038
void entry_00138ff8_0x138ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138ff8_0x138ff8");
#endif

    ctx->pc = 0x138ff8u;

    // 0x138ff8: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x138ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138ffc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x138ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139000: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x139000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x139004: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x139004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x139008: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13900c: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x13900cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x139010: 0x3463801f  ori         $v1, $v1, 0x801F
    ctx->pc = 0x139010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32799);
    // 0x139014: 0xa1460003  sb          $a2, 0x3($t2)
    ctx->pc = 0x139014u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x139018: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x139018u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13901c: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x13901cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x139020: 0xa5450000  sh          $a1, 0x0($t2)
    ctx->pc = 0x139020u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x139024: 0xad440008  sw          $a0, 0x8($t2)
    ctx->pc = 0x139024u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 4));
    // 0x139028: 0xad43000c  sw          $v1, 0xC($t2)
    ctx->pc = 0x139028u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
    // 0x13902c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139030: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139034: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x139034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x139038u;
}
