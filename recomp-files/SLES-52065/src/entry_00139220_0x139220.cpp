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

// Function: entry_00139220
// Address: 0x139220 - 0x13927c
void entry_00139220_0x139220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139220_0x139220");
#endif

    ctx->pc = 0x139220u;

    // 0x139220: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x139220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139224: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x139224u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139228: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x139228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x13922c: 0x24e50003  addiu       $a1, $a3, 0x3
    ctx->pc = 0x13922cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x139230: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x139230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x139234: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x139234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x139238: 0x244266e0  addiu       $v0, $v0, 0x66E0
    ctx->pc = 0x139238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26336));
    // 0x13923c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x13923cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x139240: 0x55082  srl         $t2, $a1, 2
    ctx->pc = 0x139240u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x139244: 0x34860104  ori         $a2, $a0, 0x104
    ctx->pc = 0x139244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)260);
    // 0x139248: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x139248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x13924c: 0xa06b0003  sb          $t3, 0x3($v1)
    ctx->pc = 0x13924cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x139250: 0x3c046e00  lui         $a0, 0x6E00
    ctx->pc = 0x139250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28160 << 16));
    // 0x139254: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139258: 0x3484c022  ori         $a0, $a0, 0xC022
    ctx->pc = 0x139258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49186);
    // 0x13925c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13925cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x139260: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x139260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x139264: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x139264u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x139268: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x139268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x13926c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x13926cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x139270: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139274: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139278: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x139278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x13927cu;
}
